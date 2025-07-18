// SPDX-License-Identifier: AGPL-3.0-or-later

typedef enum {
    SKELERANG_INIT,
    SKELERANG_GROUND_INIT,
    SKELERANG_IDLE = 3,
    SKELERANG_ATTACK_INIT,
    SKELERANG_WAKE_ANIM,
    SKELERANG_BOOMERANG_CHECK,
    SKELERANG_CATCH,
    SKELERANG_COWER,
    SKELERANG_POST_ATTACK,
    SKELERANG_DEATH_COWER,
    SKELERANG_DEATH = 12,
    SKELERANG_DEATH_FLY = 14,
    SKELERANG_DEBUG = 16
} SkelerangSteps;

typedef enum {
    BOOMERANG_INIT,
    BOOMERANG_PRETHROW,
    BOOMERANG_FLY,
    BOOMERANG_IN_HAND,
    BOOMERANG_DESTROY
} SkelerangBoomerangSteps;

static s16 sensors_ground[][2] = {{0, 24}, {0, 4}, {8, -4}, {-16, 0}};
static Point16 positions[] = {{8, -10}, {-4, -10}, {0, -30}, {0, -30}, {3, -8},
                              {4, 6},   {-2, 6},   {12, 16}, {-8, 16}};
static u8 anim_wake[] = {
    32, 1, 49, 2, 2, 3, 3, 4, 3, 5, 1, 6, 1, 7, 1, 8, 33, 9, -1, 0};
static u8 anim_bounce[] = {
    4, 9, 4, 10, 4, 11, 4, 12, 10, 13, 6, 12, 6, 11, 6, 10, 0, 0};
static u8 D_us_80181EF0[] = {
    6, 10, 6, 11, 5, 12, 5, 13, 5, 12, 6, 11, 10, 10, -1, 0};
static u8 anim_spin_boomerang[] = {
    1, 19, 1, 24, 1,  18, 1,  17, 1, 16, 1, 15, 1, 14, 1,  20, 1, 21,
    1, 22, 1, 23, 1,  24, 24, 25, 3, 26, 4, 27, 6, 28, 2,  29, 1, 30,
    4, 31, 2, 33, 48, 32, 4,  33, 3, 34, 3, 35, 4, 36, -1, 0};
static u8 anim_catch[] = {24, 13, -1, 0};
static u8 anim_cower_crouch[] = {
    16, 10, 6, 9, 32, 8, 6, 37, 4, 38, 6, 39, 3, 40, 8, 41, -1, 0};
static u8 anim_cower_stand[] = {
    8, 41, 3, 40, 6, 39, 4, 38, 6, 37, 32, 8, 6, 9, 16, 10, -1, 0};
static u8 anim_cower[] = {1, 41, 1, 42, 0, 0};
static u8 D_us_80181F68[] = {2, 41, 2, 40, 2, 39, 2, 38, 2, 37, -1, 0};
static u8 D_us_80181F74[] = {2, 36, 2, 35, 2, 34, 2, 32, -1, 0};

void EntitySkelerang(Entity* self) {
    Entity* entity;
    Entity* entityTwo;
    s32 i;
    u8 index;

    if (self->step % 2 && GetDistanceToPlayerY() < 32 &&
        GetDistanceToPlayerX() < 80) {
        SetStep(SKELERANG_COWER);
    }

    if ((self->flags & FLAG_DEAD) && self->step < 10) {
        self->hitboxState = 0;
        PlaySfxPositional(SFX_SKELETON_DEATH_C);
        DestroyEntity(self + 1);
        (self + 2)->step = BOOMERANG_DESTROY;
        (self + 3)->step = BOOMERANG_DESTROY;
        if (self->animCurFrame > 39) {
            SetStep(SKELERANG_DEATH_COWER);
        } else {
            SetStep(SKELERANG_DEATH);
        }
    }

    switch (self->step) {
    case SKELERANG_INIT:
        InitializeEntity(g_EInitSkelerang);
        CreateEntityFromEntity(E_SKELERANG_UNKNOWN, self, self + 1);

        entity = self + 2;
        CreateEntityFromEntity(E_SKELERANG_BOOMERANG, self, entity);
        entity->params = 0;
        entity->facingLeft = self->params;

        entity = self + 3;
        CreateEntityFromEntity(E_SKELERANG_BOOMERANG, self, entity);
        entity->params = 1;
        entity->facingLeft = self->params;

        self->facingLeft = self->params;
        break;
    case SKELERANG_GROUND_INIT:
        if (UnkCollisionFunc3(sensors_ground) & 1) {
            SetStep(SKELERANG_IDLE);
        }
        break;
    case SKELERANG_IDLE:
        self->animCurFrame = 1;
        // When player gets close enough shift into wake up animation
        if (!(self->posY.i.hi & 256) && GetDistanceToPlayerX() < 128) {
            if (((GetSideToPlayer() & 1) ^ 1) == self->facingLeft) {
                SetStep(SKELERANG_WAKE_ANIM);
            }
        }
        break;
    case SKELERANG_WAKE_ANIM:
        if (!AnimateEntity(anim_wake, self)) {
            SetStep(SKELERANG_ATTACK_INIT);
        }
        break;
    case SKELERANG_POST_ATTACK:
        if (!self->step_s) {
            self->ext.skelerang.unk84 = 0;
            self->step_s++;
        }
        if (!AnimateEntity(anim_bounce, self)) {
            self->ext.skelerang.unk84++;
        }
        if (self->ext.skelerang.unk84 == 3) {
            self->ext.skelerang.unk84 = 0;
            // If player is still in range after throwing 3 boomerangs, keep
            // attacking, else return to idle
            if (GetDistanceToPlayerX() < 144 && GetDistanceToPlayerY() < 144 &&
                ((GetSideToPlayer() & 1) ^ 1) == self->facingLeft) {
                SetStep(SKELERANG_ATTACK_INIT);
            } else {
                SetStep(SKELERANG_IDLE);
            }
        }
        break;
    case SKELERANG_ATTACK_INIT:
        if (!AnimateEntity(anim_spin_boomerang, self)) {
            SetStep(SKELERANG_BOOMERANG_CHECK);
        }
        if (self->animCurFrame == 30) {
            // Spawn thrown boomerangs
            PlaySfxPositional(SFX_THROW_WEAPON_SWISHES);
            entityTwo = &PLAYER;
            entity = self + 1;
            entity->posX.i.hi = entityTwo->posX.i.hi;
            entity->posY.i.hi = entityTwo->posY.i.hi;

            entity = self + 2;
            entity->posX.i.hi = self->posX.i.hi;
            entity->posY.i.hi = self->posY.i.hi;
            entity->animCurFrame = 43;
            entity->step++;

            entity = self + 3;
            entity->posX.i.hi = self->posX.i.hi;
            entity->posY.i.hi = self->posY.i.hi;
            entity->animCurFrame = 43;
            entity->step++;
        }
        break;
    case SKELERANG_BOOMERANG_CHECK:
        entity = self + 2;
        entityTwo = self + 3;
        // If boomerangs are back in hand, prep for another attack
        if (entity->step == BOOMERANG_IN_HAND &&
            entityTwo->step == BOOMERANG_IN_HAND) {
            entity->step = BOOMERANG_PRETHROW;
            entityTwo->step = BOOMERANG_PRETHROW;
            SetStep(SKELERANG_CATCH);
        }
        break;
    case SKELERANG_CATCH:
        if (!AnimateEntity(anim_catch, self)) {
            self->ext.skelerang.unk84++;
            // Throw boomerangs 3 times, then return to attack init
            if (self->ext.skelerang.unk84 > 2) {
                SetStep(SKELERANG_POST_ATTACK);
            } else {
                SetStep(SKELERANG_ATTACK_INIT);
            }
        }
        break;
    case SKELERANG_COWER:
        switch (self->step_s) {
        case 0:
            if (!AnimateEntity(anim_cower_crouch, self)) {
                self->pose = 0;
                self->poseTimer = 0;
                self->step_s++;
            }
            break;
        case 1:
            // Play cower animation until player gets far enough away
            AnimateEntity(anim_cower, self);
            if (GetDistanceToPlayerX() > 80 || GetDistanceToPlayerY() > 48) {
                self->pose = 0;
                self->poseTimer = 0;
                self->step_s++;
            }
            break;
        case 2:
            // Once player is far enough away move out of cower and back into
            // potential attack state
            if (!AnimateEntity(anim_cower_stand, self)) {
                SetStep(SKELERANG_POST_ATTACK);
            }
            break;
        }
        break;
    case SKELERANG_DEATH_COWER:
        entity = AllocEntity(&g_Entities[224], &g_Entities[256]);
        if (entity != NULL) {
            CreateEntityFromEntity(E_EXPLOSION, self, entity);
            entity->params = 2;
            entity->posY.i.hi += 24;
        }
        DestroyEntity(self);
        break;
    case SKELERANG_DEATH:
        for (i = 0; i < 8; i++) {
            entity = AllocEntity(&g_Entities[224], &g_Entities[256]);
            if (entity != NULL) {
                MakeEntityFromId(E_SKELERANG, self, entity);
                entity->flags = FLAG_DESTROY_IF_OUT_OF_CAMERA |
                                FLAG_POS_CAMERA_LOCKED | FLAG_UNK_2000;
                entity->hitboxState = 0;
                entity->animCurFrame = i + 44;
                entity->params = i;
                entity->facingLeft = self->facingLeft;
                if ((GetSideToPlayer() & 1) ^ 1) {
                    // Sus store to Entity 0xA
                    F(entity->velocityX).i.hi = -(Random() & 3);
                } else {
                    // Sus store to Entity 0xA
                    // This + 1 - 1 is an oddity that is required to align PSP
                    F(entity->velocityX).i.hi = (Random() & 3) + 1 - 1;
                }
                // Sus store to Entity 0xE
                F(entity->velocityY).i.hi = -2 - (Random() & 3);
                entity->ext.skelerang.unk84 = 16;
                entity->step = SKELERANG_DEATH_FLY;
            }
        }

        entity = AllocEntity(&g_Entities[224], &g_Entities[256]);
        if (entity != NULL) {
            CreateEntityFromEntity(2, self, entity);
            entity->params = 2;
        }
        DestroyEntity(self);
        break;
    case SKELERANG_DEATH_FLY:
        // When dying body goes flying back in flames
        MoveEntity();
        self->velocityY += FIX(0.1875);
        if (!--self->ext.skelerang.unk84) {
            entity = AllocEntity(&g_Entities[224], &g_Entities[256]);
            if (entity != NULL) {
                CreateEntityFromEntity(E_EXPLOSION, self, entity);
                index = self->params;
                if (self->facingLeft) {
                    entity->posX.i.hi -= positions[index].x;
                } else {
                    entity->posX.i.hi += positions[index].x;
                }
                entity->posY.i.hi += positions[index].y;
            }
            DestroyEntity(self);
        }
        break;
    case SKELERANG_DEBUG:
#include "pad2_anim_debug.h"
    }

    if (self->animCurFrame > 39) {
        self->hitboxOffX = -1;
        self->hitboxOffY = 16;
        self->hitboxWidth = 8;
        self->hitboxHeight = 8;
    } else {
        self->hitboxOffX = 0;
        self->hitboxOffY = 2;
        self->hitboxWidth = 5;
        self->hitboxHeight = 21;
    }
}

void EntitySkelerangBoomerang(Entity* self) {
    Entity* entity;
    u8 step;
    s16 angle;
    s16 posX;
    s16 posY;

    switch (self->step) {
    case BOOMERANG_INIT:
        InitializeEntity(g_EInitSkelerangBoomerang);
        self->drawFlags |= FLAG_DRAW_ROTATE;
        self->animCurFrame = 0;
        self->hitboxState = 0;
        break;
    case BOOMERANG_PRETHROW:
        entity = (self - 2) - self->params;
        self->posX.i.hi = entity->posX.i.hi;
        self->posY.i.hi = entity->posY.i.hi;
        self->hitboxState = 0;
        self->animCurFrame = 0;
        self->step_s = 0;
        self->ext.skelerang.unk84 = 48;
        if (self->params) {
            self->ext.skelerang.angle = 0;
        } else {
            self->ext.skelerang.angle = 128;
        }
        break;
    case BOOMERANG_FLY:
        self->hitboxState = 1;
        MoveEntity();
        self->rotate += 256;
        if (!self->ext.skelerang.unk84) {
            self->step_s = 1;
        } else {
            self->ext.skelerang.unk84--;
        }
        entity = (self - 1) - self->params - self->step_s;
        angle = GetAngleBetweenEntitiesShifted(self, entity);
        step = self->step_s + 3;
        self->ext.skelerang.angle =
            AdjustValueWithinThreshold(step, self->ext.skelerang.angle, angle);
        SetEntityVelocityFromAngle(self->ext.skelerang.angle, 48);
        posX = entity->posX.i.hi - self->posX.i.hi;
        posY = entity->posY.i.hi - self->posY.i.hi;
        posX = abs(posX);
        posY = abs(posY);
        if (posX < 6 && posY < 6) {
            PlaySfxPositional(SFX_MULTI_CLOCK_TICK);
            self->step_s++;
        }
        if (self->step_s == 2) {
            self->step++;
        }
        break;
    case BOOMERANG_IN_HAND:
        self->hitboxState = 0;
        self->rotate = 512;
        break;
    case BOOMERANG_DESTROY:
        entity = AllocEntity(&g_Entities[224], &g_Entities[256]);
        if (entity != NULL) {
            CreateEntityFromEntity(E_EXPLOSION, self, entity);
            entity->params = 1;
        }
        DestroyEntity(self);
        break;
    }
}

void EntitySkelerangUnknown(Entity* entity) {
    Entity* parent;
    if (!entity->step) {
        InitializeEntity(g_EInitInteractable);
    }
    parent = entity - 1;
    if (parent->entityId != E_SKELERANG) {
        DestroyEntity(entity);
    }
}
