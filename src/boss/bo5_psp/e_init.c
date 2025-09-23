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
void func_pspeu_09247658(Entity* self);
void EntityStainedGlass(Entity* self);
void func_us_801D9F5C(Entity* self);
void EntityBlock(Entity* self);
void EntityStatue(Entity* self);
void EntityBell(Entity* self);
void EntityCastleWall1(Entity* self);
void EntityCastleWall2(Entity* self);
void EntityStaircase(Entity* self);
void EntityClouds(Entity* self);
void func_us_801C34FC(Entity* self);
void func_pspeu_09250010(Entity* self);
void func_pspeu_09247FE0(Entity* self);
void func_pspeu_0924B670(Entity* self);
void func_pspeu_0924B940(Entity* self);
void func_pspeu_0924B340(Entity* self);
void func_pspeu_0924B160(Entity* self);
void func_pspeu_0924AD58(Entity* self);
void EntityLifeUpSpawn(Entity* self);
void func_pspeu_09247028(Entity* self);
void OVL_EXPORT(EntityCutscene)(Entity* self);
void func_pspeu_0924C128(Entity* self);
void func_pspeu_0924C4D8(Entity* self);
void func_pspeu_0924D118(Entity* self);
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
    func_pspeu_09247658,
    EntityStainedGlass,
    func_us_801D9F5C,
    EntityBlock,
    EntityStatue,
    EntityBell,
    EntityCastleWall1,
    EntityCastleWall2,
    EntityStaircase,
    EntityClouds,
    func_us_801C34FC,
    func_pspeu_09250010,
    func_pspeu_09247FE0,
    func_pspeu_0924B670,
    func_pspeu_0924B940,
    func_pspeu_0924B340,
    func_pspeu_0924B160,
    func_pspeu_0924AD58,
    EntityLifeUpSpawn,
    func_pspeu_09247028,
    OVL_EXPORT(EntityCutscene),
    func_pspeu_0924C128,
    func_pspeu_0924C4D8,
    func_pspeu_0924D118,
    RicSetDeadPrologue,
};
