// SPDX-License-Identifier: AGPL-3.0-or-later
#include <stage.h>

#define OVL_EXPORT(x) RDAI_##x

enum OVL_EXPORT(Entities) {
    E_NONE,
    E_BREAKABLE,          // EntityBreakable
    E_EXPLOSION,          // EntityExplosion
    E_PRIZE_DROP,         // EntityPrizeDrop
    E_DAMAGE_DISPLAY,     // EntityDamageDisplay
    E_RED_DOOR,           // OVL_EXPORT(EntityRedDoor)
    E_INTENSE_EXPLOSION,  // EntityIntenseExplosion
    E_SOUL_STEAL_ORB,     // EntitySoulStealOrb
    E_ROOM_FOREGROUND,    // EntityRoomForeground
    E_STAGE_NAME_POPUP,   // EntityStageNamePopup
    E_EQUIP_ITEM_DROP,    // EntityEquipItemDrop
    E_RELIC_ORB,          // EntityRelicOrb
    E_HEART_DROP,         // EntityHeartDrop
    E_ENEMY_BLOOD,        // EntityEnemyBlood
    E_MESSAGE_BOX,        // EntityMessageBox
    E_DUMMY_F,            // EntityDummy
    E_DUMMY_10,           // EntityDummy
    E_BACKGROUND_BLOCK,   // OVL_EXPORT(EntityBackgroundBlock)
    E_LOCK_CAMERA,        // OVL_EXPORT(EntityLockCamera)
    E_UNK_ID13,           // EntityUnkId13
    E_EXPLOSION_VARIANTS, // EntityExplosionVariants
    E_GREY_PUFF,          // EntityGreyPuff
    E_UNK_16,             // func_pspeu_09250400
    E_CASTLE_WALL1,       // EntityCastleWall1
    E_CASTLE_WALL2,       // EntityCastleWall2
    E_UNK_19,             // func_pspeu_092510D8
    E_STAINED_GLASS,      // EntityStainedGlass
    E_UNK_1B,             // func_us_801D9F5C
    E_UNK_1C,             // func_pspeu_0923B448
    E_UNK_1D,             // func_pspeu_0923B970
    E_UNK_1E,             // func_pspeu_0923AAF0
    E_UNK_1F,             // func_pspeu_0923B098
    E_UNK_20,             // func_pspeu_0923BE30
    E_UNK_21,             // func_pspeu_0923C358
    E_UNK_22,             // func_pspeu_09249230
    E_UNK_23,             // func_us_801CEB08
    E_UNK_24,             // func_pspeu_0924A2A8
    E_UNK_25,             // func_pspeu_0924AB18
    E_UNK_26,             // func_pspeu_09237A08
    E_UNK_27,             // func_pspeu_092393D8
    E_UNK_28,             // func_pspeu_09240AD8
    E_UNK_29,             // func_pspeu_09241CC0
    E_CLOUDS,             // EntityClouds
    E_UNK_2B,             // func_us_801C34FC
    E_UNK_2C,             // func_pspeu_092515A8
    E_SPIKES,             // EntitySpikes
    E_SPIKES_PARTS,       // EntitySpikesParts
    E_SPIKES_DUST,        // EntitySpikesDust
    E_SPIKES_DAMAGE,      // EntitySpikesDamage
    E_BREAKABLE_DEBRIS,   // OVL_EXPORT(EntityBreakableDebris)
    E_UNK_32,             // func_pspeu_0924CBB0
    E_UNK_33,             // func_pspeu_0923C880
    E_UNK_34,             // func_pspeu_0923CBD0
    NUM_ENTITIES,
};
