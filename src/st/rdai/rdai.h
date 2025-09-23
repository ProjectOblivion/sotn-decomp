// SPDX-License-Identifier: AGPL-3.0-or-later
#include <stage.h>

#define OVL_EXPORT(x) RDAI_##x

enum OVL_EXPORT(Entities) {
    E_NONE,
    E_BREAKABLE,           // EntityBreakable
    E_EXPLOSION,           // EntityExplosion
    E_PRIZE_DROP,          // EntityPrizeDrop
    E_DAMAGE_DISPLAY,      // EntityDamageDisplay
    E_RED_DOOR,            // OVL_EXPORT(EntityRedDoor)
    E_INTENSE_EXPLOSION,   // EntityIntenseExplosion
    E_SOUL_STEAL_ORB,      // EntitySoulStealOrb
    E_ROOM_FOREGROUND,     // EntityRoomForeground
    E_STAGE_NAME_POPUP,    // EntityStageNamePopup
    E_EQUIP_ITEM_DROP,     // EntityEquipItemDrop
    E_RELIC_ORB,           // EntityRelicOrb
    E_HEART_DROP,          // EntityHeartDrop
    E_ENEMY_BLOOD,         // EntityEnemyBlood
    E_MESSAGE_BOX,         // EntityMessageBox
    E_DUMMY_F,             // EntityDummy
    E_DUMMY_10,            // EntityDummy
    E_BACKGROUND_BLOCK,    // OVL_EXPORT(EntityBackgroundBlock)
    E_LOCK_CAMERA,         // OVL_EXPORT(EntityLockCamera)
    E_UNK_ID13,            // EntityUnkId13
    E_EXPLOSION_VARIANTS,  // EntityExplosionVariants
    E_GREY_PUFF,           // EntityGreyPuff
    E_UNK_16,              // func_us_801B1C34
    E_CASTLE_WALL1,        // EntityCastleWall1
    E_CASTLE_WALL2,        // EntityCastleWall2
    E_UNK_19,              // func_us_801B240C
    E_UNK_1A,              // func_us_801B2C28
    E_UNK_1B,              // func_us_801B3368
    E_UNK_1C,              // func_us_801BFE6C
    E_UNK_1D,              // func_us_801C0240
    E_UNK_1E,              // func_us_801BF830
    E_UNK_1F,              // func_us_801BFC58
    E_UNK_20,              // func_us_801C0528
    E_UNK_21,              // func_us_801C0898
    E_UNK_22,              // func_us_801C0C44
    E_SPECTRAL_SWORD_AURA, // EntitySpectralSwordAura
    E_UNK_24,              // func_us_801C17E8
    E_UNK_25,              // func_us_801C1DE8
    E_UNK_26,              // func_us_801C2418
    E_UNK_27,              // func_us_801C3580
    E_UNK_28,              // func_us_801C38F8
    E_UNK_29,              // func_us_801C4578
    E_CLOUDS,              // EntityClouds
    E_UNK_2B,              // func_us_801B3A4C
    E_UNK_2C,              // func_us_801B3B94
    E_SPIKES,              // EntitySpikes
    E_SPIKES_PARTS,        // EntitySpikesParts
    E_SPIKES_DUST,         // EntitySpikesDust
    E_SPIKES_DAMAGE,       // EntitySpikesDamage
    E_BREAKABLE_DEBRIS,    // OVL_EXPORT(EntityBreakableDebris)
    E_UNK_32,              // func_us_801C6040
    E_UNK_33,              // func_us_801C4668
    E_UNK_34,              // func_us_801C4908
    NUM_ENTITIES,
};
