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
void func_us_801B1C34(Entity* self);
void EntityCastleWall1(Entity* self);
void EntityCastleWall2(Entity* self);
void func_us_801B240C(Entity* self);
void func_us_801B2C28(Entity* self);
void func_us_801B3368(Entity* self);
void func_us_801BFE6C(Entity* self);
void func_us_801C0240(Entity* self);
void func_us_801BF830(Entity* self);
void func_us_801BFC58(Entity* self);
void func_us_801C0528(Entity* self);
void func_us_801C0898(Entity* self);
void func_us_801C0C44(Entity* self);
void EntitySpectralSwordAura(Entity* self);
void func_us_801C17E8(Entity* self);
void func_us_801C1DE8(Entity* self);
void func_us_801C2418(Entity* self);
void func_us_801C3580(Entity* self);
void func_us_801C38F8(Entity* self);
void func_us_801C4578(Entity* self);
void EntityClouds(Entity* self);
void func_us_801B3A4C(Entity* self);
void func_us_801B3B94(Entity* self);
void EntitySpikes(Entity* self);
void EntitySpikesParts(Entity* self);
void EntitySpikesDust(Entity* self);
void EntitySpikesDamage(Entity* self);
void OVL_EXPORT(EntityBreakableDebris)(Entity* self);
void func_us_801C6040(Entity* self);
void func_us_801C4668(Entity* self);
void func_us_801C4908(Entity* self);

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
    func_us_801B1C34,
    EntityCastleWall1,
    EntityCastleWall2,
    func_us_801B240C,
    func_us_801B2C28,
    func_us_801B3368,
    func_us_801BFE6C,
    func_us_801C0240,
    func_us_801BF830,
    func_us_801BFC58,
    func_us_801C0528,
    func_us_801C0898,
    func_us_801C0C44,
    EntitySpectralSwordAura,
    func_us_801C17E8,
    func_us_801C1DE8,
    func_us_801C2418,
    func_us_801C3580,
    func_us_801C38F8,
    func_us_801C4578,
    EntityClouds,
    func_us_801B3A4C,
    func_us_801B3B94,
    EntitySpikes,
    EntitySpikesParts,
    EntitySpikesDust,
    EntitySpikesDamage,
    OVL_EXPORT(EntityBreakableDebris),
    func_us_801C6040,
    func_us_801C4668,
    func_us_801C4908,
};
