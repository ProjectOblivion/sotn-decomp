// SPDX-License-Identifier: AGPL-3.0-or-later
#include "are.h"

void OVL_EXPORT(EntityBreakable)(Entity* self);
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
void func_us_801B628C(Entity* self);
void func_us_801B6420(Entity* self);
void EntityBridgeBackgroundPiece(Entity* self);
void func_us_801B6DF0(Entity* self);
void func_us_801B7184(Entity* self);
void EntityHeartRoomSwitch(Entity* self);
void func_us_801B7998(Entity* self);
void func_us_801B7C7C(Entity* self);
void func_us_801B7E7C(Entity* self);
void func_us_801B80C0(Entity* self);
void EntityExplosionPuffOpaque(Entity* self);
void OVL_EXPORT(EntityBreakableDebris)(Entity* self);
void func_us_801C3844(Entity* self);
void func_us_801C41EC(Entity* self);
void func_us_801C4300(Entity* self);
void func_us_801C45B0(Entity* self);
void func_us_801C47E4(Entity* self);
void func_us_801C4EDC(Entity* self);
void EntityBoneHalberdParts(Entity* self);
void EntityBoneMusket(Entity* self);
void func_no1_801CF298(Entity* self);
void EntityOwlKnight(Entity* self);
void EntityOwl(Entity* self);
void EntityOwlKnightSword(Entity* self);
void EntityOwlTarget(Entity* self);
void EntityValhallaKnight(Entity* self);
void func_no2_801C8954(Entity* self);
void func_no2_801C8AAC(Entity* self);
void EntityAxeKnightBlue(Entity* self);
void EntityAxeKnightThrowingAxe(Entity* self);
void func_no1_801CBA30(Entity* self);
void InitializeUnkEntity(Entity* self);
void EntityArmorLord(Entity* self);
void func_no1_801D348C(Entity* self);
void EntityArmorLordFireWave(Entity* self);
void func_no1_801D3700(Entity* self);
void EntityHuntingGirl(Entity* self);
void EntityHuntingGirlAttack(Entity* self);
void func_us_801CDCF4(Entity* self);
void func_us_801CEBC8(Entity* self);
void func_us_801CECAC(Entity* self);
void func_us_801CEB00(Entity* self);
void EntityFleaArmor(Entity* self);
void EntityFleaArmorAttackHitbox(Entity* self);
void EntityFleaMan(Entity* self);
void EntityBoneScimitar(Entity* self);
void EntityBoneScimitarParts(Entity* self);
void EntityPlateLord(Entity* self);
void func_no0_801D4324(Entity* self);
void func_no0_801D44A0(Entity* self);
void func_no0_801D4AA4(Entity* self);
void func_no0_801D542C(Entity* self);
void func_no0_801D4CAC(Entity* self);
void EntityGraveKeeper(Entity* self);
void EntityGraveKeeperHitbox(Entity* self);
void EntityMistDoor(Entity* self);

PfnEntityUpdate OVL_EXPORT(EntityUpdates)[] = {
    OVL_EXPORT(EntityBreakable),
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
    func_us_801B628C,
    func_us_801B6420,
    EntityBridgeBackgroundPiece,
    func_us_801B6DF0,
    func_us_801B7184,
    EntityHeartRoomSwitch,
    func_us_801B7998,
    func_us_801B7C7C,
    func_us_801B7E7C,
    func_us_801B80C0,
    EntityExplosionPuffOpaque,
    OVL_EXPORT(EntityBreakableDebris),
    func_us_801C3844,
    func_us_801C41EC,
    func_us_801C4300,
    func_us_801C45B0,
    func_us_801C47E4,
    func_us_801C4EDC,
    EntityBoneHalberdParts,
    EntityBoneMusket,
    func_no1_801CF298,
    EntityOwlKnight,
    EntityOwl,
    EntityOwlKnightSword,
    EntityOwlTarget,
    EntityValhallaKnight,
    func_no2_801C8954,
    func_no2_801C8AAC,
    EntityAxeKnightBlue,
    EntityAxeKnightThrowingAxe,
    func_no1_801CBA30,
    InitializeUnkEntity,
    EntityArmorLord,
    func_no1_801D348C,
    EntityArmorLordFireWave,
    func_no1_801D3700,
    EntityHuntingGirl,
    EntityHuntingGirlAttack,
    func_us_801CDCF4,
    func_us_801CEBC8,
    func_us_801CECAC,
    func_us_801CEB00,
    EntityFleaArmor,
    EntityFleaArmorAttackHitbox,
    EntityFleaMan,
    EntityBoneScimitar,
    EntityBoneScimitarParts,
    EntityPlateLord,
    func_no0_801D4324,
    func_no0_801D44A0,
    func_no0_801D4AA4,
    func_no0_801D542C,
    func_no0_801D4CAC,
    EntityGraveKeeper,
    EntityGraveKeeperHitbox,
    EntityMistDoor,
};

// clang-format off
// animSet, animCurFrame, unk5A, palette, enemyID
EInit OVL_EXPORT(EInitBreakable) = {ANIMSET_DRA(3), 0, 0, 0, 0x000};
EInit g_EInitObtainable = {ANIMSET_DRA(3), 0, 0, 0, 0x001};
EInit g_EInitParticle = {ANIMSET_DRA(3), 0, 0, 0, 0x002};
EInit g_EInitSpawner = {ANIMSET_DRA(0), 0, 0, 0, 0x004};
EInit g_EInitInteractable = {ANIMSET_DRA(0), 0, 0, 0, 0x005};
EInit g_EInitUnkId13 = {ANIMSET_DRA(0), 0, 0, 0, 0x002};
EInit g_EInitLockCamera = {ANIMSET_DRA(0), 0, 0, 0, 0x001};
EInit g_EInitCommon = {ANIMSET_DRA(0), 0, 0, 0, 0x003};
EInit g_EInitDamageNum = {ANIMSET_DRA(0), 0, 0, 0, 0x003};
EInit D_us_80180AF8 = {ANIMSET_OVL(1), 0, 0, 0, 0x005};
EInit D_us_80180B04 = {ANIMSET_OVL(2), 0, 83, 512, 0x005};
EInit g_EInitBladeMaster = {ANIMSET_OVL(3), 1, 72, 513, 0x07A};
EInit D_us_80180B1C = {ANIMSET_OVL(0), 0, 0, 0, 0x07B};
EInit g_EInitBladeSoldier = {ANIMSET_OVL(4), 1, 75, 515, 0x07C};
EInit D_us_80180B34 = {ANIMSET_OVL(0), 0, 0, 0, 0x07D};
EInit g_EInitBoneMusket = {ANIMSET_OVL(5), 0, 76, 517, 0x066};
EInit D_us_80180B4C = {ANIMSET_OVL(5), 0, 76, 517, 0x067};
EInit g_EInitOwlKnight = {ANIMSET_OVL(6), 16, 73, 521, 0x014};
EInit g_EInitOwlKnightSword = {ANIMSET_OVL(6), 0, 73, 521, 0x015};
EInit g_EInitOwl = {ANIMSET_OVL(6), 1, 73, 521, 0x016};
EInit g_EInitValhallaKnight = {ANIMSET_OVL(7), 1, 76, 528, 0x085};
EInit D_us_80180B88 = {ANIMSET_OVL(7), 1, 76, 528, 0x003};
EInit D_us_80180B94 = {ANIMSET_OVL(0), 0, 0, 0, 0x086};
EInit D_us_80180BA0 = {ANIMSET_OVL(0), 0, 0, 0, 0x087};
EInit g_EInitBlueAxeKnight = {ANIMSET_OVL(8), 1, 80, 531, 0x006};
EInit D_us_80180BB8 = {ANIMSET_OVL(8), 47, 80, 531, 0x007};
EInit g_EInitArmorLord = {ANIMSET_OVL(9), 1, 82, 534, 0x022};
EInit D_us_80180BD0 = {ANIMSET_OVL(9), 0, 82, 534, 0x023};
EInit D_us_80180BDC = {ANIMSET_OVL(0), 0, 0, 0, 0x024};
EInit g_EInitHuntingGirl = {ANIMSET_OVL(10), 0, 84, 541, 0x0E3};
EInit g_EInitParanthropus = {ANIMSET_OVL(11), 1, 72, 543, 0x0D3};
EInit D_us_80180C00 = {ANIMSET_OVL(0), 0, 0, 0, 0x0D4};
EInit D_us_80180C0C = {ANIMSET_OVL(11), 54, 72, 543, 0x0D5};
EInit g_EInitFleaArmor = {ANIMSET_OVL(12), 1, 72, 546, 0x029};
EInit D_us_80180C24 = {ANIMSET_DRA(0), 0, 0, 0, 0x02A};
EInit g_EInitFleaMan = {ANIMSET_OVL(12), 0, 72, 546, 0x028};
EInit g_EInitBoneScimitar = {ANIMSET_OVL(13), 1, 77, 549, 0x069};
EInit D_us_80180C48 = {ANIMSET_OVL(13), 0, 77, 549, 0x002};
EInit g_EInitPlateLord = {ANIMSET_OVL(14), 1, 76, 550, 0x061};
EInit D_us_80180C60 = {ANIMSET_OVL(14), 22, 76, 550, 0x062};
EInit g_EInitGraveKeeper = {ANIMSET_OVL(24), 1, 77, 553, 0x06F};
EInit D_us_80180C78 = {ANIMSET_OVL(0), 0, 0, 0, 0x070};
// clang-format on
