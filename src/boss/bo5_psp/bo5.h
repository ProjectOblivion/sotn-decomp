// SPDX-License-Identifier: AGPL-3.0-or-later
#include <stage.h>

#define OVL_EXPORT(x) BO5_##x

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
    E_UNK_16,             // func_pspeu_09247658
    E_STAINED_GLASS,      // EntityStainedGlass
    E_UNK_18,             // func_us_801D9F5C
    E_BLOCK,              // EntityBlock
    E_STATUE,             // EntityStatue
    E_BELL,               // EntityBell
    E_CASTLE_WALL1,       // EntityCastleWall1
    E_CASTLE_WALL2,       // EntityCastleWall2
    E_STAIRCASE,          // EntityStaircase
    E_CLOUDS,             // EntityClouds
    E_UNK_20,             // func_us_801C34FC
    E_UNK_21,             // func_pspeu_09250010
    E_UNK_22,             // func_pspeu_09247FE0
    E_UNK_23,             // func_pspeu_0924B670
    E_UNK_24,             // func_pspeu_0924B940
    E_UNK_25,             // func_pspeu_0924B340
    E_UNK_26,             // func_pspeu_0924B160
    E_UNK_27,             // func_pspeu_0924AD58
    E_LIFE_UPSPAWN,       // EntityLifeUpSpawn
    E_UNK_29,             // func_pspeu_09247028
    E_CUTSCENE,           // OVL_EXPORT(EntityCutscene)
    E_UNK_2B,             // func_pspeu_0924C128
    E_UNK_2C,             // func_pspeu_0924C4D8
    E_UNK_2D,             // func_pspeu_0924D118
    E_UNK_2E,             // RicSetDeadPrologue
    NUM_ENTITIES,
};
