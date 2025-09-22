// SPDX-License-Identifier: AGPL-3.0-or-later
#include <weapon.h>
#define OVL_EXPORT(x) W1_015_##x

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6C80);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", LoadWeaponPalette);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6E00);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6E48);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6E90);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6EE0);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_pspeu_092F6F50);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", EntityWeaponAttack);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_ptr_80170004);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_ptr_80170008);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_ptr_8017000C);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_ptr_80170010);

INCLUDE_ASM("weapon/w1_015_psp/nonmatchings/psp/w1_015", func_ptr_80170014);

int GetWeaponId(void) { return 15; }

void EntityWeaponShieldSpell(void) {} 

void func_ptr_80170024(void) {} 

void func_ptr_80170028(void) {} 

void WeaponUnused2C(void) {} 

void WeaponUnused30(void) {} 

void WeaponUnused34(void) {} 

void WeaponUnused38(void) {} 

void WeaponUnused3C(void) {} 

extern void D_8017D000[];
#define WEAPON_PTR D_8017D000
extern Weapon OVL_EXPORT(Overlay);

void OVL_EXPORT(Load)(void) { memcpy(&WEAPON_PTR, &OVL_EXPORT(Overlay), sizeof(Weapon)); }

/*
void EntityWeaponAttack(Entity* self);
void LoadWeaponPalette(s32 clutIndex);

Weapon OVL_EXPORT(Overlay) = {
EntityWeaponAttack,
(void (*)(Entity*))func_ptr_80170004,
(void (*)(Entity*))func_ptr_80170008,
(void (*)(Entity*))func_ptr_8017000C,
func_ptr_80170010,
(void (*)(Entity*))func_ptr_80170014,
GetWeaponId,
LoadWeaponPalette,
(void (*)(Entity*))EntityWeaponShieldSpell,
(void (*)(Entity*))func_ptr_80170024,
(void (*)(Entity*))func_ptr_80170028,
WeaponUnused2C,
WeaponUnused30,
WeaponUnused34,
WeaponUnused38,
WeaponUnused3C,
};
*/
