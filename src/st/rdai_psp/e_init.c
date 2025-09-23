// SPDX-License-Identifier: AGPL-3.0-or-later
#include "rdai.h"

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
void func_pspeu_09250400(Entity* self);
void EntityCastleWall1(Entity* self);
void EntityCastleWall2(Entity* self);
void func_pspeu_092510D8(Entity* self);
void EntityStainedGlass(Entity* self);
void func_us_801D9F5C(Entity* self);
void func_pspeu_0923B448(Entity* self);
void func_pspeu_0923B970(Entity* self);
void func_pspeu_0923AAF0(Entity* self);
void func_pspeu_0923B098(Entity* self);
void func_pspeu_0923BE30(Entity* self);
void func_pspeu_0923C358(Entity* self);
void func_pspeu_09249230(Entity* self);
void func_us_801CEB08(Entity* self);
void func_pspeu_0924A2A8(Entity* self);
void func_pspeu_0924AB18(Entity* self);
void func_pspeu_09237A08(Entity* self);
void func_pspeu_092393D8(Entity* self);
void func_pspeu_09240AD8(Entity* self);
void func_pspeu_09241CC0(Entity* self);
void EntityClouds(Entity* self);
void func_us_801C34FC(Entity* self);
void func_pspeu_092515A8(Entity* self);
void EntitySpikes(Entity* self);
void EntitySpikesParts(Entity* self);
void EntitySpikesDust(Entity* self);
void EntitySpikesDamage(Entity* self);
void OVL_EXPORT(EntityBreakableDebris)(Entity* self);
void func_pspeu_0924CBB0(Entity* self);
void func_pspeu_0923C880(Entity* self);
void func_pspeu_0923CBD0(Entity* self);

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
    func_pspeu_09250400,
    EntityCastleWall1,
    EntityCastleWall2,
    func_pspeu_092510D8,
    EntityStainedGlass,
    func_us_801D9F5C,
    func_pspeu_0923B448,
    func_pspeu_0923B970,
    func_pspeu_0923AAF0,
    func_pspeu_0923B098,
    func_pspeu_0923BE30,
    func_pspeu_0923C358,
    func_pspeu_09249230,
    func_us_801CEB08,
    func_pspeu_0924A2A8,
    func_pspeu_0924AB18,
    func_pspeu_09237A08,
    func_pspeu_092393D8,
    func_pspeu_09240AD8,
    func_pspeu_09241CC0,
    EntityClouds,
    func_us_801C34FC,
    func_pspeu_092515A8,
    EntitySpikes,
    EntitySpikesParts,
    EntitySpikesDust,
    EntitySpikesDamage,
    OVL_EXPORT(EntityBreakableDebris),
    func_pspeu_0924CBB0,
    func_pspeu_0923C880,
    func_pspeu_0923CBD0,
};
