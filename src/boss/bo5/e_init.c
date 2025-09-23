// SPDX-License-Identifier: AGPL-3.0-or-later
#include "bo5.h"

void EntityBreakable(Entity* self);
void EntityExplosion(Entity* self);
void EntityPrizeDrop(Entity* self);
void EntityDamageDisplay(Entity* self);
void OVL_EXPORT(EntityRedDoor)(Entity* self);
void EntityIntenseExplosion(Entity* self);
void EntitySoulStealOrb(Entity* self);
void EntityRoomForeground(Entity* self);
void EntityStageNamePopup(Entity* self);
void EntityEquipItemDrop(Entity* self);
void EntityRelicOrb(Entity* self);
void EntityHeartDrop(Entity* self);
void EntityEnemyBlood(Entity* self);
void EntityMessageBox(Entity* self);
void EntityDummy(Entity* self);
void EntityDummy(Entity* self);
void OVL_EXPORT(EntityBackgroundBlock)(Entity* self);
void OVL_EXPORT(EntityLockCamera)(Entity* self);
void EntityUnkId13(Entity* self);
void EntityExplosionVariants(Entity* self);
void EntityGreyPuff(Entity* self);
void func_801A8620(Entity* self);
void EntityStainedGlass(Entity* self);
void func_us_801B4188(Entity* self);
void EntityBlock(Entity* self);
void EntityStatue(Entity* self);
void EntityBell(Entity* self);
void EntityCastleWall1(Entity* self);
void EntityCastleWall2(Entity* self);
void EntityStaircase(Entity* self);
void EntityClouds(Entity* self);
void func_us_801A1884(Entity* self);
void func_us_801A159C(Entity* self);
void func_us_801A1C14(Entity* self);
void func_us_801A425C(Entity* self);
void func_us_801A4430(Entity* self);
void func_us_801A3FD4(Entity* self);
void func_us_801A3E78(Entity* self);
void func_us_801A3B88(Entity* self);
void EntityLifeUpSpawn(Entity* self);
void func_us_801A4494(Entity* self);
void OVL_EXPORT(EntityCutscene)(Entity* self);
void func_us_801A5F88(Entity* self);
void func_us_801A62B4(Entity* self);
void func_801072BC(Entity* self);
void RicSetDeadPrologue(Entity* self);

PfnEntityUpdate OVL_EXPORT(EntityUpdates)[] = {
    EntityBreakable,
    EntityExplosion,
    EntityPrizeDrop,
    EntityDamageDisplay,
    OVL_EXPORT(EntityRedDoor),
    EntityIntenseExplosion,
    EntitySoulStealOrb,
    EntityRoomForeground,
    EntityStageNamePopup,
    EntityEquipItemDrop,
    EntityRelicOrb,
    EntityHeartDrop,
    EntityEnemyBlood,
    EntityMessageBox,
    EntityDummy,
    EntityDummy,
    OVL_EXPORT(EntityBackgroundBlock),
    OVL_EXPORT(EntityLockCamera),
    EntityUnkId13,
    EntityExplosionVariants,
    EntityGreyPuff,
    func_801A8620,
    EntityStainedGlass,
    func_us_801B4188,
    EntityBlock,
    EntityStatue,
    EntityBell,
    EntityCastleWall1,
    EntityCastleWall2,
    EntityStaircase,
    EntityClouds,
    func_us_801A1884,
    func_us_801A159C,
    func_us_801A1C14,
    func_us_801A425C,
    func_us_801A4430,
    func_us_801A3FD4,
    func_us_801A3E78,
    func_us_801A3B88,
    EntityLifeUpSpawn,
    func_us_801A4494,
    OVL_EXPORT(EntityCutscene),
    func_us_801A5F88,
    func_us_801A62B4,
    func_801072BC,
    RicSetDeadPrologue,
};
