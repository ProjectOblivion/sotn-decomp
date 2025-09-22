// SPDX-License-Identifier: AGPL-3.0-or-later
#include <weapon.h>
#define OVL_EXPORT(x) W1_008_##x

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6C80);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", LoadWeaponPalette);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6E00);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6E48);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6EE8);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6F38);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", func_pspeu_092F6FA8);

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", EntityWeaponAttack);

void func_ptr_80170004(void) {
}

void func_ptr_80170008(void) {
}

void func_ptr_8017000C(void) {
}

void func_ptr_80170010(void) {
}

void func_ptr_80170014(void) {
}

int GetWeaponId(void) { return 8; }

INCLUDE_ASM("weapon/w1_008_psp/nonmatchings/psp/w1_008", EntityWeaponShieldSpell);

void func_ptr_80170024(void) {
}

void func_ptr_80170028(void) {
}

void WeaponUnused2C(void) {
}

void WeaponUnused30(void) {
}

void WeaponUnused34(void) {
}

void WeaponUnused38(void) {
}

void WeaponUnused3C(void) {
}

extern void D_8017D000[];
#define WEAPON_PTR D_8017D000
extern Weapon OVL_EXPORT(Overlay);

void OVL_EXPORT(Load)(void) { memcpy(&WEAPON_PTR, &OVL_EXPORT(Overlay), sizeof(Weapon)); }

/*
extern EntityWeaponAttack;
extern GetWeaponId;
extern LoadWeaponPalette;

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
