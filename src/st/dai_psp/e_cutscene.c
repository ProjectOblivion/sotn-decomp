// SPDX-License-Identifier: AGPL-3.0-or-later
#include "../dai/dai.h"
extern u8* OVL_EXPORT(cutscene_script);
extern u_long D_pspeu_092970B8;
extern u_long D_pspeu_0926E270;
extern u_long D_pspeu_0926EFF0;
extern u_long D_893EA8C;
extern u_long D_893F80C;
extern u_long D_894058C;
extern u_long D_894130C;
extern u_long D_894208C;
extern u_long D_8942E0C;
extern u_long D_8943B8C;
extern u_long D_894490C;
extern u_long D_894568C;

u8 D_pspeu_092963E0[] = {
    0x04, 0x1C, 0x04, 0x1D, 0x04, 0x1E, 0x04, 0x1F, 0xFF, 0, 0};
u8 D_pspeu_092963F0[] = {
    0x02, 0x20, 0x04, 0x21, 0x04, 0x22, 0x04, 0x23, 0x04, 0x24,
    0x04, 0x25, 0x04, 0x26, 0x04, 0x27, 0x02, 0x20, 0,    0};
u8 D_pspeu_09296408[] = {0x08, 0x28, 0x08, 0x29, 0x60, 0x2A, 0xFF, 0};

// clang-format off
static u16 actor_names_en[] = {
    CH('R'), CH('i'), CH('c'), CH('h'), CH('t'), CH('e'), CH('r'),
    CH('D'), CH('r'), CH('a'), CH('c'), CH('u'), CH('l'), CH('a'),
    CH('D'), CH('e'), CH('a'), CH('t'), CH('h'),
    CH('A'), CH('l'), CH('u'), CH('c'), CH('a'), CH('r'), CH('d'),
    CH('M'), CH('a'), CH('r'), CH('i'), CH('a'),
    CH('L'), CH('i'), CH('b'), CH('r'), CH('a'), CH('r'), CH('i'), CH('a'), CH('n'),
    CH('L'), CH('i'), CH('s'), CH('a'),
    CH('S'), CH('u'), CH('c'), CH('c'), CH('u'), CH('b'), CH('u'), CH('s'),
    CH('F'), CH('e'), CH('r'), CH('r'), CH('y'), CH('m'), CH('a'), CH('n'),
    CH('S'), CH('h'), CH('a'), CH('f'), CH('t')};
static u8 actor_name_len_en[] = {7, 7, 5, 7, 5, 9, 4, 8, 8, 5};

static u16 actor_names_sp[] = {
    CH('R'), CH('i'), CH('c'), CH('h'), CH('t'), CH('e'), CH('r'),
    CH('D'), CH('r'), CH('a'), CH('c'), CH('u'), CH('l'), CH('a'),
    CH('D'), CH('e'), CH('a'), CH('t'), CH('h'),
    CH('A'), CH('l'), CH('u'), CH('c'), CH('a'), CH('r'), CH('d'),
    CH('M'), CH('a'), CH('r'), CH('i'), CH('a'),
    CH('B'), CH('i'), CH('b'), CH('l'), CH('i'), CH('o'), CH('t'), CH('e'), CH('c'), CH('a'), CH('r'), CH('i'), CH('o'),
    CH('L'), CH('i'), CH('s'), CH('a'),
    CH('S'), 0xAC, CH('c'), CH('u'), CH('b'), CH('o'),
    CH('B'), CH('a'), CH('r'), CH('q'), CH('u'), CH('e'), CH('r'), CH('o'),
    CH('S'), CH('h'), CH('a'), CH('f'), CH('t')};
static u8 actor_name_len_sp[] = {7, 7, 5, 7, 5, 13, 4, 6, 8, 5};

static u16 actor_names_it[] = {
    CH('R'), CH('i'), CH('c'), CH('h'), CH('t'), CH('e'), CH('r'),
    CH('D'), CH('r'), CH('a'), CH('c'), CH('u'), CH('l'), CH('a'),
    CH('D'), CH('e'), CH('a'), CH('t'), CH('h'),
    CH('A'), CH('l'), CH('u'), CH('c'), CH('a'), CH('r'), CH('d'),
    CH('M'), CH('a'), CH('r'), CH('i'), CH('a'),
    CH('B'), CH('i'), CH('b'), CH('l'), CH('i'), CH('o'), CH('t'), CH('e'), CH('c'), CH('a'), CH('r'), CH('i'), CH('o'),
    CH('L'), CH('i'), CH('s'), CH('a'),
    CH('S'), CH('u'), CH('c'), CH('c'), CH('u'), CH('b'), CH('u'), CH('s'),
    CH('T'), CH('r'), CH('a'), CH('g'), CH('h'), CH('e'), CH('t'), CH('t'), CH('a'), CH('t'), CH('o'), CH('r'), CH('e'),
    CH('S'), CH('h'), CH('a'), CH('f'), CH('t')};
static u8 actor_name_len_it[] = {7, 7, 5, 7, 5, 13, 4, 8, 13, 5};

static u16 actor_names_fr[] = {
    CH('R'), CH('i'), CH('c'), CH('h'), CH('t'), CH('e'), CH('r'),
    CH('D'), CH('r'), CH('a'), CH('c'), CH('u'), CH('l'), CH('a'),
    CH('D'), CH('e'), CH('a'), CH('t'), CH('h'),
    CH('A'), CH('l'), CH('u'), CH('c'), CH('a'), CH('r'), CH('d'),
    CH('M'), CH('a'), CH('r'), CH('i'), CH('a'),
    CH('B'), CH('i'), CH('b'), CH('l'), CH('i'), CH('o'), CH('t'), CH('h'), 0xA0, CH('c'), CH('a'), CH('i'), CH('r'), CH('e'),
    CH('L'), CH('i'), CH('s'), CH('a'),
    CH('S'), CH('u'), CH('c'), CH('c'), CH('u'), CH('b'), CH('e'),
    CH('P'), CH('a'), CH('s'), CH('s'), CH('e'), CH('u'), CH('r'),
    CH('S'), CH('h'), CH('a'), CH('f'), CH('t')};
static u8 actor_name_len_fr[] = {7, 7, 5, 7, 5, 14, 4, 7, 7, 5};

static u16 actor_names_ge[] = {
    CH('R'), CH('i'), CH('c'), CH('h'), CH('t'), CH('e'), CH('r'),
    CH('D'), CH('r'), CH('a'), CH('c'), CH('u'), CH('l'), CH('a'),
    CH('D'), CH('e'), CH('a'), CH('t'), CH('h'),
    CH('A'), CH('l'), CH('u'), CH('c'), CH('a'), CH('r'), CH('d'),
    CH('M'), CH('a'), CH('r'), CH('i'), CH('a'),
    CH('B'), CH('i'), CH('b'), CH('l'), CH('i'), CH('o'), CH('t'), CH('h'), CH('e'), CH('k'), CH('a'), CH('r'),
    CH('L'), CH('i'), CH('s'), CH('a'),
    CH('S'), CH('u'), CH('k'), CH('k'), CH('u'), CH('b'), CH('u'), CH('s'),
    CH('F'), 0x9D, CH('h'), CH('r'), CH('m'), CH('a'), CH('n'), CH('n'),
    CH('S'), CH('h'), CH('a'), CH('f'), CH('t')};
static u8 actor_name_len_ge[] = {7, 7, 5, 7, 5, 12, 4, 8, 8, 5};
// clang-format on

static u8 D_pspeu_09296718[] = {0x00, 0x40, 0x00, 0x00};
static u8 D_pspeu_0929671C[] = {0x00, 0x00, 0x00, 0x00};

static u16 D_pspeu_09296720[] = {0x0258, 0x0260, 0x0210, 0x0218};
static u16 D_pspeu_09296728[] = {0x0000, 0x0020, 0x0000, 0x0000};
static u16 D_pspeu_09296730[] = {0x01A1, 0x01A1, 0x01A1, 0x01A1};
static s16 D_pspeu_09296738[] = {
    0x0008, 0x0013, 0x0011, 0x0031, 0x004F, 0x0026, 0x0036, 0x001D, 0x001B,
    0x0033, 0x002C, 0x0021, 0x0019, 0x000A, 0x0033, 0x001F, 0x0048, 0x002F,
    0x0013, 0x0019, 0x004D, 0x004B, 0x0017, 0x001D, 0x0012, 0x0002, 0x001B,
    0x002A, 0x0050, 0x0045, 0x0032, 0x000D, 0x002A, 0x004D, 0x0006, 0x0027,
    0x0007, 0x0048, 0x002F, 0x001B, 0x0036, 0x0022, 0x0039, 0x0014, 0x0039,
    0x001D, 0x000A, 0x0035, 0x0010, 0x001B, 0x003D, 0x0017, 0x002E, 0x000B,
    0x0049, 0x0042, 0x003D, 0x002A, 0x0001, 0x000C, 0x001B, 0x0034, 0x0041,
    0x0035, 0x0008, 0x000E, 0x004D, 0x0011, 0x0034, 0x0041, 0x0029, 0x0048};
static u8 D_pspeu_092967C8[] = {0x03, 0x04, 0x09, 0x07, 0x00, 0x00, 0x00, 0x00};
static u8 D_pspeu_092967D0[] = {0x03, 0x04, 0x09, 0x07, 0x00, 0x00, 0x00, 0x00};

static u32 g_CutsceneFlags;
static s32 g_SkipCutscene;
static Dialogue g_Dialogue;
static u8 D_pspeu_09297838;
static u8 D_pspeu_09297818[0x20];
static u8 cutsceneUnk3Unknown[0x380];
static u16 D_pspeu_09297298[0x100];
static u8 D_pspeu_09297290[8];
static s32 g_IsCutsceneDone;

void func_801961DC(s16 arg0) {
    s16 temp_v0 = arg0 - g_unkGraphicsStruct.unkC;

    if (temp_v0 > 1) {
        g_unkGraphicsStruct.unkC++;
    } else if (temp_v0 < -1) {
        g_unkGraphicsStruct.unkC--;
    } else {
        g_unkGraphicsStruct.unkC = arg0;
    }
}

void func_us_801C5920(Entity* self) {
    Tilemap* gTilemap;
    Entity* gEntities;
    s16 posScrollX;

    gTilemap = &g_Tilemap;
    gEntities = g_Entities;

    posScrollX = gEntities->posX.i.hi + g_Tilemap.scrollX.i.hi;

    switch (self->step) {
    case 0:
        InitializeEntity(g_EInitSpawner);
        g_PauseAllowed = false;
        g_unkGraphicsStruct.pauseEnemies = true;
        if (g_Player.status & 1) {
            g_Player.padSim = PAD_R1;
        } else if (g_Player.status & 2) {
#ifdef VERSION_PSP
            g_Player.padSim = PAD_NONE;
        } else if (g_Player.status & 4) {
            g_Player.padSim = PAD_L1;
#else
            g_Player.padSim = PAD_L1;
        } else if (g_Player.status & 4) {
            g_Player.padSim = PAD_R2;
#endif
        } else {
            g_Player.padSim = PAD_LEFT;
        }
        g_Player.demo_timer = 1;
        break;
    case 1:
        if (posScrollX > 0x170) {
            if (g_Player.status & 7) {
                g_Player.padSim = PAD_NONE;
                if (g_Timer & 1) {
                    if (g_Player.status & 1) {
                        g_Player.padSim = PAD_R1;
                    } else if (g_Player.status & 2) {
#ifdef VERSION_PSP
                        g_Player.padSim = PAD_R1 | PAD_L1;
                    } else if (g_Player.status & 4) {
                        g_Player.padSim = PAD_L1;
#else
                        g_Player.padSim = PAD_L1;
                    } else if (g_Player.status & 4) {
                        g_Player.padSim = PAD_R2;
#endif
                    }
                }
            } else {
                g_Player.padSim = PAD_LEFT;
            }
        } else {
            gEntities->posX.i.hi = 0x170 - g_Tilemap.scrollX.i.hi;
            g_Player.padSim = 0;
            g_CutsceneFlags |= 1;
            self->step++;
        }
        g_Player.demo_timer = 1;
        break;
    case 2:
        func_801961DC(0xB0);
        g_Player.demo_timer = 1;
        if (g_CutsceneFlags & 2) {
            self->step++;
            return;
        }
        break;
    case 3:
        func_801961DC(0x80);
        if ((g_unkGraphicsStruct.unkC == 0x80) && (g_CutsceneFlags & 8)) {
            g_PauseAllowed = true;
            if (g_unkGraphicsStruct.pauseEnemies) {
                g_unkGraphicsStruct.pauseEnemies = false;
            }
            DestroyEntity(self);
        }
        g_Player.padSim = 0;
        g_Player.demo_timer = 1;
    }
}

void func_us_801C5B88(Entity* self) {
    Tilemap* gTilemap;
    Entity* gEntities;
    s16 posScrollX, posScrollY;
    s32 pan;

    gTilemap = &g_Tilemap;
    gEntities = g_Entities;

    posScrollX = self->posX.i.hi + gTilemap->scrollX.i.hi;
    posScrollY = self->posY.i.hi + gTilemap->scrollY.i.hi;

    switch (self->step) {
    case 0:
        InitializeEntity(g_EInitInteractable);
        self->animSet = -0x7FF1;
        self->animCurFrame = 0xA;
        self->unk5A = 0x48;
        self->palette = 0x251;
        break;
    case 1:
        if (g_CutsceneFlags & 4) {
            self->step++;
        }
        break;
    case 2:
        if (!AnimateEntity(&D_pspeu_092963E0, self)) {
            SetStep(3);
            self->velocityX = FIX(1.5);
        }
        break;
    case 3:
        pan = AnimateEntity(&D_pspeu_092963F0, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x170) {
            SetStep(4);
            self->velocityY = FIX(-4);
        }
        break;
    case 4:
        AnimateEntity(&D_pspeu_09296408, self);
        self->velocityY += FIX(0.1875);
        MoveEntity();
        if (self->velocityY > 0 && posScrollY > 0x97) {
            self->posY.i.hi = 0x97 - gTilemap->scrollY.i.hi;
            self->velocityY = FIX(0);
            SetStep(5);
        }
        break;
    case 5:
        pan = AnimateEntity(&D_pspeu_092963F0, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x1C0) {
            SetStep(6);
            self->velocityY = FIX(-4);
            g_CutsceneFlags |= 8;
        }
        break;
    case 6:
        AnimateEntity(&D_pspeu_09296408, self);
        self->velocityY += FIX(0.1875);
        MoveEntity();
        if (self->velocityY > 0 && posScrollY > 0x87) {
            self->posY.i.hi = 0x87 - gTilemap->scrollY.i.hi;
            self->velocityY = FIX(0);
            SetStep(7);
        }
        break;
    case 7:
        pan = AnimateEntity(&D_pspeu_092963F0, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x220) {
            DestroyEntity(self);
        }
        break;
    }
}

#include "../../get_lang.h"

#include "../cutscene_actor_name_psp.h"

#ifndef CUTSCENE_UNK3_RECT_X
#define CUTSCENE_UNK3_RECT_X 0
#endif

#if defined(VERSION_PSP)
extern u8 cutsceneUnk3Unknown[0x380]; // bss
#endif

void CutsceneUnk3(s16 nextCharY) {
    RECT rect;
    rect.x = CUTSCENE_UNK3_RECT_X;
    rect.y = (nextCharY * 12) + 384;
    rect.w = 64;
    rect.h = 12;
    ClearImage(&rect, 0, 0, 0);
#if defined(VERSION_PSP)
    func_890A3C0(cutsceneUnk3Unknown, 0, LEN(cutsceneUnk3Unknown));
#endif
}

#ifndef CUTSCENE_UNK4_TPAGE
#define CUTSCENE_UNK4_TPAGE 0x10
#endif

void CutsceneUnk4(void) {
    Primitive* prim;

    CutsceneUnk3(g_Dialogue.nextCharY);
    prim = g_Dialogue.prim[g_Dialogue.nextCharY];
    prim->tpage = CUTSCENE_UNK4_TPAGE;
    prim->clut = g_Dialogue.clutIndex;
    prim->y0 = g_Dialogue.nextLineY;
    prim->u0 = 0;
    prim->x0 = g_Dialogue.startX + 4;
    prim->v0 = g_Dialogue.nextCharY * 0xC + 0x80;
    prim->u1 = 0xC0;
    prim->v1 = 0xC;
    prim->priority = 0x1FF;
    prim->drawMode = DRAW_DEFAULT;
}

#ifndef CUTSCENE_UNK1_NEXT_X
#define CUTSCENE_UNK1_NEXT_X 0
#endif

#ifndef CUTSCENE_UNK1_UNK17
#define CUTSCENE_UNK1_UNK17 2
#endif

void CutsceneUnk1(void) {
    g_Dialogue.nextLineY = g_Dialogue.startY + 0x14;
    g_Dialogue.nextCharX = g_Dialogue.nextLineX = CUTSCENE_UNK1_NEXT_X;
    g_Dialogue.nextCharY = 0;
    g_Dialogue.unk12 = 0;
    g_Dialogue.nextCharTimer = 0;
    g_Dialogue.unk17 = CUTSCENE_UNK1_UNK17;
}

#include "../set_cutscene_script.h"

void SetCutsceneEnd(u8* ptr) {
#if !defined(VERSION_PSP)
    g_Dialogue.scriptEnd = ptr + 0x100000;
#else
    g_Dialogue.scriptEnd = ptr;
#endif
    g_Dialogue.timer = 0;
    g_Dialogue.unk3C = 1;
}

#include "../cutscene_run.h"

void OVL_EXPORT(EntityCutscene)(Entity* self) {
    s16 uCoord;    // sp4e
    s16 vCoord;    // sp4c
    s32 primIndex; // sp48
    s32 sp40;
    RECT rect; // sp38
    s32 i;
    s32 j; // s5
    u16 nextChar;
    s32 var_s7;
    u8* var_s6;
    u_long ptr; // s4
    u32 var_s3;
    Primitive* prim;
    u8* var_s1;

    func_8926498();
    if (self->step && g_IsCutsceneDone && !g_SkipCutscene &&
        ((g_Settings.D_8003CB04 & 0x400) || g_IsTimeAttackUnlocked)) {
        if (g_pads->tapped & 8) {
            g_SkipCutscene = 1;
            g_api.FreePrimitives(self->primIndex);
            self->flags ^= FLAG_HAS_PRIMS;
            if (g_Dialogue.primIndex[1] != -1) {
                g_api.FreePrimitives(g_Dialogue.primIndex[1]);
            }
            if (g_Dialogue.primIndex[0] != -1) {
                g_api.FreePrimitives(g_Dialogue.primIndex[0]);
            }
            g_api.PlaySfx(SET_STOP_MUSIC);
            self->step = 1;
            self->step_s = 0;
        }
    }
    if (self->step && g_Dialogue.unk3C) {
        CutsceneRun();
    }
    switch (self->step) {
    case 0:
        if ((g_CastleFlags[MET_MARIA_IN_DAI]) ||
            (g_PlayableCharacter != PLAYER_ALUCARD)) {
            DestroyEntity(self);
            break;
        }
        if (SetCutsceneScript(OVL_EXPORT(cutscene_script))) {
            self->flags |= FLAG_HAS_PRIMS | FLAG_UNK_2000;
            self->primIndex = g_Dialogue.primIndex[2];
            g_CutsceneHasControl = 1;
            g_CutsceneFlags = 0;
            g_IsCutsceneDone = 0;
            g_SkipCutscene = 0;
            self->step++;
        }
        break;
    case 1:
        nextChar = 0;
        // this is a huge While-loop! Don't miss it!
        while (1) {
            nextChar = *g_Dialogue.scriptCur++;
            sp40 = 0;
            if (func_8919BA8() & 8) {
                g_Dialogue.nextCharTimer = 0;
            }
            if ((g_Dialogue.nextCharTimer) && !g_SkipCutscene) {
                g_Dialogue.nextCharTimer--;
                g_Dialogue.scriptCur--;
                return;
            }
            if (!(nextChar & 0x80)) {
                switch (nextChar) {
                case 0:
                    self->step = 7;
                    return;
                case 1:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    g_Dialogue.nextCharX = g_Dialogue.nextLineX;
                    if (!(g_Dialogue.unk12 & 1)) {
                        g_Dialogue.nextLineY += 16;
                    }
                    g_Dialogue.nextCharY++;
                    g_Dialogue.nextCharY &= 3;
                    CutsceneUnk4();
                    if (!(g_Dialogue.unk12 & 1)) {
                        if (g_Dialogue.nextCharY > 2) {
                            g_Dialogue.unk12 |= 1;
                            g_Dialogue.portraitAnimTimer = 0;
                            self->step_s = 0;
                            self->step++;
                        }
                    } else {
                        g_Dialogue.portraitAnimTimer = 0;
                        self->step_s = 0;
                        self->step++;
                    }
                    return;
                case 2:
                    g_Dialogue.scriptCur++;
                    continue;
                case 3:
                    g_Dialogue.nextCharTimer = *g_Dialogue.scriptCur++;
                    if (g_SkipCutscene) {
                        continue;
                    }
                    return;
                case 4:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    prim = g_Dialogue.prim[0];
                    for (i = 0; i < 4; i++) {
                        prim->drawMode = DRAW_HIDE;
                        prim = prim->next;
                    }
                    return;
                case 5:
                    if (g_SkipCutscene) {
                        g_Dialogue.scriptCur += 2;
                        continue;
                    }
                    // fake reuse of i?
                    i = *g_Dialogue.scriptCur++;
                    prim = g_Dialogue.prim[4];
                    j = *g_Dialogue.scriptCur++;
                    var_s7 = j & 1;
                    uCoord = D_pspeu_09296718[var_s7];
                    vCoord = D_pspeu_09297290[var_s7];
                    prim->clut = D_pspeu_09296720[i];
                    prim->tpage = 0x90;
                    prim->u0 = prim->u2 = uCoord;
                    prim->u1 = prim->u3 = uCoord + 0x2F;
                    prim->v0 = prim->v1 = vCoord;
                    prim->v2 = prim->v3 = vCoord + 0x48;
                    prim->x0 = prim->x1 = prim->x2 = prim->x3 =
                        g_Dialogue.startX - 0x1E;
                    prim->y0 = prim->y1 = prim->y2 = prim->y3 =
                        g_Dialogue.startY + 0x24;
                    g_Dialogue.clutIndex = D_pspeu_09296730[i];
                    CutsceneUnk1();
                    CutsceneUnk4();
                    prim->priority = 0x1FE;
                    prim->drawMode = DRAW_DEFAULT;
                    DrawCutsceneActorName(
                        i, self, D_pspeu_09297298, D_pspeu_092967C8,
                        D_pspeu_092967D0, 4);
                    g_Dialogue.portraitAnimTimer = 6;
                    self->step = 3;
                    return;
                case 6:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    for (prim = g_Dialogue.prim[0], i = 0; i < 4; i++) {
                        prim->drawMode = DRAW_HIDE;
                        prim = prim->next;
                    }
                    g_api.FreePrimitives(g_Dialogue.primIndex[1]);
                    g_Dialogue.primIndex[1] = -1;
                    g_Dialogue.portraitAnimTimer = 6;
                    self->step = 4;
                    return;
                case 7:
                    if (g_SkipCutscene) {
                        g_Dialogue.scriptCur += 2;
                        continue;
                    }
                    g_Dialogue.startX = *g_Dialogue.scriptCur++;
                    g_Dialogue.startY = *g_Dialogue.scriptCur++;
                    prim = g_Dialogue.prim[4];
                    prim = prim->next;
                    prim->y0 = prim->y1 = g_Dialogue.startY;
                    prim->y2 = prim->y3 = g_Dialogue.startY + 0x48;
                    prim = prim->next;
                    prim->y0 = g_Dialogue.startY - 1;
                    prim->u0 = 0xF6;
                    g_Dialogue.portraitAnimTimer = 0x18;
                    self->step = 5;
                    self->step_s = 0;
                    return;
                case 8:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    g_Dialogue.portraitAnimTimer = 0x18;
                    self->step = 6;
                    return;
                case 9:
                    if (g_SkipCutscene) {
                        g_Dialogue.scriptCur += 2;
                        continue;
                    }
                    nextChar = *g_Dialogue.scriptCur++;
                    nextChar <<= 4;
                    nextChar |= *g_Dialogue.scriptCur++;
                    g_api.PlaySfx(nextChar);
                    continue;
                case 10:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    if (g_api.func_80131F68() != false) {
                        continue;
                    }
                    *g_Dialogue.scriptCur--;
                    return;
                case 11:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    if (g_api.func_80131F68() != true) {
                        continue;
                    }
                    *g_Dialogue.scriptCur--;
                    return;
                case 12:
                    ptr = (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr += (u_long)D_pspeu_092970B8;
                    SetCutsceneEnd((u8*)ptr);
                    continue;
                case 13:
                    continue;
                case 14:
                    ptr = (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr += (u_long)D_pspeu_092970B8;
                    g_Dialogue.scriptCur += *(u8*)ptr << 2;

                    ptr = (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur;
                    ptr += (u_long)D_pspeu_092970B8;
                    g_Dialogue.scriptCur = (u8*)ptr;
                    continue;
                case 15:
                    ptr = (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur;
                    ptr += (u_long)D_pspeu_092970B8;
                    g_Dialogue.scriptCur = (u8*)ptr;
                    continue;
                case 16:
                    if (!((g_CutsceneFlags >> *g_Dialogue.scriptCur) & 1)) {
                        g_Dialogue.scriptCur--;
                        return;
                    }
                    g_CutsceneFlags &= ~(1 << *g_Dialogue.scriptCur);
                    *g_Dialogue.scriptCur++;
                    continue;
                case 17:
                    g_CutsceneFlags |= 1 << *g_Dialogue.scriptCur++;
                    continue;
                case 18:
                    g_Dialogue.unk3C = 0;
                    continue;
                case 19:
                    if (g_SkipCutscene) {
                        g_Dialogue.scriptCur += 5;
                    } else {
                        ptr = (u_long)*g_Dialogue.scriptCur++;
                        ptr <<= 4;
                        ptr |= (u_long)*g_Dialogue.scriptCur++;
                        ptr <<= 4;
                        ptr |= (u_long)*g_Dialogue.scriptCur++;
                        ptr <<= 4;
                        ptr |= (u_long)*g_Dialogue.scriptCur++;
                        switch (ptr) {
                        case 0:
                            ptr = (u_long)&D_pspeu_0926E270;
                            break;
                        case 1:
                            ptr = (u_long)&D_pspeu_0926EFF0;
                            break;
                        case 2:
                            ptr = (u_long)&D_893EA8C;
                            break;
                        case 3:
                            ptr = (u_long)&D_893F80C;
                            break;
                        case 4:
                            ptr = (u_long)&D_894058C;
                            break;
                        case 5:
                            ptr = (u_long)&D_894130C;
                            break;
                        case 6:
                            ptr = (u_long)&D_894208C;
                            break;
                        case 7:
                            ptr = (u_long)&D_8942E0C;
                            break;
                        case 8:
                            ptr = (u_long)&D_8943B8C;
                            break;
                        case 9:
                            ptr = (u_long)&D_894490C;
                            break;
                        case 10:
                            ptr = (u_long)&D_894568C;
                            break;
                        }
                        j = g_Dialogue.scriptCur++[0];
                        LoadTPage((u_long*)ptr, 1, 0, D_pspeu_09296728[j],
                                  0x100, 0x30, 0x48);
                    }
                    continue;
                case 20:
                    nextChar = *g_Dialogue.scriptCur++;
                    nextChar <<= 4;
                    nextChar |= *g_Dialogue.scriptCur++;
                    g_api.PlaySfx(nextChar);
                    continue;
                case 21:
                    g_CutsceneFlags = 0;
                    g_SkipCutscene = 0;
                    g_IsCutsceneDone = 0;
                    continue;
                case 22:
                    g_CutsceneFlags &= ~(1 << *g_Dialogue.scriptCur++);
                    continue;
                case 23:
                    return;
                case 24:
                    if (!((g_CutsceneFlags >> *g_Dialogue.scriptCur) & 1)) {
                        *g_Dialogue.scriptCur--;
                        return;
                    }
                    *g_Dialogue.scriptCur++;
                    continue;
                default:
                    if (g_SkipCutscene) {
                        continue;
                    }
                    g_Dialogue.nextCharTimer = g_Dialogue.unk17;
                    sp40 = 1;
                } // Close the switch
                if (sp40) {
                    break; // This breaks the big while-loop!
                }
                continue;
            } else {
                if (g_SkipCutscene) {
                    g_Dialogue.scriptCur++;
                    continue;
                }
                if (0xA7 <= nextChar && nextChar < 0xAD) {
                    nextChar = nextChar + 0x27;
                } else if (nextChar == 0xA6) {
                    nextChar = 0xCC;
                } else if (nextChar == 0xDD) {
                    nextChar = 0xCD;
                } else {
                    nextChar = nextChar - 0x11;
                }
                g_Dialogue.nextCharTimer = g_Dialogue.unk17;
            }
            break;
        } // Close the giant while loop

        var_s6 = (u8*)&D_pspeu_09297818;
        rect.x = ((nextChar & 0xF) << 1) + 0x380;
        rect.y = ((s32)(nextChar & 0xF0) >> 1) + 0xF0;
        rect.w = 2;
        rect.h = 8;
        vCoord = (g_Dialogue.nextCharY * 0xC) + 0x180;
        StoreImage(&rect, (u_long*)var_s6);
        for (i = 0; i < 32; i++) {
            // swaps the upper and lower 4 bits of each member
            var_s6[i] = ((var_s6[i] & 0x0F) << 4) | ((var_s6[i] & 0xF0) >> 4);
        }
        while (true) {
            if (nextChar == 0x20) {
                break;
            }
            for (i = 0; i < 8; i++) {
                if (var_s6[(i << 3) / 2] & 0xF0) {
                    break;
                }
            }
            if (i != 8) {
                break;
            }
            for (i = 0; i < 8; i++) {
                // lots of byte shuffling here
                var_s1 = &var_s6[(i << 3) / 2];
                var_s3 = (var_s1[0] << 0x18);
                var_s3 |= (var_s1[1] << 0x10);
                var_s3 |= (var_s1[2] << 0x08);
                var_s3 |= (var_s1[3]);
                var_s3 <<= 4;
                var_s1[0] = (var_s3 >> 0x18) & 0xFF;
                var_s1[1] = (var_s3 >> 0x10) & 0xFF;
                var_s1[2] = (var_s3 >> 0x08) & 0xFF;
                var_s1[3] = (var_s3) & 0xFF;
            }
        }
        for (i = 0, var_s7 = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                if ((var_s6[j / 2 + (i << 3) / 2]) & (0xF0 >> ((j & 1) * 4))) {
                    if (j > var_s7) {
                        var_s7 = j;
                    }
                };
            }
        }
        var_s7 += 2;
        for (i = 0; i < 32; i++) {
            // swaps the upper and lower 4 bits of each member
            var_s6[i] = ((var_s6[i] & 0x0F) << 4) | ((var_s6[i] & 0xF0) >> 4);
        }
        rect.w = var_s7;
        var_s6 = (u8*)&D_pspeu_09297818;
        for (i = 0; i < 8; i++) {
            // lots of byte shuffling here
            var_s1 = &cutsceneUnk3Unknown
                         [((g_Dialogue.nextCharX - g_Dialogue.nextLineX) / 2) +
                          (i * 112)];
            if ((g_Dialogue.nextCharX - g_Dialogue.nextLineX) & 1) {
                var_s1[0] = (var_s1[0] & 0xF0) | ((var_s6[0] & 0x0F) << 4);
                var_s1[1] =
                    ((var_s6[0] & 0xF0) >> 4) | ((var_s6[1] & 0x0F) << 4);
                var_s1[2] =
                    ((var_s6[1] & 0xF0) >> 4) | ((var_s6[2] & 0x0F) << 4);
                var_s1[3] =
                    ((var_s6[2] & 0xF0) >> 4) | ((var_s6[3] & 0x0F) << 4);
                var_s1[4] = ((var_s6[3] & 0xF0) >> 4);
                var_s6 += 4;
            } else {
                var_s1[0] = var_s6[0];
                var_s1[1] = var_s6[1];
                var_s1[2] = var_s6[2];
                var_s1[3] = var_s6[3];
                var_s6 += 4;
            }
        }
        LoadTPage((u_long*)cutsceneUnk3Unknown, 0, 0, g_Dialogue.nextLineX,
                  vCoord, 0xE0, 8);
        if (nextChar != 0x20) {
            g_Dialogue.nextCharX += rect.w;
        } else {
            g_Dialogue.nextCharX += 4;
        }
        // This seems like a mistake.
        if (((g_Dialogue.nextCharX - g_Dialogue.nextLineX) / 2) < 0x70) {
        };
        D_pspeu_09297838 = nextChar;
        break;
    case 2:
        ptr = g_Dialogue.nextCharY;
        ptr = (ptr + 1) & 3;
        if (!self->step_s) {
            prim = g_Dialogue.prim[ptr];
            prim->v0 += 2;
            prim->v1 -= 2;
            if (!prim->v1) {
                self->step_s++;
                prim->drawMode = DRAW_HIDE;
            }
        }
        // probably 17cc
        // 1844
        for (i = 0; i < 4; i++) {
            if (i == ptr) {
                continue;
            }
            prim = g_Dialogue.prim[i];
            prim->y0 -= 2;
        }
        g_Dialogue.portraitAnimTimer++;
        if (g_Dialogue.portraitAnimTimer >= 8) {
            self->step -= 1;
        }
        break;
    case 3:
        prim = g_Dialogue.prim[4];
        prim->x0 = prim->x2 -= 4;
        prim->x1 = prim->x3 += 4;
        prim->y0 = prim->y1 -= 6;
        prim->y2 = prim->y3 += 6;
        g_Dialogue.portraitAnimTimer--;
        if (!g_Dialogue.portraitAnimTimer) {
            self->step = 1;
            for (prim = &g_PrimBuf[g_Dialogue.primIndex[1]]; prim != NULL;
                 prim = prim->next) {
                prim->drawMode = DRAW_DEFAULT;
            }
        }
        break;
    case 4:
        prim = g_Dialogue.prim[4];
        prim->x0 = prim->x2 += 4;
        prim->x1 = prim->x3 -= 4;
        prim->y0 = prim->y1 += 6;
        prim->y2 = prim->y3 -= 6;
        if (prim->x1 >= (g_Dialogue.startX - 2)) {
            prim->x1 = prim->x3 = g_Dialogue.startX - 3;
        }
        g_Dialogue.portraitAnimTimer--;
        if (!g_Dialogue.portraitAnimTimer) {
            self->step = 1;
        }
        break;
    case 5:
        switch (self->step_s) {
        case 0:
            g_IsCutsceneDone = 1;
            primIndex = g_api.AllocPrimitives(PRIM_LINE_G2, 0x48);
            if (primIndex == -1) {
                DestroyEntity(self);
                break;
            }
            g_Dialogue.primIndex[0] = primIndex;
            for (prim = &g_PrimBuf[primIndex], uCoord = 0; prim != NULL;
                 prim = prim->next) {
                prim->r0 = prim->r1 = 0x7F;
                prim->b0 = prim->b1 = prim->g0 = prim->g1 = 0;
                prim->x0 = prim->x1 = 0xF7;
                prim->y0 = prim->y1 = g_Dialogue.startY + uCoord;
                prim->priority = 0x1FE;
                prim->drawMode = DRAW_DEFAULT;
                prim->x2 = D_pspeu_09296738[uCoord];
                prim->x3 = 0xF70;
                uCoord++;
            }
            self->step_s++;
            break;
        case 1:
            for (uCoord = 0, prim = &g_PrimBuf[g_Dialogue.primIndex[0]];
                 prim != NULL; prim = prim->next) {
                prim->x3 -= prim->x2;
                prim->x2 += 2;
                prim->x0 = prim->x3 / 16;
                if (prim->x0 < 5) {
                    prim->x0 = 4;
                } else {
                    uCoord = 1;
                }
            }
            if (!uCoord) {
                g_api.FreePrimitives(g_Dialogue.primIndex[0]);
                g_Dialogue.primIndex[0] = -1;
                prim = g_Dialogue.prim[4];
                prim = prim->next;
                prim->drawMode = DRAW_TPAGE | DRAW_TRANSP;
                prim = prim->next;
                prim->drawMode = DRAW_UNK_40 | DRAW_TPAGE | DRAW_TRANSP;
                self->step_s++;
            }
            break;
        case 2:
            uCoord = 0;
            prim = g_Dialogue.prim[4];
            prim = prim->next;
            if (prim->r0 < 0x10) {
                prim->r0 = prim->r1 = prim->r2 = prim->r3 = 0;
            } else {
                prim->r0 = prim->r1 = prim->r2 = prim->r3 -= 0x10;
                uCoord = 1;
            }
            if (prim->b0 >= 0x7F) {
                prim->b0 = prim->b1 = 0x7F;
            } else {
                prim->b0 = prim->b1 += 8;
                uCoord = 1;
            }

            prim = prim->next;
            if (prim->r0 < 0x10) {
                prim->r0 = prim->g0 = prim->b0 = 0x10;
            } else {
                prim->r0 = prim->g0 = prim->b0 -= 0xF;
                uCoord = 1;
            }
            if (!uCoord) {
                self->step = 1;
            }
        }
        break;
    case 6:
        prim = g_Dialogue.prim[4];
        prim = prim->next;
        g_Dialogue.portraitAnimTimer--;
        if (g_Dialogue.portraitAnimTimer >= 0xC) {
            prim = prim->next;
            prim->u0 -= 20;
            if (g_Dialogue.portraitAnimTimer & 1) {
                prim->u0--;
            }
        } else {
            if (!g_Dialogue.portraitAnimTimer) {
                self->step = 1;
                prim->drawMode = DRAW_HIDE;
            } else {
                prim->y2 = (prim->y3 -= 6);
            }
            prim = prim->next;
            prim->drawMode = DRAW_HIDE;
        }
        break;

    case 7:
        DestroyEntity(self);
        g_CastleFlags[MET_MARIA_IN_DAI] = 1;
        g_Settings.D_8003CB04 |= 0x400;
        g_CutsceneHasControl = 0;
        break;
    }
}
