// SPDX-License-Identifier: AGPL-3.0-or-later
#include <game.h>

typedef struct {
    u16 frame;
    s16 pivotX;
    s16 pivotY;
    u16 clut;
} AluFrame;

static AluFrame D_800CF748;
static AluFrame D_800CF750;
static AluFrame D_800CF758;
static AluFrame D_800CF760;
static AluFrame D_800CF768;
static AluFrame D_800CF770;
static AluFrame D_800CF778;
static AluFrame D_800CF780;
static AluFrame D_800CF788;
static AluFrame D_800CF790;
static AluFrame D_800CF798;
static AluFrame D_800CF7A0;
static AluFrame D_800CF7A8;
static AluFrame D_800CF7B0;
static AluFrame D_800CF7B8;
static AluFrame D_800CF7C0;
static AluFrame D_800CF7C8;
static AluFrame D_800CF7D0;
static AluFrame D_800CF7D8;
static AluFrame D_800CF7E0;
static AluFrame D_800CF7E8;
static AluFrame D_800CF7F0;
static AluFrame D_800CF7F8;
static AluFrame D_800CF800;
static AluFrame D_800CF808;
static AluFrame D_800CF810;
static AluFrame D_800CF818;
static AluFrame D_800CF820;
static AluFrame D_800CF828;
static AluFrame D_800CF830;
static AluFrame D_800CF838;
static AluFrame D_800CF840;
static AluFrame D_800CF848;
static AluFrame D_800CF850;
static AluFrame D_800CF858;
static AluFrame D_800CF860;
static AluFrame D_800CF868;
static AluFrame D_800CF870;
static AluFrame D_800CF878;
static AluFrame D_800CF880;
static AluFrame D_800CF888;
static AluFrame D_800CF890;
static AluFrame D_800CF898;
static AluFrame D_800CF8A0;
static AluFrame D_800CF8A8;
static AluFrame D_800CF8B0;
static AluFrame D_800CF8B8;
static AluFrame D_800CF8C0;
static AluFrame D_800CF8C8;
static AluFrame D_800CF8D0;
static AluFrame D_800CF8D8;
static AluFrame D_800CF8E0;
static AluFrame D_800CF8E8;
static AluFrame D_800CF8F0;
static AluFrame D_800CF8F8;
static AluFrame D_800CF900;
static AluFrame D_800CF908;
static AluFrame D_800CF910;
static AluFrame D_800CF918;
static AluFrame D_800CF920;
static AluFrame D_800CF928;
static AluFrame D_800CF930;
static AluFrame D_800CF938;
static AluFrame D_800CF940;
static AluFrame D_800CF948;
static AluFrame D_800CF950;
static AluFrame D_800CF958;
static AluFrame D_800CF960;
static AluFrame D_800CF968;
static AluFrame D_800CF970;
static AluFrame D_800CF978;
static AluFrame D_800CF980;
static AluFrame D_800CF988;
static AluFrame D_800CF990;
static AluFrame D_800CF998;
static AluFrame D_800CF9A0;
static AluFrame D_800CF9A8;
static AluFrame D_800CF9B0;
static AluFrame D_800CF9B8;
static AluFrame D_800CF9C0;
static AluFrame D_800CF9C8;
static AluFrame D_800CF9D0;
static AluFrame D_800CF9D8;
static AluFrame D_800CF9E0;
static AluFrame D_800CF9E8;
static AluFrame D_800CF9F0;
static AluFrame D_800CF9F8;
static AluFrame D_800CFA00;
static AluFrame D_800CFA08;
static AluFrame D_800CFA10;
static AluFrame D_800CFA18;
static AluFrame D_800CFA20;
static AluFrame D_800CFA28;
static AluFrame D_800CFA30;
static AluFrame D_800CFA38;
static AluFrame D_800CFA40;
static AluFrame D_800CFA48;
static AluFrame D_800CFA50;
static AluFrame D_800CFA58;
static AluFrame D_800CFA60;
static AluFrame D_800CFA68;
static AluFrame D_800CFA70;
static AluFrame D_800CFA78;
static AluFrame D_800CFA80;
static AluFrame D_800CFA88;
static AluFrame D_800CFA90;
static AluFrame D_800CFA98;
static AluFrame D_800CFAA0;
static AluFrame D_800CFAA8;
static AluFrame D_800CFAB0;
static AluFrame D_800CFAB8;
static AluFrame D_800CFAC0;
static AluFrame D_800CFAC8;
static AluFrame D_800CFAD0;
static AluFrame D_800CFAD8;
static AluFrame D_800CFAE0;
static AluFrame D_800CFAE8;
static AluFrame D_800CFAF0;
static AluFrame D_800CFAF8;
static AluFrame D_800CFB00;
static AluFrame D_800CFB08;
static AluFrame D_800CFB10;
static AluFrame D_800CFB18;
static AluFrame D_800CFB20;
static AluFrame D_800CFB28;
static AluFrame D_800CFB30;
static AluFrame D_800CFB38;
static AluFrame D_800CFB40;
static AluFrame D_800CFB48;
static AluFrame D_800CFB50;
static AluFrame D_800CFB58;
static AluFrame D_800CFB60;
static AluFrame D_800CFB68;
static AluFrame D_800CFB70;
static AluFrame D_800CFB78;
static AluFrame D_800CFB80;
static AluFrame D_800CFB88;
static AluFrame D_800CFB90;
static AluFrame D_800CFB98;
static AluFrame D_800CFBA0;
static AluFrame D_800CFBA8;
static AluFrame D_800CFBB0;
static AluFrame D_800CFBB8;
static AluFrame D_800CFBC0;
static AluFrame D_800CFBC8;
static AluFrame D_800CFBD0;
static AluFrame D_800CFBD8;
static AluFrame D_800CFBE0;
static AluFrame D_800CFBE8;
static AluFrame D_800CFBF0;
static AluFrame D_800CFBF8;
static AluFrame D_800CFC00;
static AluFrame D_800CFC08;
static AluFrame D_800CFC10;
static AluFrame D_800CFC18;
static AluFrame D_800CFC20;
static AluFrame D_800CFC28;
static AluFrame D_800CFC30;
static AluFrame D_800CFC38;
static AluFrame D_800CFC40;
static AluFrame D_800CFC48;
static AluFrame D_800CFC50;
static AluFrame D_800CFC58;
static AluFrame D_800CFC60;
static AluFrame D_800CFC68;
static AluFrame D_800CFC70;
static AluFrame D_800CFC78;
static AluFrame D_800CFC80;
static AluFrame D_800CFC88;
static AluFrame D_800CFC90;
static AluFrame D_800CFC98;
static AluFrame D_800CFCA0;
static AluFrame D_800CFCA8;
static AluFrame D_800CFCB0;
static AluFrame D_800CFCB8;
static AluFrame D_800CFCC0;
static AluFrame D_800CFCC8;
static AluFrame D_800CFCD0;
static AluFrame D_800CFCD8;
static AluFrame D_800CFCE0;
static AluFrame D_800CFCE8;
static AluFrame D_800CFCF0;
static AluFrame D_800CFCF8;
static AluFrame D_800CFD00;
static AluFrame D_800CFD08;
static AluFrame D_800CFD10;
static AluFrame D_800CFD18;
static AluFrame D_800CFD20;
static AluFrame D_800CFD28;
static AluFrame D_800CFD30;
static AluFrame D_800CFD38;
static AluFrame D_800CFD40;
static AluFrame D_800CFD48;
static AluFrame D_800CFD50;
static AluFrame D_800CFD58;
static AluFrame D_800CFD60;
static AluFrame D_800CFD68;
static AluFrame D_800CFD70;
static AluFrame D_800CFD78;
static AluFrame D_800CFD80;
static AluFrame D_800CFD88;
static AluFrame D_800CFD90;
static AluFrame D_800CFD98;
static AluFrame D_800CFDA0;
static AluFrame D_800CFDA8;
static AluFrame D_800CFDB0;
static AluFrame D_800CFDB8;
static AluFrame D_800CFDC0;
static AluFrame D_800CFDC8;
static AluFrame D_800CFDD0;
static AluFrame D_800CFDD8;
static AluFrame D_800CFDE0;
static AluFrame D_800CFDE8;
static AluFrame D_800CFDF0;
static AluFrame D_800CFDF8;
static AluFrame D_800CFE00;
static AluFrame D_800CFE08;
static AluFrame D_800CFE10;
static AluFrame D_800CFE18;
static AluFrame D_800CFE20;
static AluFrame D_800CFE28;
static AluFrame D_800CFE30;
static AluFrame D_800CFE38;
static AluFrame D_800CFE40;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;
static AluFrame D_800CFE10;

AluFrame* D_800CF324[] = {
    NULL,        &D_800CF748, &D_800CF750, &D_800CF758, &D_800CF760,
    &D_800CF768, &D_800CF770, &D_800CF778, &D_800CF780, &D_800CF788,
    &D_800CF790, &D_800CF798, &D_800CF7A0, &D_800CF7A8, &D_800CF7B0,
    &D_800CF7B8, &D_800CF7C0, &D_800CF7C8, &D_800CF7D0, &D_800CF7D8,
    &D_800CF7E0, &D_800CF7E8, &D_800CF7F0, &D_800CF7F8, &D_800CF800,
    &D_800CF808, &D_800CF810, &D_800CF818, &D_800CF820, &D_800CF828,
    &D_800CF830, &D_800CF838, &D_800CF840, &D_800CF848, &D_800CF850,
    &D_800CF858, &D_800CF860, &D_800CF868, &D_800CF870, &D_800CF878,
    &D_800CF880, &D_800CF888, &D_800CF890, &D_800CF898, &D_800CF8A0,
    &D_800CF8A8, &D_800CF8B0, &D_800CF8B8, &D_800CF8C0, &D_800CF8C8,
    &D_800CF8D0, &D_800CF8D8, &D_800CF8E0, &D_800CF8E8, &D_800CF8F0,
    &D_800CF8F8, &D_800CF900, &D_800CF908, &D_800CF910, &D_800CF918,
    &D_800CF920, &D_800CF928, &D_800CF930, &D_800CF938, &D_800CF940,
    &D_800CF948, &D_800CF950, &D_800CF958, &D_800CF960, &D_800CF968,
    &D_800CF970, &D_800CF978, &D_800CF980, &D_800CF988, &D_800CF990,
    &D_800CF998, &D_800CF9A0, &D_800CF9A8, &D_800CF9B0, &D_800CF9B8,
    &D_800CF9C0, &D_800CF9C8, &D_800CF9D0, &D_800CF9D8, &D_800CF9E0,
    &D_800CF9E8, &D_800CF9F0, &D_800CF9F8, &D_800CFA00, &D_800CFA08,
    &D_800CFA10, &D_800CFA18, &D_800CFA20, &D_800CFA28, &D_800CFA30,
    &D_800CFA38, &D_800CFA40, &D_800CFA48, &D_800CFA50, &D_800CFA58,
    &D_800CFA60, &D_800CFA68, &D_800CFA70, &D_800CFA78, &D_800CFA80,
    &D_800CFA88, &D_800CFA90, &D_800CFA98, &D_800CFAA0, &D_800CFAA8,
    &D_800CFAB0, &D_800CFAB8, &D_800CFAC0, &D_800CFAC8, &D_800CFAD0,
    &D_800CFAD8, &D_800CFAE0, &D_800CFAE8, &D_800CFAF0, &D_800CFAF8,
    &D_800CFB00, &D_800CFB08, &D_800CFB10, &D_800CFB18, &D_800CFB20,
    &D_800CFB28, &D_800CFB30, &D_800CFB38, &D_800CFB40, &D_800CFB48,
    &D_800CFB50, &D_800CFB58, &D_800CFB60, &D_800CFB68, &D_800CFB70,
    &D_800CFB78, &D_800CFB80, &D_800CFB88, &D_800CFB90, &D_800CFB98,
    &D_800CFBA0, &D_800CFBA8, &D_800CFBB0, &D_800CFBB8, &D_800CFBC0,
    &D_800CFBC8, &D_800CFBD0, &D_800CFBD8, &D_800CFBE0, &D_800CFBE8,
    &D_800CFBF0, &D_800CFBF8, &D_800CFC00, &D_800CFC08, &D_800CFC10,
    &D_800CFC18, &D_800CFC20, &D_800CFC28, &D_800CFC30, &D_800CFC38,
    &D_800CFC40, &D_800CFC48, &D_800CFC50, &D_800CFC58, &D_800CFC60,
    &D_800CFC68, &D_800CFC70, &D_800CFC78, &D_800CFC80, &D_800CFC88,
    &D_800CFC90, &D_800CFC98, &D_800CFCA0, &D_800CFCA8, &D_800CFCB0,
    &D_800CFCB8, &D_800CFCC0, &D_800CFCC8, &D_800CFCD0, &D_800CFCD8,
    &D_800CFCE0, &D_800CFCE8, &D_800CFCF0, &D_800CFCF8, &D_800CFD00,
    &D_800CFD08, &D_800CFD10, &D_800CFD18, &D_800CFD20, &D_800CFD28,
    &D_800CFD30, &D_800CFD38, &D_800CFD40, &D_800CFD48, &D_800CFD50,
    &D_800CFD58, &D_800CFD60, &D_800CFD68, &D_800CFD70, &D_800CFD78,
    &D_800CFD80, &D_800CFD88, &D_800CFD90, &D_800CFD98, &D_800CFDA0,
    &D_800CFDA8, &D_800CFDB0, &D_800CFDB8, &D_800CFDC0, &D_800CFDC8,
    &D_800CFDD0, &D_800CFDD8, &D_800CFDE0, &D_800CFDE8, &D_800CFDF0,
    &D_800CFDF8, &D_800CFE00, &D_800CFE08, &D_800CFE10, &D_800CFE18,
    &D_800CFE20, &D_800CFE28, &D_800CFE30, &D_800CFE38, &D_800CFE40,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10,
    &D_800CFE10, &D_800CFE10, &D_800CFE10, &D_800CFE10, NULL,
};

static AluFrame D_800CF748 = {0x8000, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF750 = {0x8001, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF758 = {0x8002, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF760 = {0x8003, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF768 = {0x8004, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF770 = {0x8005, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF778 = {0x8006, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF780 = {0x8007, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CF788 = {0x8008, 0xFFE0, 0xFFF1, 0x0000};
static AluFrame D_800CF790 = {0x8009, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CF798 = {0x800A, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CF7A0 = {0x800B, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CF7A8 = {0x800C, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CF7B0 = {0x800D, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CF7B8 = {0x800E, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CF7C0 = {0x800F, 0xFFF0, 0xFFF1, 0x0000};
static AluFrame D_800CF7C8 = {0x8010, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7D0 = {0x8011, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7D8 = {0x8012, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7E0 = {0x8013, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7E8 = {0x8014, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7F0 = {0x8015, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF7F8 = {0x8016, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF800 = {0x8017, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF808 = {0x8018, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF810 = {0x8019, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF818 = {0x801A, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF820 = {0x801B, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF828 = {0x801C, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CF830 = {0x801D, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF838 = {0x801E, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF840 = {0x801F, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF848 = {0x8020, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF850 = {0x8021, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF858 = {0x8022, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF860 = {0x8023, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF868 = {0x8024, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF870 = {0x8025, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF878 = {0x8026, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF880 = {0x8027, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF888 = {0x8028, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CF890 = {0x8029, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF898 = {0x802A, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8A0 = {0x802B, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8A8 = {0x802C, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8B0 = {0x802D, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8B8 = {0x802E, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8C0 = {0x802F, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8C8 = {0x8030, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8D0 = {0x8031, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8D8 = {0x8032, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8E0 = {0x8033, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8E8 = {0x8034, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8F0 = {0x8035, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF8F8 = {0x8036, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF900 = {0x8037, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF908 = {0x8038, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF910 = {0x8039, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF918 = {0x803A, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF920 = {0x803B, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF928 = {0x803C, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF930 = {0x803D, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF938 = {0x803E, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF940 = {0x803F, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF948 = {0x8040, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF950 = {0x8041, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF958 = {0x8042, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CF960 = {0x8043, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF968 = {0x8044, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF970 = {0x8045, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF978 = {0x8046, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF980 = {0x8047, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF988 = {0x8048, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF990 = {0x8049, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF998 = {0x804A, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9A0 = {0x804B, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9A8 = {0x804C, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9B0 = {0x804D, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9B8 = {0x804E, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9C0 = {0x804F, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CF9C8 = {0x8050, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9D0 = {0x8051, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9D8 = {0x8052, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9E0 = {0x8053, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9E8 = {0x8054, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CF9F0 = {0x8055, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CF9F8 = {0x8056, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA00 = {0x8057, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA08 = {0x8058, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA10 = {0x8059, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA18 = {0x805A, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA20 = {0x805B, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA28 = {0x805C, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA30 = {0x805D, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA38 = {0x805E, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA40 = {0x805F, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA48 = {0x8060, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA50 = {0x8061, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA58 = {0x8062, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA60 = {0x8063, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA68 = {0x8064, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA70 = {0x8065, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFA78 = {0x8066, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA80 = {0x8067, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA88 = {0x8068, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFA90 = {0x8069, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFA98 = {0x806A, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAA0 = {0x806B, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAA8 = {0x806C, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAB0 = {0x806D, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAB8 = {0x806E, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAC0 = {0x806F, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFAC8 = {0x8070, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFAD0 = {0x8071, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFAD8 = {0x8072, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFAE0 = {0x8073, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFAE8 = {0x8074, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFAF0 = {0x8075, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFAF8 = {0x8076, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFB00 = {0x8077, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFB08 = {0x8078, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFB10 = {0x8079, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFB18 = {0x807A, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFB20 = {0x807B, 0xFFF8, 0xFFE1, 0x0000};
static AluFrame D_800CFB28 = {0x807C, 0xFFF8, 0xFFE1, 0x0000};
static AluFrame D_800CFB30 = {0x807D, 0xFFF8, 0xFFE1, 0x0000};
static AluFrame D_800CFB38 = {0x807E, 0xFFF8, 0xFFE1, 0x0000};
static AluFrame D_800CFB40 = {0x807F, 0xFFF8, 0xFFE1, 0x0000};
static AluFrame D_800CFB48 = {0x8080, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFB50 = {0x8081, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFB58 = {0x8082, 0xFFE8, 0xFFFB, 0x0000};
static AluFrame D_800CFB60 = {0x8083, 0xFFE8, 0xFFFB, 0x0000};
static AluFrame D_800CFB68 = {0x8084, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFB70 = {0x8085, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFB78 = {0x8086, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFB80 = {0x8087, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFB88 = {0x8088, 0xFFE0, 0xFFD9, 0x0000};
static AluFrame D_800CFB90 = {0x8089, 0xFFE0, 0xFFD9, 0x0000};
static AluFrame D_800CFB98 = {0x808A, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFBA0 = {0x808B, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBA8 = {0x808C, 0xFFE8, 0xFFD9, 0x0000};
static AluFrame D_800CFBB0 = {0x808D, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBB8 = {0x808E, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBC0 = {0x808F, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBC8 = {0x8090, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBD0 = {0x8091, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFBD8 = {0x8092, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFBE0 = {0x8093, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFBE8 = {0x8094, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFBF0 = {0x8095, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFBF8 = {0x8096, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFC00 = {0x8097, 0xFFE0, 0xFFB1, 0x0000};
static AluFrame D_800CFC08 = {0x8098, 0xFFE8, 0xFFE1, 0x0000};
static AluFrame D_800CFC10 = {0x8099, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CFC18 = {0x809A, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CFC20 = {0x809B, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFC28 = {0x809C, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFC30 = {0x809D, 0xFFE5, 0xFFE5, 0x0000};
static AluFrame D_800CFC38 = {0x809E, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFC40 = {0x809E, 0xFFF0, 0xFFE0, 0x0000};
static AluFrame D_800CFC48 = {0x809F, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFC50 = {0x80A0, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFC58 = {0x80A1, 0xFFF0, 0xFFE1, 0x0000};
static AluFrame D_800CFC60 = {0x80A1, 0xFFF0, 0xFFE0, 0x0000};
static AluFrame D_800CFC68 = {0x80A2, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFC70 = {0x80A2, 0xFFDF, 0xFFE1, 0x0000};
static AluFrame D_800CFC78 = {0x80A3, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFC80 = {0x80A3, 0xFFDF, 0xFFE1, 0x0000};
static AluFrame D_800CFC88 = {0x80A4, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFC90 = {0x80A4, 0xFFE1, 0xFFE1, 0x0000};
static AluFrame D_800CFC98 = {0x80A5, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFCA0 = {0x80A5, 0xFFE1, 0xFFE1, 0x0000};
static AluFrame D_800CFCA8 = {0x80A6, 0xFFE8, 0xFFE9, 0x009E};
static AluFrame D_800CFCB0 = {0x80A7, 0xFFF5, 0xFFE9, 0x009F};
static AluFrame D_800CFCB8 = {0x80A8, 0xFFB7, 0xFFD1, 0x009E};
static AluFrame D_800CFCC0 = {0x80A9, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFCC8 = {0x80AA, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFCD0 = {0x80AB, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFCD8 = {0x80AC, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFCE0 = {0x80AD, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFCE8 = {0x80AE, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFCF0 = {0x80AF, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFCF8 = {0x80B0, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFD00 = {0x80B1, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFD08 = {0x80B2, 0xFFE8, 0xFFE1, 0x0000};
static AluFrame D_800CFD10 = {0x80B3, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CFD18 = {0x80B4, 0xFFE8, 0xFFE9, 0x0000};
static AluFrame D_800CFD20 = {0x80B5, 0xFFE8, 0xFFE1, 0x0000};
static AluFrame D_800CFD28 = {0x80B6, 0xFFE8, 0xFFE1, 0x0000};
static AluFrame D_800CFD30 = {0x80B7, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFD38 = {0x80B8, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFD40 = {0x80B9, 0xFFF8, 0xFFE9, 0x0000};
static AluFrame D_800CFD48 = {0x80BA, 0xFFF8, 0xFFE9, 0x0000};
static AluFrame D_800CFD50 = {0x80BB, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFD58 = {0x80BC, 0xFFF0, 0xFFE9, 0x0000};
static AluFrame D_800CFD60 = {0x80BD, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CFD68 = {0x80BE, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CFD70 = {0x80BF, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CFD78 = {0x80C0, 0xFFE0, 0xFFF9, 0x0000};
static AluFrame D_800CFD80 = {0x80C1, 0xFFE0, 0xFFF1, 0x0000};
static AluFrame D_800CFD88 = {0x80C2, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CFD90 = {0x80C3, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CFD98 = {0x80C4, 0xFFE8, 0xFFF9, 0x0000};
static AluFrame D_800CFDA0 = {0x80C5, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFDA8 = {0x80C6, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFDB0 = {0x80C7, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFDB8 = {0x80C8, 0xFFF0, 0xFFF9, 0x0000};
static AluFrame D_800CFDC0 = {0x80C9, 0xFFE0, 0xFFE1, 0x0000};
static AluFrame D_800CFDC8 = {0x80CA, 0xFFD8, 0xFFE1, 0x0000};
static AluFrame D_800CFDD0 = {0x80CB, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CFDD8 = {0x80CC, 0xFFE0, 0xFFE9, 0x0000};
static AluFrame D_800CFDE0 = {0x80CD, 0xFFD8, 0xFFD9, 0x0000};
static AluFrame D_800CFDE8 = {0x80CE, 0xFFE0, 0xFFD9, 0x0000};
static AluFrame D_800CFDF0 = {0x80CF, 0xFFE0, 0xFFD9, 0x0000};
static AluFrame D_800CFDF8 = {0x80D0, 0xFFE0, 0xFFD1, 0x0000};
static AluFrame D_800CFE00 = {0x80D1, 0xFFE0, 0xFFD1, 0x0000};
static AluFrame D_800CFE08 = {0x80D2, 0xFFE8, 0xFFF1, 0x0000};
static AluFrame D_800CFE10 = {0x80D3, 0xFFEE, 0xFFEA, 0x0000};
static AluFrame D_800CFE18 = {0x80D4, 0xFFF0, 0xFFEA, 0x0000};
static AluFrame D_800CFE20 = {0x80D5, 0xFFF2, 0xFFEA, 0x0000};
static AluFrame D_800CFE28 = {0x80D6, 0xFFEB, 0xFFEB, 0x0000};
static AluFrame D_800CFE30 = {0x80D7, 0xFFED, 0xFFEB, 0x0000};
static AluFrame D_800CFE38 = {0x80D8, 0xFFED, 0xFFEB, 0x0000};
static AluFrame D_800CFE40 = {0x80D9, 0xFFF4, 0xFFEC, 0x0000};

u32 D_800CFE90[];
u32 D_800CFE98[];
u32 D_800CFEA0[];
u32 D_800CFEA8[];
u32 D_800CFEB0[];
u32 D_800CFEB8[];
u32 D_800CFEC0[];
u32 D_800CFEC8[];
u32 D_800CFED0[];
u32 D_800CFED8[];
u32 D_800CFEE0[];
u32 D_800CFEE8[];
u32 D_800CFEF0[];
u32 D_800CFEF8[];
u32 D_800CFF00[];
u32 D_800CFF08[];

s16* D_800CFE48[] = {
    NULL,
    (s16*)D_800CFE90,
    (s16*)D_800CFE98,
    (s16*)D_800CFEA0,
    (s16*)D_800CFEA8,
    (s16*)D_800CFEB0,
    (s16*)D_800CFEB8,
    (s16*)D_800CFEC0,
    (s16*)D_800CFEC8,
    (s16*)D_800CFED0,
    (s16*)D_800CFED8,
    (s16*)D_800CFEE0,
    (s16*)D_800CFEE8,
    (s16*)D_800CFEF0,
    (s16*)D_800CFEF8,
    (s16*)D_800CFF00,
    (s16*)D_800CFF08,
    NULL,
};

u32 D_800CFE90[] = {
    0xFFEA8000,
    0x0000FFD0,
};

u32 D_800CFE98[] = {
    0xFFEA8001,
    0x0000FFD1,
};

u32 D_800CFEA0[] = {
    0xFFEA8002,
    0x0000FFD8,
};

u32 D_800CFEA8[] = {
    0xFFEA8003,
    0x0000FFD7,
};

u32 D_800CFEB0[] = {
    0xFFEA8004,
    0x0000FFE2,
};

u32 D_800CFEB8[] = {
    0xFFEA8004,
    0x0000FFE1,
};

u32 D_800CFEC0[] = {
    0xFFEA8005,
    0x0000FFE2,
};

u32 D_800CFEC8[] = {
    0xFFEA8003,
    0x0000FFD7,
};

u32 D_800CFED0[] = {
    0xFFEA8002,
    0x0000FFD7,
};

u32 D_800CFED8[] = {
    0xFFEA8001,
    0x0000FFCF,
};

u32 D_800CFEE0[] = {
    0xFFEA8000,
    0x0000FFCD,
};

u32 D_800CFEE8[] = {
    0xFFEA8001,
    0x0000FFCD,
};

u32 D_800CFEF0[] = {
    0xFFEA8002,
    0x0000FFD6,
};

u32 D_800CFEF8[] = {
    0xFFEA8003,
    0x0000FFD7,
};

u32 D_800CFF00[] = {
    0xFFEA8004,
    0x0000FFE3,
};

u32 D_800CFF08[] = {
    0xFFEA8005,
    0x0000FFE3,
};

s16 D_800D0020[];
s16 D_800D003C[];
s16 D_800D0058[];
s16 D_800D0074[];
s16 D_800D0090[];
s16 D_800D00AC[];
s16 D_800D00C8[];
s16 D_800D00E4[];
s16 D_800D0100[];
s16 D_800D011C[];
s16 D_800D014C[];
s16 D_800D0168[];
s16 D_800D0184[];
s16 D_800D01A0[];
s16 D_800D01BC[];
s16 D_800D01D8[];
s16 D_800D01F4[];
s16 D_800D0210[];
s16 D_800D022C[];
s16 D_800D0248[];
s16 D_800D0264[];
s16 D_800D0280[];
s16 D_800D029C[];
s16 D_800D02CC[];
s16 D_800D02FC[];
s16 D_800D0344[];
s16 D_800D038C[];
s16 D_800D03E8[];
s16 D_800D0444[];
s16 D_800D04A0[];
s16 D_800D04FC[];
s16 D_800D0558[];
s16 D_800D05B4[];
s16 D_800D0610[];
s16 D_800D066C[];
s16 D_800D06C8[];
s16 D_800D0724[];
s16 D_800D076C[];
s16 D_800D07B4[];
s16 D_800D07E4[];
s16 D_800D0814[];
s16 D_800D0830[];
s16 D_800D084C[];
s16 D_800D0868[];
s16 D_800D0898[];
s16 D_800D08C8[];
s16 D_800D08F8[];
s16 D_800D0940[];
s16 D_800D099C[];
s16 D_800D09F8[];
s16 D_800D0A54[];
s16 D_800D0AB0[];
s16 D_800D0B24[];
s16 D_800D0B98[];
s16 D_800D0C0C[];
s16 D_800D0C68[];
s16 D_800D0CDC[];
s16 D_800D0D38[];
s16 D_800D0D94[];
s16 D_800D0DDC[];
s16 D_800D0E24[];
s16 D_800D0E6C[];
s16 D_800D0EB4[];
s16 D_800D0EE4[];
s16 D_800D0F14[];
s16 D_800D0F30[];
s16 D_800D0F4C[];

s16* D_800CFF10[] = {
    NULL,       D_800D0020, D_800D003C, D_800D0058, D_800D0074, D_800D0090,
    D_800D00AC, D_800D00C8, D_800D00E4, D_800D0100, D_800D011C, D_800D014C,
    D_800D0168, D_800D0184, D_800D01A0, D_800D01BC, D_800D01D8, D_800D01F4,
    D_800D0210, D_800D022C, D_800D0248, D_800D0264, D_800D0280, D_800D029C,
    D_800D02CC, D_800D02FC, D_800D0344, D_800D038C, D_800D03E8, D_800D0444,
    D_800D04A0, D_800D04FC, D_800D0558, D_800D05B4, D_800D0610, D_800D066C,
    D_800D06C8, D_800D0724, D_800D076C, D_800D07B4, D_800D07E4, D_800D0814,
    D_800D0830, D_800D084C, D_800D0868, D_800D0898, D_800D08C8, D_800D08F8,
    D_800D0940, D_800D099C, D_800D09F8, D_800D0A54, D_800D0AB0, D_800D0B24,
    D_800D0B98, D_800D0C0C, D_800D0C68, D_800D0CDC, D_800D0D38, D_800D0D94,
    D_800D0DDC, D_800D0E24, D_800D0E6C, D_800D0EB4, D_800D0EE4, D_800D0F14,
    D_800D0F30, D_800D0F4C,
};

s16 D_800D0020[] = {
    1, 0, -8, -10, 16, 16, 368, 104, 64, 32, 80, 48, 0, 0,
};
s16 D_800D003C[] = {
    1, 2, -8, -10, 16, 16, 368, 104, 64, 32, 80, 48, 0, 0,
};
s16 D_800D0058[] = {
    1, 0, -8, -10, 16, 16, 368, 104, 80, 32, 96, 48, 0, 0,
};
s16 D_800D0074[] = {
    1, 2, -8, -10, 16, 16, 368, 104, 80, 32, 96, 48, 0, 0,
};
s16 D_800D0090[] = {
    1, 0, -8, -10, 16, 16, 368, 104, 96, 32, 112, 48, 0, 0,
};
s16 D_800D00AC[] = {
    1, 2, -8, -10, 16, 16, 368, 104, 96, 32, 112, 48, 0, 0,
};
s16 D_800D00C8[] = {
    1, 0, -8, -10, 16, 16, 368, 104, 112, 32, 128, 48, 0, 0,
};
s16 D_800D00E4[] = {
    1, 2, -8, -10, 16, 16, 368, 104, 112, 32, 128, 48, 0, 0,
};
s16 D_800D0100[] = {
    1, 48, -16, -15, 32, 32, 368, 104, 0, 0, 32, 32, 0, 0,
};
s16 D_800D011C[] = {
    2, 32, -16, -15, 32, 32,  368, 104, 32, 0,  64, 32,
    0, -8, -7,  16,  16, 368, 104, 64,  48, 80, 64, 0,
};
s16 D_800D014C[] = {
    1, 34, -16, -15, 32, 32, 368, 104, 32, 0, 64, 32, 0, 0,
};
s16 D_800D0168[] = {
    1, 32, -16, -15, 32, 32, 368, 104, 64, 0, 96, 32, 0, 0,
};
s16 D_800D0184[] = {
    1, 34, -16, -15, 32, 32, 368, 104, 64, 0, 96, 32, 0, 0,
};
s16 D_800D01A0[] = {
    1, 32, -16, -15, 32, 32, 368, 104, 96, 0, 128, 32, 0, 0,
};
s16 D_800D01BC[] = {
    1, 34, -16, -15, 32, 32, 368, 104, 96, 0, 128, 32, 0, 0,
};
s16 D_800D01D8[] = {
    1, 16, -16, -15, 32, 32, 368, 104, 0, 32, 32, 64, 0, 0,
};
s16 D_800D01F4[] = {
    1, 18, -16, -15, 32, 32, 368, 104, 0, 32, 32, 64, 0, 0,
};
s16 D_800D0210[] = {
    1, 0, -16, -12, 32, 16, 368, 104, 32, 32, 64, 48, 0, 0,
};
s16 D_800D022C[] = {
    1, 2, -16, -12, 32, 16, 368, 104, 32, 32, 64, 48, 0, 0,
};
s16 D_800D0248[] = {
    1, 0, -16, -15, 32, 16, 368, 104, 32, 48, 64, 64, 0, 0,
};
s16 D_800D0264[] = {
    1, 0, -8, -8, 16, 16, 368, 104, 64, 32, 80, 48, 0, 0,
};
s16 D_800D0280[] = {
    1, 2, -8, -8, 16, 16, 368, 104, 64, 32, 80, 48, 0, 0,
};
s16 D_800D029C[] = {
    2, 0,  -2, 1,  16, 16,  368, 104, 64, 32, 80, 48,
    0, -8, -8, 16, 16, 368, 104, 80,  32, 96, 48, 0,
};
s16 D_800D02CC[] = {
    2, 2,  -2, 1,  16, 16,  368, 104, 64, 32, 80, 48,
    2, -8, -8, 16, 16, 368, 104, 80,  32, 96, 48, 0,
};
s16 D_800D02FC[] = {
    3,  0,  -10, 8,  16,  16,  368, 104, 64,  32, 80, 48,
    0,  -2, 1,   16, 16,  368, 104, 80,  32,  96, 48, 0,
    -8, -8, 16,  16, 368, 104, 96,  32,  112, 48, 0,  0,
};
s16 D_800D0344[] = {
    3,  2,  -10, 8,  16,  16,  368, 104, 64,  32, 80, 48,
    2,  -2, 1,   16, 16,  368, 104, 80,  32,  96, 48, 2,
    -8, -8, 16,  16, 368, 104, 96,  32,  112, 48, 0,  0,
};
s16 D_800D038C[] = {
    4,   0,   0,   24, 16, 16, 368, 104, 64,  32,  80, 48,  0,   -10, 8,  16,
    16,  368, 104, 80, 32, 96, 48,  0,   -2,  1,   16, 16,  368, 104, 96, 32,
    112, 48,  0,   -8, -8, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D03E8[] = {
    4,   2,   0,   24, 16, 16, 368, 104, 64,  32,  80, 48,  2,   -10, 8,  16,
    16,  368, 104, 80, 32, 96, 48,  2,   -2,  1,   16, 16,  368, 104, 96, 32,
    112, 48,  2,   -8, -8, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0444[] = {
    4,   0,   -8,  24, 16, 16, 368, 104, 64,  32,  80, 48,  0,   0,   24, 16,
    16,  368, 104, 80, 32, 96, 48,  0,   -10, 8,   16, 16,  368, 104, 96, 32,
    112, 48,  0,   -2, 1,  16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D04A0[] = {
    4,   2,   -8,  24, 16, 16, 368, 104, 64,  32,  80, 48,  2,   0,   24, 16,
    16,  368, 104, 80, 32, 96, 48,  2,   -10, 8,   16, 16,  368, 104, 96, 32,
    112, 48,  2,   -2, 1,  16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D04FC[] = {
    4,   0,   -16, 32,  16, 16, 368, 104, 64,  32,  80, 48,  0,   -8,  24, 16,
    16,  368, 104, 80,  32, 96, 48,  0,   0,   24,  16, 16,  368, 104, 96, 32,
    112, 48,  0,   -10, 8,  16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0558[] = {
    4,   2,   -16, 32,  16, 16, 368, 104, 64,  32,  80, 48,  2,   -8,  24, 16,
    16,  368, 104, 80,  32, 96, 48,  2,   0,   24,  16, 16,  368, 104, 96, 32,
    112, 48,  2,   -10, 8,  16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D05B4[] = {
    4,   0,   -3,  37, 16, 16, 368, 104, 64,  32,  80, 48,  0,   -16, 32, 16,
    16,  368, 104, 80, 32, 96, 48,  0,   -8,  24,  16, 16,  368, 104, 96, 32,
    112, 48,  0,   0,  24, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0610[] = {
    4,   2,   -3,  37, 16, 16, 368, 104, 64,  32,  80, 48,  2,   -16, 32, 16,
    16,  368, 104, 80, 32, 96, 48,  2,   -8,  24,  16, 16,  368, 104, 96, 32,
    112, 48,  2,   0,  24, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D066C[] = {
    4,   0,   -12, 43, 16, 16, 368, 104, 64,  32,  80, 48,  0,   -3,  37, 16,
    16,  368, 104, 80, 32, 96, 48,  0,   -16, 32,  16, 16,  368, 104, 96, 32,
    112, 48,  0,   -8, 24, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D06C8[] = {
    4,   2,   -12, 43, 16, 16, 368, 104, 64,  32,  80, 48,  2,   -3,  37, 16,
    16,  368, 104, 80, 32, 96, 48,  2,   -16, 32,  16, 16,  368, 104, 96, 32,
    112, 48,  2,   -8, 24, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0724[] = {
    3,   0,  -12, 43, 16,  16,  368, 104, 80,  32,  96, 48,
    0,   -3, 37,  16, 16,  368, 104, 96,  32,  112, 48, 0,
    -16, 32, 16,  16, 368, 104, 112, 32,  128, 48,  0,  0,
};
s16 D_800D076C[] = {
    3,   2,  -12, 43, 16,  16,  368, 104, 80,  32,  96, 48,
    2,   -3, 37,  16, 16,  368, 104, 96,  32,  112, 48, 2,
    -16, 32, 16,  16, 368, 104, 112, 32,  128, 48,  0,  0,
};
s16 D_800D07B4[] = {
    2, 0,  -12, 43, 16, 16,  368, 104, 96, 32,  112, 48,
    0, -3, 37,  16, 16, 368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D07E4[] = {
    2, 2,  -12, 43, 16, 16,  368, 104, 96, 32,  112, 48,
    2, -3, 37,  16, 16, 368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0814[] = {
    1, 0, -12, 43, 16, 16, 368, 104, 112, 32, 128, 48, 0, 0,
};
s16 D_800D0830[] = {
    1, 2, -12, 43, 16, 16, 368, 104, 112, 32, 128, 48, 0, 0,
};
s16 D_800D084C[] = {
    1, 48, -14, -17, 32, 32, 368, 104, 0, 0, 32, 32, 0, 0,
};
s16 D_800D0868[] = {
    2, 32, -14, -17, 32, 32,  368, 104, 32, 0,  64, 32,
    0, -6, -9,  16,  16, 368, 104, 64,  48, 80, 64, 0,
};
s16 D_800D0898[] = {
    2,  0,   -19, 2,  16, 16,  368, 104, 64, 32, 80, 48,
    34, -14, -17, 32, 32, 368, 104, 32,  0,  64, 32, 0,
};
s16 D_800D08C8[] = {
    2,  2,   -19, 2,  16, 16,  368, 104, 64, 32, 80, 48,
    32, -14, -17, 32, 32, 368, 104, 64,  0,  96, 32, 0,
};
s16 D_800D08F8[] = {
    3,   48,  -6, -1, 32,  32,  368, 104, 0,  0,  32, 32,
    0,   -19, 2,  16, 16,  368, 104, 80,  32, 96, 48, 34,
    -14, -17, 32, 32, 368, 104, 64,  0,   96, 32, 0,  0,
};
s16 D_800D0940[] = {
    4,  32,  -6,  -1,  32,  32, 368, 104, 32,  0,  64, 32,  0,   2,   7,  16,
    16, 368, 104, 64,  48,  80, 64,  2,   -19, 2,  16, 16,  368, 104, 80, 32,
    96, 48,  32,  -14, -17, 32, 32,  368, 104, 96, 0,  128, 32,  0,
};
s16 D_800D099C[] = {
    4,   0,   10,  -9,  16,  16, 368, 104, 64,  32, 80, 48,  34,  -6,  -1, 32,
    32,  368, 104, 32,  0,   64, 32,  0,   -19, 2,  16, 16,  368, 104, 96, 32,
    112, 48,  34,  -14, -17, 32, 32,  368, 104, 96, 0,  128, 32,  0,
};
s16 D_800D09F8[] = {
    4,   2,   10,  -9,  16,  16, 368, 104, 64,  32, 80, 48, 32,  -7,  -1, 32,
    32,  368, 104, 64,  0,   96, 32,  2,   -19, 2,  16, 16, 368, 104, 96, 32,
    112, 48,  16,  -14, -17, 32, 32,  368, 104, 0,  32, 32, 64,  0,
};
s16 D_800D0A54[] = {
    4,  48,  -22, 7,   32,  32, 368, 104, 0,   0,  32, 32, 0,   10,  -9, 16,
    16, 368, 104, 80,  32,  96, 48,  34,  -7,  -1, 32, 32, 368, 104, 64, 0,
    96, 32,  18,  -14, -18, 32, 32,  368, 104, 0,  32, 32, 64,  0,
};
s16 D_800D0AB0[] = {
    5,  32,  -20, 7,   32, 32,  368, 104, 32, 0,   64,  32, 0,  -14, 15,
    16, 16,  368, 104, 64, 48,  80,  64,  2,  10,  -9,  16, 16, 368, 104,
    80, 32,  96,  48,  32, -8,  -1,  32,  32, 368, 104, 96, 0,  128, 32,
    0,  -14, -15, 32,  16, 368, 104, 32,  32, 64,  48,  0,  0,
};
s16 D_800D0B24[] = {
    5,  0,   -3,  27,  16, 16,  368, 104, 64, 32,  80,  48, 34, -21, 7,
    32, 32,  368, 104, 32, 0,   64,  32,  0,  10,  -9,  16, 16, 368, 104,
    96, 32,  112, 48,  34, -7,  -1,  32,  32, 368, 104, 96, 0,  128, 32,
    2,  -14, -16, 32,  16, 368, 104, 32,  32, 64,  48,  0,  0,
};
s16 D_800D0B98[] = {
    5,  2,   -3,  27,  16, 16,  368, 104, 64, 32,  80,  48, 32, -22, 7,
    32, 32,  368, 104, 64, 0,   96,  32,  2,  10,  -9,  16, 16, 368, 104,
    96, 32,  112, 48,  16, -6,  -1,  32,  32, 368, 104, 0,  32, 32,  64,
    0,  -14, -17, 32,  16, 368, 104, 32,  48, 64,  64,  0,  0,
};
s16 D_800D0C0C[] = {
    4,  48,  -14, 15, 32,  32, 368, 104, 0,   0,   32, 32,  34,  -22, 7, 32,
    32, 368, 104, 64, 0,   96, 32,  18,  -6,  -2,  32, 32,  368, 104, 0, 32,
    32, 64,  0,   10, -10, 16, 16,  368, 104, 112, 32, 128, 48,  0,
};
s16 D_800D0C68[] = {
    5,  32, -14, 15,  32, 32,  368, 104, 32, 0,   64,  32,  0,  -6,  23,
    16, 16, 368, 104, 64, 48,  80,  64,  32, -23, 7,   32,  32, 368, 104,
    96, 0,  128, 32,  2,  10,  -11, 16,  16, 368, 104, 112, 32, 128, 48,
    0,  -6, 1,   32,  16, 368, 104, 32,  32, 64,  48,  0,   0,
};
s16 D_800D0CDC[] = {
    4,   0,   -15, 37, 16, 16, 368, 104, 64,  32, 80, 48, 34,  -14, 15, 32,
    32,  368, 104, 32, 0,  64, 32,  34,  -22, 7,  32, 32, 368, 104, 96, 0,
    128, 32,  2,   -6, 0,  32, 16,  368, 104, 32, 32, 64, 48,  0,
};
s16 D_800D0D38[] = {
    4,  2,   -15, 37, 16, 16, 368, 104, 64,  32, 80, 48, 32,  -14, 15, 32,
    32, 368, 104, 64, 0,  96, 32,  16,  -22, 7,  32, 32, 368, 104, 0,  32,
    32, 64,  0,   -6, -1, 32, 16,  368, 104, 32, 48, 64, 64,  0,
};
s16 D_800D0D94[] = {
    3,   0,   -15, 37, 16,  16,  368, 104, 80, 32, 96, 48,
    34,  -14, 15,  32, 32,  368, 104, 64,  0,  96, 32, 18,
    -22, 6,   32,  32, 368, 104, 0,   32,  32, 64, 0,  0,
};
s16 D_800D0DDC[] = {
    3,   2,   -15, 37, 16,  16,  368, 104, 80, 32,  96, 48,
    32,  -14, 14,  32, 32,  368, 104, 96,  0,  128, 32, 0,
    -22, 9,   32,  16, 368, 104, 32,  32,  64, 48,  0,  0,
};
s16 D_800D0E24[] = {
    3,   0,   -15, 37, 16,  16,  368, 104, 96, 32,  112, 48,
    34,  -14, 15,  32, 32,  368, 104, 96,  0,  128, 32,  2,
    -22, 8,   32,  16, 368, 104, 32,  32,  64, 48,  0,   0,
};
s16 D_800D0E6C[] = {
    3,   2,   -15, 37, 16,  16,  368, 104, 96, 32, 112, 48,
    16,  -14, 15,  32, 32,  368, 104, 0,   32, 32, 64,  0,
    -22, 7,   32,  16, 368, 104, 32,  48,  64, 64, 0,   0,
};
s16 D_800D0EB4[] = {
    2,  0,   -15, 36, 16, 16,  368, 104, 112, 32, 128, 48,
    18, -14, 14,  32, 32, 368, 104, 0,   32,  32, 64,  0,
};
s16 D_800D0EE4[] = {
    2, 0,   -14, 17, 32, 16,  368, 104, 32, 32,  64, 48,
    2, -15, 35,  16, 16, 368, 104, 112, 32, 128, 48, 0,
};
s16 D_800D0F14[] = {
    1, 2, -14, 16, 32, 16, 368, 104, 32, 32, 64, 48, 0, 0,
};
s16 D_800D0F30[] = {
    1, 0, -14, 15, 32, 16, 368, 104, 32, 48, 64, 64, 0, 0,
};

s16 D_800D0F4C[] = {
    1,      36, -63, -63, 128, 128, 416, 104, 128, 0, 256, 128, 0,
#ifdef VERSION_US // dirty data
    0x5F65,
#endif
};

s16 D_800D11EC[];
s16 D_800D1208[];
s16 D_800D1224[];
s16 D_800D1240[];
s16 D_800D125C[];
s16 D_800D1278[];
s16 D_800D1294[];
s16 D_800D12B0[];
s16 D_800D12CC[];
s16 D_800D12E8[];
s16 D_800D1304[];
s16 D_800D1320[];
s16 D_800D133C[];
s16 D_800D1358[];
s16 D_800D1374[];
s16 D_800D1390[];
s16 D_800D13AC[];
s16 D_800D13C8[];
s16 D_800D13E4[];
s16 D_800D1400[];
s16 D_800D141C[];
s16 D_800D1438[];
s16 D_800D1454[];
s16 D_800D1470[];
s16 D_800D148C[];
s16 D_800D14A8[];
s16 D_800D14C4[];
s16 D_800D14E0[];
s16 D_800D14FC[];
s16 D_800D1518[];
s16 D_800D1534[];
s16 D_800D1550[];
s16 D_800D156C[];
s16 D_800D1588[];
s16 D_800D15A4[];
s16 D_800D15C0[];
s16 D_800D15DC[];
s16 D_800D15F8[];
s16 D_800D1614[];
s16 D_800D1630[];
s16 D_800D164C[];
s16 D_800D1668[];
s16 D_800D16B0[];
s16 D_800D16F8[];
s16 D_800D1740[];
s16 D_800D1788[];
s16 D_800D17D0[];
s16 D_800D1818[];
s16 D_800D1860[];
s16 D_800D18A8[];
s16 D_800D18D8[];
s16 D_800D1908[];
s16 D_800D1938[];
s16 D_800D1968[];
s16 D_800D1998[];
s16 D_800D19C8[];
s16 D_800D19F8[];
s16 D_800D1A28[];
s16 D_800D1A58[];
s16 D_800D1A88[];
s16 D_800D1AB8[];
s16 D_800D1AE8[];
s16 D_800D1B18[];
s16 D_800D1B48[];
s16 D_800D1B78[];
s16 D_800D1BA8[];
s16 D_800D1BD8[];
s16 D_800D1C08[];
s16 D_800D1C38[];
s16 D_800D1C68[];
s16 D_800D1C98[];
s16 D_800D1CC8[];
s16 D_800D1CF8[];
s16 D_800D1D28[];
s16 D_800D1D58[];
s16 D_800D1D88[];
s16 D_800D1DB8[];
s16 D_800D1DE8[];
s16 D_800D1E18[];
s16 D_800D1E48[];
s16 D_800D1E78[];
s16 D_800D1EA8[];
s16 D_800D1ED8[];
s16 D_800D1F08[];
s16 D_800D1F38[];
s16 D_800D1F68[];
s16 D_800D1F98[];
s16 D_800D1FC8[];
s16 D_800D1FF8[];
s16 D_800D2028[];
s16 D_800D2070[];
s16 D_800D20B8[];
s16 D_800D2100[];
s16 D_800D2148[];
s16 D_800D2190[];
s16 D_800D21D8[];
s16 D_800D2220[];
s16 D_800D2268[];
s16 D_800D2298[];
s16 D_800D22C8[];
s16 D_800D22F8[];
s16 D_800D2328[];
s16 D_800D2358[];
s16 D_800D2388[];
s16 D_800D23B8[];
s16 D_800D23E8[];
s16 D_800D2418[];
s16 D_800D2448[];
s16 D_800D2478[];
s16 D_800D24A8[];
s16 D_800D24D8[];
s16 D_800D2508[];
s16 D_800D2538[];
s16 D_800D2568[];
s16 D_800D2584[];
s16 D_800D25A0[];
s16 D_800D25BC[];
s16 D_800D25D8[];
s16 D_800D25F4[];
s16 D_800D2610[];
s16 D_800D262C[];
s16 D_800D2648[];
s16 D_800D2664[];
s16 D_800D2680[];
s16 D_800D26B0[];
s16 D_800D26E0[];
s16 D_800D2710[];
s16 D_800D2740[];
s16 D_800D2770[];
s16 D_800D27A0[];
s16 D_800D27BC[];
s16 D_800D27D8[];
s16 D_800D27F4[];
s16 D_800D2810[];
s16 D_800D282C[];
s16 D_800D2848[];
s16 D_800D2864[];
s16 D_800D2880[];
s16 D_800D289C[];
s16 D_800D28B8[];
s16 D_800D28E8[];
s16 D_800D2918[];
s16 D_800D2948[];
s16 D_800D2978[];
s16 D_800D29A8[];
s16 D_800D29D8[];
s16 D_800D29F4[];
s16 D_800D2A10[];
s16 D_800D2A2C[];
s16 D_800D2A48[];
s16 D_800D2A64[];
s16 D_800D2A80[];
s16 D_800D2A9C[];
s16 D_800D2AB8[];
s16 D_800D2AD4[];
s16 D_800D2B04[];
s16 D_800D2B34[];
s16 D_800D2B64[];
s16 D_800D2B94[];
s16 D_800D2BC4[];

s16* D_800D0F68[] = {
    NULL,       D_800D11EC, D_800D1208, D_800D1224, D_800D1240, D_800D125C,
    D_800D1278, D_800D1294, D_800D12B0, D_800D12CC, D_800D12E8, D_800D1304,
    D_800D1320, D_800D133C, D_800D1358, D_800D1374, D_800D1390, D_800D13AC,
    D_800D13C8, D_800D13E4, D_800D1400, D_800D141C, D_800D1438, D_800D1454,
    D_800D1470, D_800D148C, D_800D14A8, D_800D14C4, D_800D14E0, D_800D14FC,
    D_800D1518, D_800D1534, D_800D1550, D_800D156C, D_800D1588, D_800D15A4,
    D_800D15C0, D_800D15DC, D_800D15F8, D_800D1614, D_800D1630, D_800D164C,
    D_800D1668, D_800D16B0, D_800D16F8, D_800D1740, D_800D1788, D_800D17D0,
    D_800D1818, D_800D1860, D_800D18A8, D_800D18D8, D_800D1908, D_800D1938,
    D_800D1968, D_800D1998, D_800D19C8, D_800D19F8, D_800D1A28, D_800D1A58,
    D_800D1A88, D_800D1AB8, D_800D1AE8, D_800D1B18, D_800D1B48, D_800D1B78,
    D_800D1BA8, D_800D1BD8, D_800D1C08, D_800D1C38, D_800D1C68, D_800D1C98,
    D_800D1CC8, D_800D1CF8, D_800D1D28, D_800D1D58, D_800D1D88, D_800D1DB8,
    D_800D1DE8, D_800D1E18, D_800D1E48, D_800D1E78, D_800D1EA8, D_800D1ED8,
    D_800D1F08, D_800D1F38, D_800D1F68, D_800D1F98, D_800D1FC8, D_800D1FF8,
    D_800D2028, D_800D2070, D_800D20B8, D_800D2100, D_800D2148, D_800D2190,
    D_800D21D8, D_800D2220, D_800D2268, D_800D2298, D_800D22C8, D_800D22F8,
    D_800D2328, D_800D2358, D_800D2388, D_800D23B8, D_800D23E8, D_800D2418,
    D_800D2448, D_800D2478, D_800D24A8, D_800D24D8, D_800D2508, D_800D2538,
    D_800D2568, D_800D2584, D_800D25A0, D_800D25BC, D_800D25D8, D_800D25F4,
    D_800D2610, D_800D262C, D_800D2648, D_800D2664, D_800D2680, D_800D26B0,
    D_800D26E0, D_800D2710, D_800D2740, D_800D2770, D_800D27A0, D_800D27BC,
    D_800D27D8, D_800D27F4, D_800D2810, D_800D282C, D_800D2848, D_800D2864,
    D_800D2880, D_800D289C, D_800D28B8, D_800D28E8, D_800D2918, D_800D2948,
    D_800D2978, D_800D29A8, D_800D29D8, D_800D29F4, D_800D2A10, D_800D2A2C,
    D_800D2A48, D_800D2A64, D_800D2A80, D_800D2A9C, D_800D2AB8, D_800D2AD4,
    D_800D2B04, D_800D2B34, D_800D2B64, D_800D2B94, D_800D2BC4,
};

s16 D_800D11EC[] = {1, 0, -11, -15, 24, 24, 400, 120, 128, 128, 152, 152, 0, 0};

s16 D_800D1208[] = {1, 2, -12, -15, 24, 24, 400, 120, 128, 128, 152, 152, 0, 0};

s16 D_800D1224[] = {1, 0, -7, -8, 16, 16, 401, 120, 176, 128, 192, 144, 0, 0};

s16 D_800D1240[] = {1, 0, -7, -8, 16, 16, 401, 120, 192, 128, 208, 144, 0, 0};

s16 D_800D125C[] = {1, 0, -7, -8, 16, 16, 401, 120, 208, 128, 224, 144, 0, 0};

s16 D_800D1278[] = {1, 0, -7, -8, 16, 16, 401, 120, 176, 144, 192, 160, 0, 0};

s16 D_800D1294[] = {1, 0, -7, -8, 16, 16, 401, 120, 192, 144, 208, 160, 0, 0};

s16 D_800D12B0[] = {1, 0, -6, -8, 16, 16, 401, 120, 208, 144, 224, 160, 0, 0};

s16 D_800D12CC[] = {1, 2, -6, -8, 16, 16, 401, 120, 192, 144, 208, 160, 0, 0};

s16 D_800D12E8[] = {1, 2, -6, -8, 16, 16, 401, 120, 176, 144, 192, 160, 0, 0};

s16 D_800D1304[] = {1, 2, -6, -8, 16, 16, 401, 120, 208, 128, 224, 144, 0, 0};

s16 D_800D1320[] = {1, 2, -6, -8, 16, 16, 401, 120, 192, 128, 208, 144, 0, 0};

s16 D_800D133C[] = {1, 2, -7, -8, 16, 16, 402, 120, 176, 128, 192, 144, 0, 0};

s16 D_800D1358[] = {1, 2, -7, -8, 16, 16, 401, 120, 224, 128, 240, 144, 0, 0};

s16 D_800D1374[] = {1, 0, -7, -8, 16, 16, 401, 120, 128, 176, 144, 192, 0, 0};

s16 D_800D1390[] = {1, 0, -7, -8, 16, 16, 401, 120, 144, 176, 160, 192, 0, 0};

s16 D_800D13AC[] = {1, 0, -7, -8, 16, 16, 401, 120, 160, 176, 176, 192, 0, 0};

s16 D_800D13C8[] = {1, 0, -7, -8, 16, 16, 401, 120, 176, 176, 192, 192, 0, 0};

s16 D_800D13E4[] = {1, 0, -11, -16, 24, 24, 403, 120, 152, 128, 176, 152, 0, 0};

s16 D_800D1400[] = {1, 0, -3, 0, 8, 8, 403, 120, 208, 160, 216, 168, 0, 0};

s16 D_800D141C[] = {1, 0, -3, 0, 8, 8, 403, 120, 208, 168, 216, 176, 0, 0};

s16 D_800D1438[] = {1, 0, -2, 0, 8, 8, 403, 120, 216, 160, 224, 168, 0, 0};

s16 D_800D1454[] = {1, 0, -2, 0, 8, 8, 403, 120, 216, 168, 224, 176, 0, 0};

s16 D_800D1470[] = {1, 1, -3, 0, 8, 8, 403, 120, 216, 168, 224, 176, 0, 0};

s16 D_800D148C[] = {1, 2, -4, 0, 8, 8, 403, 120, 216, 160, 224, 168, 0, 0};

s16 D_800D14A8[] = {1, 0, -8, -8, 16, 16, 385, 120, 192, 160, 208, 176, 0, 0};

s16 D_800D14C4[] = {1, 0, -8, -8, 16, 16, 386, 120, 192, 160, 208, 176, 0, 0};

s16 D_800D14E0[] = {1, 0, -8, -8, 16, 16, 387, 120, 192, 160, 208, 176, 0, 0};

s16 D_800D14FC[] = {1, 0, -7, -8, 16, 16, 388, 120, 176, 160, 192, 176, 0, 0};

s16 D_800D1518[] = {1, 0, -7, -8, 16, 16, 390, 120, 176, 160, 192, 176, 0, 0};

s16 D_800D1534[] = {1, 0, -7, -8, 16, 16, 391, 120, 176, 160, 192, 176, 0, 0};

s16 D_800D1550[] = {1, 0, -13, -16, 24, 24, 384, 120, 152, 152, 176, 176, 0, 0};

s16 D_800D156C[] = {1, 0, -13, -16, 24, 24, 392, 120, 152, 152, 176, 176, 0, 0};

s16 D_800D1588[] = {1, 0, -10, -16, 24, 24, 385, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D15A4[] = {1, 0, -10, -16, 24, 24, 386, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D15C0[] = {1, 0, -10, -16, 24, 24, 387, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D15DC[] = {1, 0, -10, -16, 24, 24, 384, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D15F8[] = {1, 0, -10, -16, 24, 24, 388, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D1614[] = {1, 0, -10, -16, 24, 24, 389, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D1630[] = {1, 0, -10, -16, 24, 24, 390, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D164C[] = {1, 0, -10, -16, 24, 24, 391, 120, 128, 152, 152, 176, 0, 0};

s16 D_800D1668[] = {3,  0,   -9,  -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -13, 16, 16,  382, 120, 160, 240, 176, 256, 0,
                    -9, -13, 16,  8,  382, 120, 128, 240, 144, 248, 0,   0};

s16 D_800D16B0[] = {3,  0,   -9,  -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -13, 16, 16,  382, 120, 176, 240, 192, 256, 8,
                    -9, -13, 16,  8,  382, 120, 128, 248, 144, 256, 0,   0};

s16 D_800D16F8[] = {3,  0,   -9,  -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -13, 16, 16,  382, 120, 192, 240, 208, 256, 0,
                    -9, -13, 16,  8,  382, 120, 144, 240, 160, 248, 0,   0};

s16 D_800D1740[] = {3,  0,   -9,  -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -13, 16, 16,  382, 120, 208, 240, 224, 256, 8,
                    -9, -13, 16,  8,  382, 120, 144, 248, 160, 256, 0,   0};

s16 D_800D1788[] = {3,  0,   -9, -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    0,  -1,  -5, 16, 8,   382, 120, 128, 240, 144, 248, 8,
                    -9, -21, 16, 16, 382, 120, 160, 240, 176, 256, 0,   0};

s16 D_800D17D0[] = {3,  0,   -9, -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -5, 16, 8,   382, 120, 128, 248, 144, 256, 8,
                    -9, -21, 16, 16, 382, 120, 176, 240, 192, 256, 0,   0};

s16 D_800D1818[] = {3,  0,   -9, -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    0,  -1,  -5, 16, 8,   382, 120, 144, 240, 160, 248, 8,
                    -9, -21, 16, 16, 382, 120, 192, 240, 208, 256, 0,   0};

s16 D_800D1860[] = {3,  0,   -9, -8, 24,  16,  382, 120, 168, 224, 192, 240,
                    8,  -1,  -5, 16, 8,   382, 120, 144, 248, 160, 256, 8,
                    -9, -21, 16, 16, 382, 120, 208, 240, 224, 256, 0,   0};

s16 D_800D18A8[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -7, -20, 16,  16, 382, 120, 160, 240, 176, 256, 0};

s16 D_800D18D8[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -7, -20, 16,  16, 382, 120, 176, 240, 192, 256, 0};

s16 D_800D1908[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -7, -20, 16,  16, 382, 120, 192, 240, 208, 256, 0};

s16 D_800D1938[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -8, -20, 16,  16, 382, 120, 208, 240, 224, 256, 0};

s16 D_800D1968[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    0, -8, -12, 16,  8,  382, 120, 128, 240, 144, 248, 0};

s16 D_800D1998[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -8, -12, 16,  8,  382, 120, 128, 248, 144, 256, 0};

s16 D_800D19C8[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    0, -8, -12, 16,  8,  382, 120, 144, 240, 160, 248, 0};

s16 D_800D19F8[] = {2, 0,  -7,  -16, 16, 24,  382, 120, 200, 216, 216, 240,
                    8, -7, -12, 16,  8,  382, 120, 144, 248, 160, 256, 0};

s16 D_800D1A28[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    0, -7, -13, 16,  8,  383, 120, 128, 240, 144, 248, 0};

s16 D_800D1A58[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -13, 16,  8,  383, 120, 128, 248, 144, 256, 0};

s16 D_800D1A88[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    0, -7, -13, 16,  8,  383, 120, 144, 240, 160, 248, 0};

s16 D_800D1AB8[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -13, 16,  8,  383, 120, 144, 248, 160, 256, 0};

s16 D_800D1AE8[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -21, 16,  16, 383, 120, 160, 240, 176, 256, 0};

s16 D_800D1B18[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -21, 16,  16, 383, 120, 176, 240, 192, 256, 0};

s16 D_800D1B48[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -21, 16,  16, 383, 120, 192, 240, 208, 256, 0};

s16 D_800D1B78[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 192, 152, 216,
                    8, -7, -21, 16,  16, 383, 120, 208, 240, 224, 256, 0};

s16 D_800D1BA8[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    0, -8, -8,  16, 8,  383, 120, 128, 240, 144, 248, 0};

s16 D_800D1BD8[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -8,  16, 8,  383, 120, 128, 248, 144, 256, 0};

s16 D_800D1C08[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    0, -8, -8,  16, 8,  383, 120, 144, 240, 160, 248, 0};

s16 D_800D1C38[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -8,  16, 8,  383, 120, 144, 248, 160, 256, 0};

s16 D_800D1C68[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -16, 16, 16, 383, 120, 160, 240, 176, 256, 0};

s16 D_800D1C98[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -16, 16, 16, 383, 120, 176, 240, 192, 256, 0};

s16 D_800D1CC8[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -16, 16, 16, 383, 120, 192, 240, 208, 256, 0};

s16 D_800D1CF8[] = {2, 0,  -11, -8, 24, 16,  383, 120, 168, 192, 192, 208,
                    8, -8, -16, 16, 16, 383, 120, 208, 240, 224, 256, 0};

s16 D_800D1D28[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    0, -7, -10, 16,  8,  383, 120, 128, 240, 144, 248, 0};

s16 D_800D1D58[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -10, 16,  8,  383, 120, 128, 248, 144, 256, 0};

s16 D_800D1D88[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    0, -7, -10, 16,  8,  383, 120, 144, 240, 160, 248, 0};

s16 D_800D1DB8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -10, 16,  8,  383, 120, 144, 248, 160, 256, 0};

s16 D_800D1DE8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -18, 16,  16, 383, 120, 160, 240, 176, 256, 0};

s16 D_800D1E18[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -18, 16,  16, 383, 120, 176, 240, 192, 256, 0};

s16 D_800D1E48[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -18, 16,  16, 383, 120, 192, 240, 208, 256, 0};

s16 D_800D1E78[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 192, 168, 216,
                    8, -7, -18, 16,  16, 383, 120, 208, 240, 224, 256, 0};

s16 D_800D1EA8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    0, -8, -19, 16,  8,  383, 120, 128, 240, 144, 248, 0};

s16 D_800D1ED8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -19, 16,  8,  383, 120, 128, 248, 144, 256, 0};

s16 D_800D1F08[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    0, -8, -19, 16,  8,  383, 120, 144, 240, 160, 248, 0};

s16 D_800D1F38[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -19, 16,  8,  383, 120, 144, 248, 160, 256, 0};

s16 D_800D1F68[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -27, 16,  16, 383, 120, 160, 240, 176, 256, 0};

s16 D_800D1F98[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -27, 16,  16, 383, 120, 176, 240, 192, 256, 0};

s16 D_800D1FC8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -27, 16,  16, 383, 120, 192, 240, 208, 256, 0};

s16 D_800D1FF8[] = {2, 0,  -8,  -16, 16, 24,  383, 120, 152, 216, 168, 240,
                    8, -8, -27, 16,  16, 383, 120, 208, 240, 224, 256, 0};

s16 D_800D2028[] = {3,  0,  -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8, -6, 16, 16,  383, 120, 192, 192, 208, 208, 0,
                    -8, -7, 16, 8,  383, 120, 128, 240, 144, 248, 0,   0};

s16 D_800D2070[] = {3,  0,  -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8, -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -7, 16, 8,  383, 120, 128, 248, 144, 256, 0,   0};

s16 D_800D20B8[] = {3,  0,  -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8, -6, 16, 16,  383, 120, 192, 192, 208, 208, 0,
                    -8, -7, 16, 8,  383, 120, 144, 240, 160, 248, 0,   0};

s16 D_800D2100[] = {3,  0,  -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8, -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -7, 16, 8,  383, 120, 144, 248, 160, 256, 0,   0};

s16 D_800D2148[] = {3,  0,   -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8,  -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -15, 16, 16, 383, 120, 160, 240, 176, 256, 0,   0};

s16 D_800D2190[] = {3,  0,   -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8,  -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -15, 16, 16, 383, 120, 176, 240, 192, 256, 0,   0};

s16 D_800D21D8[] = {3,  0,   -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8,  -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -15, 16, 16, 383, 120, 192, 240, 208, 256, 0,   0};

s16 D_800D2220[] = {3,  0,   -4, -4, 8,   8,   355, 120, 192, 208, 200, 216,
                    0,  -8,  -6, 16, 16,  383, 120, 192, 192, 208, 208, 8,
                    -8, -15, 16, 16, 383, 120, 208, 240, 224, 256, 0,   0};

s16 D_800D2268[] = {2, 0,   -6, -13, 16, 8,   383, 120, 128, 240, 144, 248,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D2298[] = {2, 8,   -6, -13, 16, 8,   383, 120, 128, 248, 144, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D22C8[] = {2, 0,   -6, -13, 16, 8,   383, 120, 144, 240, 160, 248,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D22F8[] = {2, 8,   -6, -13, 16, 8,   383, 120, 144, 248, 160, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D2328[] = {2, 8,   -6, -21, 16, 16,  383, 120, 160, 240, 176, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D2358[] = {2, 8,   -6, -21, 16, 16,  383, 120, 176, 240, 192, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D2388[] = {2, 8,   -6, -21, 16, 16,  383, 120, 192, 240, 208, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D23B8[] = {2, 8,   -6, -21, 16, 16,  383, 120, 208, 240, 224, 256,
                    0, -12, -8, 24,  16, 383, 120, 168, 208, 192, 224, 0};

s16 D_800D23E8[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    0, -8, -15, 16,  8,  383, 120, 128, 240, 144, 248, 0};

s16 D_800D2418[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -15, 16,  8,  383, 120, 128, 248, 144, 256, 0};

s16 D_800D2448[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    0, -8, -15, 16,  8,  383, 120, 144, 240, 160, 248, 0};

s16 D_800D2478[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -15, 16,  8,  383, 120, 144, 248, 160, 256, 0};

s16 D_800D24A8[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -23, 16,  16, 383, 120, 160, 240, 176, 256, 0};

s16 D_800D24D8[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -23, 16,  16, 383, 120, 176, 240, 192, 256, 0};

s16 D_800D2508[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -23, 16,  16, 383, 120, 192, 240, 208, 256, 0};

s16 D_800D2538[] = {2, 0,  -11, -16, 24, 24,  383, 120, 128, 216, 152, 240,
                    8, -8, -23, 16,  16, 383, 120, 208, 240, 224, 256, 0};

s16 D_800D2568[] = {1, 0, -7, -8, 16, 16, 384, 120, 224, 160, 240, 176, 0, 0};

s16 D_800D2584[] = {1, 0, -7, -8, 16, 16, 384, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D25A0[] = {1, 0, -7, -8, 16, 16, 385, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D25BC[] = {1, 0, -7, -8, 16, 16, 386, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D25D8[] = {1, 0, -7, -8, 16, 16, 387, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D25F4[] = {1, 0, -7, -8, 16, 16, 388, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D2610[] = {1, 0, -7, -8, 16, 16, 389, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D262C[] = {1, 0, -7, -8, 16, 16, 390, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D2648[] = {1, 0, -7, -8, 16, 16, 391, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D2664[] = {1, 0, -7, -8, 16, 16, 392, 120, 224, 144, 240, 160, 0, 0};

s16 D_800D2680[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 352, 120, 224, 144, 240, 160, 0};

s16 D_800D26B0[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 353, 120, 224, 144, 240, 160, 0};

s16 D_800D26E0[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 354, 120, 224, 144, 240, 160, 0};

s16 D_800D2710[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 355, 120, 224, 144, 240, 160, 0};

s16 D_800D2740[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 357, 120, 224, 144, 240, 160, 0};

s16 D_800D2770[] = {2, 0,  -7, -8, 16, 16,  384, 120, 224, 160, 240, 176,
                    0, -7, -8, 16, 16, 358, 120, 224, 144, 240, 160, 0};

s16 D_800D27A0[] = {1, 4, -7, -8, 16, 16, 384, 120, 240, 160, 256, 176, 0, 0};

s16 D_800D27BC[] = {1, 4, -7, -8, 16, 16, 384, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D27D8[] = {1, 4, -7, -8, 16, 16, 385, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D27F4[] = {1, 4, -7, -8, 16, 16, 386, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D2810[] = {1, 4, -7, -8, 16, 16, 387, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D282C[] = {1, 4, -7, -8, 16, 16, 388, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D2848[] = {1, 4, -7, -8, 16, 16, 389, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D2864[] = {1, 4, -7, -8, 16, 16, 390, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D2880[] = {1, 4, -7, -8, 16, 16, 391, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D289C[] = {1, 4, -7, -8, 16, 16, 392, 120, 240, 144, 256, 160, 0, 0};

s16 D_800D28B8[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 352, 120, 240, 144, 256, 160, 0};

s16 D_800D28E8[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 353, 120, 240, 144, 256, 160, 0};

s16 D_800D2918[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 354, 120, 240, 144, 256, 160, 0};

s16 D_800D2948[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 355, 120, 240, 144, 256, 160, 0};

s16 D_800D2978[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 357, 120, 240, 144, 256, 160, 0};

s16 D_800D29A8[] = {2, 4,  -7, -8, 16, 16,  384, 120, 240, 160, 256, 176,
                    4, -7, -8, 16, 16, 358, 120, 240, 144, 256, 160, 0};

s16 D_800D29D8[] = {1, 4, -8, -8, 16, 16, 384, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D29F4[] = {1, 4, -8, -8, 16, 16, 385, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A10[] = {1, 4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A2C[] = {1, 4, -8, -8, 16, 16, 387, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A48[] = {1, 4, -8, -8, 16, 16, 388, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A64[] = {1, 4, -8, -8, 16, 16, 389, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A80[] = {1, 4, -8, -8, 16, 16, 390, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2A9C[] = {1, 4, -8, -8, 16, 16, 391, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2AB8[] = {1, 4, -8, -8, 16, 16, 392, 120, 240, 128, 256, 144, 0, 0};

s16 D_800D2AD4[] = {2, 0,  -4, -4, 8,  8,   352, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

s16 D_800D2B04[] = {2, 0,  -4, -4, 8,  8,   353, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

s16 D_800D2B34[] = {2, 0,  -4, -4, 8,  8,   354, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

s16 D_800D2B64[] = {2, 0,  -4, -4, 8,  8,   355, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

s16 D_800D2B94[] = {2, 0,  -4, -4, 8,  8,   357, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

s16 D_800D2BC4[] = {2, 0,  -4, -4, 8,  8,   358, 120, 200, 208, 208, 216,
                    4, -8, -8, 16, 16, 386, 120, 240, 128, 256, 144, 0};

u32 D_800D2C18[];
u32 D_800D2C34[];
u32 D_800D2C50[];
u32 D_800D2C6C[];
u32 D_800D2C88[];
u32 D_800D2CA4[];
u32 D_800D2CC0[];
u16 D_800D2CDC[];

s16* D_800D2BF4[] = {
    NULL,
    (s16*)D_800D2C18,
    (s16*)D_800D2C34,
    (s16*)D_800D2C50,
    (s16*)D_800D2C6C,
    (s16*)D_800D2C88,
    (s16*)D_800D2CA4,
    (s16*)D_800D2CC0,
    (s16*)D_800D2CDC,
};

u32 D_800D2C18[] = {
    0x00100001, 0xFFF9FFF9, 0x00100010, 0x00680194,
    0x00400000, 0x00500010, 0x00000000,
};

u32 D_800D2C34[] = {
    0x00000001, 0xFFF9FFF9, 0x00100010, 0x00680194,
    0x00400010, 0x00500020, 0x00000000,
};

u32 D_800D2C50[] = {
    0x00100001, 0xFFF9FFF9, 0x00100010, 0x00680194,
    0x00500000, 0x00600010, 0x00000000,
};

u32 D_800D2C6C[] = {
    0x00000001, 0xFFF9FFF9, 0x00100010, 0x00680194,
    0x00500010, 0x00600020, 0x00000000,
};

u32 D_800D2C88[] = {
    0x00000001, 0xFFF9FFF9, 0x00100008, 0x00680194,
    0x00300068, 0x00400070, 0x00000000,
};

u32 D_800D2CA4[] = {
    0x00000001, 0xFFF9FFF9, 0x00100008, 0x00680194,
    0x00300070, 0x00400078, 0x00000000,
};

u32 D_800D2CC0[] = {
    0x00000001, 0xFFFDFFF9, 0x00080008, 0x00680194,
    0x00300078, 0x00380080, 0x00000000,
};

u16 D_800D2CDC[] = {
    0x0001, 0x0010, 0xFFF1, 0xFFE2, 0x0020, 0x0020, 0x0170,
    0x0068, 0x0000, 0x0060, 0x0020, 0x0080, 0x0000,
#ifdef VERSION_US // dirty data
    0x2030,
#endif
};

s16 D_800D2D5C[];
s16 D_800D2D78[];
s16 D_800D2D94[];
s16 D_800D2DB0[];
s16 D_800D2DCC[];
s16 D_800D2DE8[];
s16 D_800D2E04[];
s16 D_800D2E20[];
s16 D_800D2E3C[];
s16 D_800D2E58[];
s16 D_800D2E74[];
s16 D_800D2E90[];
s16 D_800D2EAC[];
s16 D_800D2EC8[];
s16 D_800D2EE4[];
s16 D_800D2F00[];
s16 D_800D2F1C[];
s16 D_800D2F38[];
s16 D_800D2F54[];
s16 D_800D2F70[];
s16 D_800D2F8C[];
s16 D_800D2FA8[];
s16 D_800D2FC4[];
s16 D_800D2FE0[];

s16* D_800D2CF8[] = {
    NULL,       D_800D2D5C, D_800D2D78, D_800D2D94, D_800D2DB0,
    D_800D2DCC, D_800D2DE8, D_800D2E04, D_800D2E20, D_800D2E3C,
    D_800D2E58, D_800D2E74, D_800D2E90, D_800D2EAC, D_800D2EC8,
    D_800D2EE4, D_800D2F00, D_800D2F1C, D_800D2F38, D_800D2F54,
    D_800D2F70, D_800D2F8C, D_800D2FA8, D_800D2FC4, D_800D2FE0,
};

s16 D_800D2D5C[] = {
    1, 32, -7, -13, 16, 16, 405, 104, 128, 0, 144, 16, 0, 0,
};
s16 D_800D2D78[] = {
    1, 32, -8, -12, 16, 16, 405, 104, 144, 0, 160, 16, 0, 0,
};
s16 D_800D2D94[] = {
    1, 32, -8, -12, 16, 16, 405, 104, 160, 0, 176, 16, 0, 0,
};
s16 D_800D2DB0[] = {
    1, 32, -8, -12, 16, 16, 405, 104, 176, 0, 192, 16, 0, 0,
};
s16 D_800D2DCC[] = {
    1, 0, -9, -14, 24, 24, 405, 104, 128, 16, 152, 40, 0, 0,
};
s16 D_800D2DE8[] = {
    1, 0, -11, -10, 24, 24, 405, 104, 152, 16, 176, 40, 0, 0,
};
s16 D_800D2E04[] = {
    1, 0, -11, -10, 24, 24, 405, 104, 176, 16, 200, 40, 0, 0,
};
s16 D_800D2E20[] = {
    1, 0, -11, -10, 24, 24, 405, 104, 200, 16, 224, 40, 0, 0,
};
s16 D_800D2E3C[] = {
    1, 0, -11, -11, 24, 24, 405, 104, 224, 16, 248, 40, 0, 0,
};
s16 D_800D2E58[] = {
    1, 0, -11, -11, 24, 24, 405, 104, 128, 40, 152, 64, 0, 0,
};
s16 D_800D2E74[] = {
    1, 0, -11, -11, 24, 24, 405, 104, 152, 40, 176, 64, 0, 0,
};
s16 D_800D2E90[] = {
    1, 0, -11, -11, 24, 24, 405, 104, 176, 40, 200, 64, 0, 0,
};
s16 D_800D2EAC[] = {
    1, 0, -11, -10, 24, 24, 405, 104, 200, 40, 224, 64, 0, 0,
};
s16 D_800D2EC8[] = {
    1, 0, -8, -10, 16, 24, 405, 104, 224, 40, 240, 64, 0, 0,
};
s16 D_800D2EE4[] = {
    1, 0, -8, -5, 16, 24, 405, 104, 128, 64, 144, 88, 0, 0,
};
s16 D_800D2F00[] = {
    1, 0, -7, -6, 16, 24, 405, 104, 144, 64, 160, 88, 0, 0,
};
s16 D_800D2F1C[] = {
    1, 0, -9, -4, 16, 24, 405, 104, 160, 64, 176, 88, 0, 0,
};
s16 D_800D2F38[] = {
    1, 0, -8, -4, 16, 24, 405, 104, 176, 64, 192, 88, 0, 0,
};
s16 D_800D2F54[] = {
    1, 0, -9, -4, 16, 24, 405, 104, 192, 64, 208, 88, 0, 0,
};
s16 D_800D2F70[] = {
    1, 0, -8, -4, 16, 24, 405, 104, 208, 64, 224, 88, 0, 0,
};
s16 D_800D2F8C[] = {
    1, 0, -8, 1, 16, 16, 405, 104, 192, 0, 208, 16, 0, 0,
};
s16 D_800D2FA8[] = {
    1, 0, -8, 1, 16, 16, 405, 104, 208, 0, 224, 16, 0, 0,
};
s16 D_800D2FC4[] = {
    1, 0, -7, 2, 16, 8, 405, 104, 224, 0, 240, 8, 0, 0,
};
s16 D_800D2FE0[] = {
    1,      0, -3, 0, 8, 8, 405, 104, 232, 8, 240, 16, 0,
#ifdef VERSION_US // dirty data
    0x6B61,
#endif
};

u32 D_800D300C[];
u32 D_800D3144[];

s16* D_800D2FFC[] = {
    NULL,
    (s16*)D_800D300C,
    (s16*)D_800D3144,
    NULL,
};

u32 D_800D300C[] = {
    0x0006000E, 0x0048FFFF, 0x00100010, 0x007001FA, 0x004000F0, 0x00500100,
    0x000E0002, 0x00100048, 0x01FA0010, 0x00E00070, 0x00F00040, 0x00020050,
    0x001C007C, 0x00080008, 0x007001F9, 0x007000E0, 0x007800E8, 0x00E10004,
    0x00200058, 0x01F90020, 0x00E00070, 0x01000050, 0x00040070, 0x004800E1,
    0x00100020, 0x007001FA, 0x004000E0, 0x00500100, 0x00F10024, 0x00100008,
    0x01FB0040, 0x00F00070, 0x01000000, 0x00200040, 0x000800E1, 0x00400010,
    0x007001FA, 0x000000E0, 0x004000F0, 0x00C40000, 0x0020000D, 0x01F90040,
    0x00C00070, 0x00E00038, 0x00200078, 0x0002007B, 0x00380050, 0x007001F9,
    0x00000090, 0x003800E0, 0x00330022, 0x00500002, 0x01F90038, 0x00900070,
    0x00E00000, 0x00020038, 0x000D001B, 0x00400020, 0x007001F9, 0x003800C0,
    0x007800E0, 0xFFFF0006, 0x00200058, 0x01F90020, 0x00E00070, 0x01000050,
    0x00220070, 0x0008000E, 0x00400010, 0x007001FA, 0x000000E0, 0x004000F0,
    0xFFFF0026, 0x00100008, 0x01FB0040, 0x00F00070, 0x01000000, 0x00000040,
};

u32 D_800D3144[] = {
    0x0007000E, 0x0038FFFF, 0x00100010, 0x007001FA, 0x004000F0, 0x00500100,
    0x000E0003, 0x00100038, 0x01FA0010, 0x00E00070, 0x00F00040, 0x00030050,
    0x006C007C, 0x00080008, 0x007001F9, 0x007000E0, 0x007800E8, 0x00E10005,
    0x00200018, 0x01F90020, 0x00E00070, 0x01000050, 0x00050070, 0x003800E1,
    0x00100020, 0x007001FA, 0x004000E0, 0x00500100, 0x00F10025, 0x00100048,
    0x01FB0040, 0x00F00070, 0x01000000, 0x00210040, 0x004800E1, 0x00400010,
    0x007001FA, 0x000000E0, 0x004000F0, 0x00C40001, 0x00200043, 0x01F90040,
    0x00C00070, 0x00E00038, 0x00210078, 0x0056007B, 0x00380050, 0x007001F9,
    0x00000090, 0x003800E0, 0x00330023, 0x00500056, 0x01F90038, 0x00900070,
    0x00E00000, 0x00030038, 0x0043001B, 0x00400020, 0x007001F9, 0x003800C0,
    0x007800E0, 0xFFFF0007, 0x00200018, 0x01F90020, 0x00E00070, 0x01000050,
    0x00230070, 0x0048000E, 0x00400010, 0x007001FA, 0x000000E0, 0x004000F0,
    0xFFFF0027, 0x00100048, 0x01FB0040, 0x00F00070, 0x01000000, 0x00000040,
};

u32 D_800D3290[];
u32 D_800D32C0[];
u32 D_800D3374[];

s16* D_800D327C[] = {
    NULL, (s16*)D_800D3290, (s16*)D_800D32C0, (s16*)D_800D3374, NULL,
};

u32 D_800D3290[] = {
    0x00220002, 0xFFFEFFFE, 0x00200028, 0x007001F6, 0x000000A0, 0x002000C8,
    0xFFDA0020, 0x0028FFFE, 0x01F60020, 0x00A00070, 0x00C80000, 0x00000020,
};

u32 D_800D32C0[] = {
    0x00220008, 0xFFF0FFE3, 0x00200020, 0x007001A3, 0x00000080, 0x002000A0,
    0xFFFD0020, 0x0020FFF0, 0x01A30020, 0x00800070, 0x00A00000, 0x00020020,
    0xFFF1FFB8, 0x00200048, 0x007001A3, 0x00200080, 0x004000C8, 0xFF7F0002,
    0x0048FFF1, 0x01A30040, 0x00800070, 0x00C80040, 0x00260080, 0x002DFF7F,
    0x00800038, 0x007001A3, 0x000000C8, 0x00800100, 0x00000000, 0x0048FFF1,
    0x01A30020, 0x00800070, 0x00C80020, 0x00000040, 0xFFF10039, 0x00400048,
    0x007001A3, 0x00400080, 0x008000C8, 0x00490024, 0x0038002D, 0x01A30080,
    0x00C80070, 0x01000000, 0x00000080,
};

u32 D_800D3374[] = {
    0x00330008, 0xFFF1FFE3, 0x00200020, 0x007001A3, 0x00000080, 0x002000A0,
    0xFFFD0031, 0x0020FFF1, 0x01A30020, 0x00800070, 0x00A00000, 0x00130020,
    0xFFF0FFB8, 0x00200048, 0x007001A3, 0x00200080, 0x004000C8, 0xFF7F001B,
    0x0048FFD0, 0x01A30040, 0x00800070, 0x00C80040, 0x002F0080, 0xFF54FF7F,
    0x00800038, 0x007001A3, 0x000000C8, 0x00800100, 0x00000011, 0x0048FFF0,
    0x01A30020, 0x00800070, 0x00C80020, 0x00190040, 0xFFD00039, 0x00400048,
    0x007001A3, 0x00400080, 0x008000C8, 0x0049002D, 0x0038FF54, 0x01A30080,
    0x00C80070, 0x01000000, 0x00000080,
};

u32 D_800D3438[];
u32 D_800D3480[];
u16 D_800D349C[];

s16* D_800D3428[] = {
    NULL,
    (s16*)D_800D3438,
    (s16*)D_800D3480,
    (s16*)D_800D349C,
};

u32 D_800D3438[] = {
    0x00230003, 0xFFFBFFF8, 0x00280010, 0x007C016D, 0x000000C0, 0x002800D0,
    0xFFF80020, 0x0010FFDD, 0x016D0028, 0x00C0007C, 0x00D00000, 0x00000028,
    0xFFE0FFFC, 0x00400008, 0x007C0198, 0x002000B0, 0x006000B8, 0x00000000,
};

u32 D_800D3480[] = {
    0x00000001, 0xFFE0FFFC, 0x00400008, 0x007C0198,
    0x002000B0, 0x006000B8, 0x00000000,
};

u16 D_800D349C[] = {
    0x0001, 0x0000, 0xFFF0, 0xFFE0, 0x0020, 0x0040, 0x0198,
    0x007C, 0x0088, 0x0020, 0x00A8, 0x0060, 0x0000,
#ifdef VERSION_US // dirty data
    0x5B6A,
#endif
};

u32 D_800D34D4[];
u32 D_800D3530[];
u32 D_800D358C[];
u32 D_800D35E8[];
u32 D_800D3644[];
u16 D_800D36B8[];

s16* D_800D34B8[] = {
    NULL,
    (s16*)D_800D34D4,
    (s16*)D_800D3530,
    (s16*)D_800D358C,
    (s16*)D_800D35E8,
    (s16*)D_800D3644,
    (s16*)D_800D36B8,
};

u32 D_800D34D4[] = {
    0x00240004, 0xFFF9FFF9, 0x00100010, 0x00680170, 0x000000F0, 0x00100100,
    0xFFF70024, 0x0010FFF9, 0x01700010, 0x00F00068, 0x01000000, 0x00240010,
    0xFFF7FFF9, 0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0xFFF70024,
    0x0010FFF7, 0x01700010, 0x00F00068, 0x01000000, 0x00000010,
};

u32 D_800D3530[] = {
    0x00240004, 0xFFFBFFFB, 0x00100010, 0x00680170, 0x000000F0, 0x00100100,
    0xFFF50024, 0x0010FFFB, 0x01700010, 0x00F00068, 0x01000000, 0x00240010,
    0xFFF6FFFA, 0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0xFFF60024,
    0x0010FFF6, 0x01700010, 0x00F00068, 0x01000000, 0x00000010,
};

u32 D_800D358C[] = {
    0x00240004, 0xFFFDFFFD, 0x00100010, 0x00680170, 0x000000F0, 0x00100100,
    0xFFF30024, 0x0010FFFD, 0x01700010, 0x00F00068, 0x01000000, 0x00240010,
    0xFFF5FFFB, 0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0xFFF50024,
    0x0010FFF5, 0x01700010, 0x00F00068, 0x01000000, 0x00000010,
};

u32 D_800D35E8[] = {
    0x00240004, 0x00000000, 0x00100010, 0x00680170, 0x000000F0, 0x00100100,
    0xFFF00024, 0x00100000, 0x01700010, 0x00F00068, 0x01000000, 0x00240010,
    0xFFF4FFFD, 0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0xFFF30024,
    0x0010FFF4, 0x01700010, 0x00F00068, 0x01000000, 0x00000010,
};

u32 D_800D3644[] = {
    0x00060005, 0xFFFCFFF8, 0x00100010, 0x00680170, 0x002800F0, 0x00380100,
    0x00030024, 0x00100003, 0x01700010, 0x00F00068, 0x01000000, 0x00240010,
    0x0003FFED, 0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0x00000024,
    0x0010FFF2, 0x01700010, 0x00F00068, 0x01000000, 0x00240010, 0xFFF2FFF0,
    0x00100010, 0x00680170, 0x000000F0, 0x00100100, 0x00000000,
};

u16 D_800D36B8[] = {
    0x0005, 0x0006, 0xFFF8, 0x0002, 0x0010, 0x0010, 0x0170, 0x0068, 0x00F0,
    0x0028, 0x0100, 0x0038, 0x0004, 0x0000, 0xFFF2, 0x0010, 0x0010, 0x0170,
    0x0068, 0x00F0, 0x0028, 0x0100, 0x0038, 0x0004, 0x0005, 0x0005, 0x0010,
    0x0010, 0x0170, 0x0068, 0x00F0, 0x0028, 0x0100, 0x0038, 0x0004, 0xFFEB,
    0x0005, 0x0010, 0x0010, 0x0170, 0x0068, 0x00F0, 0x0028, 0x0100, 0x0038,
    0x0004, 0xFFF0, 0xFFF2, 0x0010, 0x0010, 0x0170, 0x0068, 0x00F0, 0x0028,
    0x0100, 0x0038, 0x0000,
#ifdef VERSION_US // dirty data
    0x645F,
#endif
};

u32 D_800D37A4[];
u32 D_800D37C0[];
u32 D_800D37DC[];
u32 D_800D37F8[];
u32 D_800D3814[];
u32 D_800D3830[];
u32 D_800D384C[];
u32 D_800D3868[];
u32 D_800D3884[];
u32 D_800D38A0[];
u32 D_800D38BC[];
u32 D_800D38D8[];
u32 D_800D38F4[];
u32 D_800D3910[];
u32 D_800D392C[];
u32 D_800D3988[];
u32 D_800D39A4[];
u32 D_800D39C0[];
u32 D_800D39F0[];
u32 D_800D3A0C[];
u32 D_800D3A3C[];
u32 D_800D3A58[];
u32 D_800D3A88[];
u32 D_800D3AA4[];
u32 D_800D3AD4[];
u32 D_800D3AF0[];
u32 D_800D3B20[];
u32 D_800D3B3C[];
u16 D_800D3B6C[];

s16* D_800D372C[] = {
    NULL,
    (s16*)D_800D37A4,
    (s16*)D_800D37C0,
    (s16*)D_800D37DC,
    (s16*)D_800D37F8,
    (s16*)D_800D3814,
    (s16*)D_800D3830,
    (s16*)D_800D384C,
    (s16*)D_800D3868,
    (s16*)D_800D3884,
    (s16*)D_800D38A0,
    (s16*)D_800D38BC,
    (s16*)D_800D38D8,
    (s16*)D_800D38F4,
    (s16*)D_800D3910,
    (s16*)D_800D392C,
    (s16*)D_800D3988,
    (s16*)D_800D39A4,
    (s16*)D_800D39C0,
    (s16*)D_800D39F0,
    (s16*)D_800D3A0C,
    (s16*)D_800D3A3C,
    (s16*)D_800D3A58,
    (s16*)D_800D3A88,
    (s16*)D_800D3AA4,
    (s16*)D_800D3AD4,
    (s16*)D_800D3AF0,
    (s16*)D_800D3B20,
    (s16*)D_800D3B3C,
    (s16*)D_800D3B6C,
};

u32 D_800D37A4[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00800080, 0x009000A0, 0x00000000,
};

u32 D_800D37C0[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00900080, 0x00A000A0, 0x00000000,
};

u32 D_800D37DC[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00A00080, 0x00B000A0, 0x00000000,
};

u32 D_800D37F8[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00B00080, 0x00C000A0, 0x00000000,
};

u32 D_800D3814[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x008000A0, 0x009000C0, 0x00000000,
};

u32 D_800D3830[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x009000A0, 0x00A000C0, 0x00000000,
};

u32 D_800D384C[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00A000A0, 0x00B000C0, 0x00000000,
};

u32 D_800D3868[] = {
    0x00000001, 0xFFF8FFF7, 0x00100020, 0x0068019A,
    0x00B000A0, 0x00C000C0, 0x00000000,
};

u32 D_800D3884[] = {
    0x00040001, 0xFFF0FFF0, 0x00200020, 0x0068019A,
    0x008000E0, 0x00A00100, 0x00000000,
};

u32 D_800D38A0[] = {
    0x00060001, 0xFFF0FFF0, 0x00200020, 0x0068019A,
    0x008000E0, 0x00A00100, 0x00000000,
};

u32 D_800D38BC[] = {
    0x00070001, 0xFFF0FFF0, 0x00200020, 0x0068019A,
    0x008000E0, 0x00A00100, 0x00000000,
};

u32 D_800D38D8[] = {
    0x00050001, 0xFFF0FFF0, 0x00200020, 0x0068019A,
    0x008000E0, 0x00A00100, 0x00000000,
};

u32 D_800D38F4[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x0068015E,
    0x00400070, 0x00500080, 0x00000000,
};

u32 D_800D3910[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x0068015E,
    0x00300040, 0x00400050, 0x00000000,
};

u32 D_800D392C[] = {
    0x00030004, 0xFFFEFFFD, 0x00100010, 0x0068015E, 0x00600070, 0x00700080,
    0xFFF30001, 0x0010FFFE, 0x015E0010, 0x00700068, 0x00800060, 0x00020070,
    0xFFF2FFFD, 0x00100010, 0x0068015E, 0x00600070, 0x00700080, 0xFFF30000,
    0x0010FFF2, 0x015E0010, 0x00700068, 0x00800060, 0x00000070,
};

u32 D_800D3988[] = {
    0x00040001, 0xFFF0FFF0, 0x00200020, 0x0068015E,
    0x008000E0, 0x00A00100, 0x00000000,
};

u32 D_800D39A4[] = {
    0x00000001, 0xFFF0FFF8, 0x00100010, 0x00680194,
    0x008000C0, 0x009000D0, 0x00000000,
};

u32 D_800D39C0[] = {
    0x00000002, 0xFFF00008, 0x00100010, 0x00680194, 0x008000D0, 0x009000E0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u32 D_800D39F0[] = {
    0x00000001, 0x00000008, 0x00100010, 0x00680194,
    0x009000D0, 0x00A000E0, 0x00000000,
};

u32 D_800D3A0C[] = {
    0x00000002, 0x0000FFF8, 0x00100010, 0x00680194, 0x00A000D0, 0x00B000E0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u32 D_800D3A3C[] = {
    0x00000001, 0x0000FFE8, 0x00100010, 0x00680194,
    0x00A000C0, 0x00B000D0, 0x00000000,
};

u32 D_800D3A58[] = {
    0x00000002, 0xFFF0FFE8, 0x00100010, 0x00680194, 0x009000C0, 0x00A000D0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u32 D_800D3A88[] = {
    0x00010001, 0x0008FFF0, 0x00100010, 0x00680194,
    0x008000C0, 0x009000D0, 0x00000000,
};

u32 D_800D3AA4[] = {
    0x00010002, 0x00080000, 0x00100010, 0x00680194, 0x008000D0, 0x009000E0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u32 D_800D3AD4[] = {
    0x00010001, 0xFFF80000, 0x00100010, 0x00680194,
    0x009000D0, 0x00A000E0, 0x00000000,
};

u32 D_800D3AF0[] = {
    0x00010002, 0xFFE80000, 0x00100010, 0x00680194, 0x00A000D0, 0x00B000E0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u32 D_800D3B20[] = {
    0x00010001, 0xFFE8FFF0, 0x00100010, 0x00680194,
    0x00A000C0, 0x00B000D0, 0x00000000,
};

u32 D_800D3B3C[] = {
    0x00010002, 0xFFF8FFF0, 0x00100010, 0x00680194, 0x009000C0, 0x00A000D0,
    0xFFF00030, 0x0020FFF0, 0x015E0020, 0x00000068, 0x00200000, 0x00000020,
};

u16 D_800D3B6C[] = {
    0x0001, 0x0000, 0xFFFC, 0xFFFC, 0x0008, 0x0008, 0x0186,
    0x0068, 0x0078, 0x0038, 0x0080, 0x0040, 0x0000,
#ifdef VERSION_US // dirty data
    0x6109,
#endif
};

u32 D_800D3D1C[];
u32 D_800D3D38[];
u32 D_800D3D54[];
u32 D_800D3D84[];
u32 D_800D3DA0[];
u32 D_800D3DBC[];
u32 D_800D3DD8[];
u32 D_800D3DF4[];
u32 D_800D3E10[];
u32 D_800D3E2C[];
u32 D_800D3E48[];
u32 D_800D3E64[];
u32 D_800D3E80[];
u32 D_800D3E9C[];
u32 D_800D3EB8[];
u32 D_800D3ED4[];
u32 D_800D3F04[];
u32 D_800D3F20[];
u32 D_800D3F3C[];
u32 D_800D3F58[];
u32 D_800D3F74[];
u32 D_800D3F90[];
u32 D_800D3FAC[];
u32 D_800D3FDC[];
u32 D_800D3FF8[];
u32 D_800D4014[];
u32 D_800D4030[];
u32 D_800D404C[];
u32 D_800D4068[];
u32 D_800D4084[];
u32 D_800D40A0[];
u32 D_800D40BC[];
u32 D_800D40D8[];
u32 D_800D40F4[];
u32 D_800D4110[];
u32 D_800D4140[];
u32 D_800D415C[];
u32 D_800D4178[];
u32 D_800D4194[];
u32 D_800D41B0[];
u32 D_800D41CC[];
u32 D_800D41E8[];
u32 D_800D4204[];
u32 D_800D4220[];
u32 D_800D423C[];
u32 D_800D4258[];
u32 D_800D4274[];
u32 D_800D4290[];
u32 D_800D42C0[];
u32 D_800D42DC[];
u32 D_800D42F8[];
u32 D_800D4314[];
u32 D_800D4330[];
u32 D_800D434C[];
u32 D_800D4368[];
u32 D_800D4398[];
u32 D_800D43B4[];
u32 D_800D43D0[];
u32 D_800D43EC[];
u32 D_800D4408[];
u32 D_800D4424[];
u32 D_800D4440[];
u32 D_800D445C[];
u32 D_800D4478[];
u32 D_800D4494[];
u32 D_800D4534[];
u32 D_800D45D4[];
u32 D_800D4674[];
u32 D_800D4714[];
u32 D_800D479C[];
u32 D_800D4824[];
u32 D_800D48AC[];
u32 D_800D4934[];
u32 D_800D49D4[];
u32 D_800D4A74[];
u32 D_800D4B14[];
u32 D_800D4BB4[];
u32 D_800D4C54[];
u32 D_800D4CDC[];
u32 D_800D4D64[];
u32 D_800D4E04[];
u32 D_800D4EA4[];
u32 D_800D4F44[];
u32 D_800D4FE4[];
u32 D_800D5084[];
u32 D_800D5124[];
u32 D_800D51AC[];
u32 D_800D5234[];
u32 D_800D52D4[];
u32 D_800D52F0[];
u32 D_800D5320[];
u32 D_800D5350[];
u32 D_800D53AC[];
u32 D_800D5408[];
u32 D_800D5450[];
u32 D_800D54C4[];
u32 D_800D550C[];
u32 D_800D5568[];
u32 D_800D55C4[];
u16 D_800D560C[];

s16* D_800D3B88[] = {
    0x00000000,       (s16*)D_800D3D1C, (s16*)D_800D3D38, (s16*)D_800D3D54,
    (s16*)D_800D3D84, (s16*)D_800D3DA0, (s16*)D_800D3DBC, (s16*)D_800D3DD8,
    (s16*)D_800D3DF4, (s16*)D_800D3E10, (s16*)D_800D3E2C, (s16*)D_800D3E48,
    (s16*)D_800D3E64, (s16*)D_800D3E80, (s16*)D_800D3E9C, (s16*)D_800D3EB8,
    (s16*)D_800D3ED4, (s16*)D_800D3F04, (s16*)D_800D3F20, (s16*)D_800D3F3C,
    (s16*)D_800D3F58, (s16*)D_800D3F74, (s16*)D_800D3F90, (s16*)D_800D3FAC,
    (s16*)D_800D3FDC, (s16*)D_800D3FF8, (s16*)D_800D4014, (s16*)D_800D4030,
    (s16*)D_800D404C, (s16*)D_800D4068, (s16*)D_800D4084, (s16*)D_800D40A0,
    (s16*)D_800D40BC, (s16*)D_800D40D8, (s16*)D_800D40F4, (s16*)D_800D4110,
    (s16*)D_800D4140, (s16*)D_800D415C, (s16*)D_800D4178, (s16*)D_800D4194,
    (s16*)D_800D41B0, (s16*)D_800D41CC, (s16*)D_800D41E8, (s16*)D_800D4204,
    (s16*)D_800D4220, (s16*)D_800D423C, (s16*)D_800D4258, (s16*)D_800D4274,
    (s16*)D_800D4290, (s16*)D_800D42C0, (s16*)D_800D42DC, (s16*)D_800D42F8,
    (s16*)D_800D4314, (s16*)D_800D4330, (s16*)D_800D434C, (s16*)D_800D4368,
    (s16*)D_800D4398, (s16*)D_800D43B4, (s16*)D_800D43D0, (s16*)D_800D43EC,
    (s16*)D_800D4408, (s16*)D_800D4424, (s16*)D_800D4440, (s16*)D_800D445C,
    (s16*)D_800D4478, (s16*)D_800D4494, (s16*)D_800D4534, (s16*)D_800D45D4,
    (s16*)D_800D4674, (s16*)D_800D4714, (s16*)D_800D479C, (s16*)D_800D4824,
    (s16*)D_800D48AC, (s16*)D_800D4934, (s16*)D_800D49D4, (s16*)D_800D4A74,
    (s16*)D_800D4B14, (s16*)D_800D4BB4, (s16*)D_800D4C54, (s16*)D_800D4CDC,
    (s16*)D_800D4D64, (s16*)D_800D4E04, (s16*)D_800D4EA4, (s16*)D_800D4F44,
    (s16*)D_800D4FE4, (s16*)D_800D5084, (s16*)D_800D5124, (s16*)D_800D51AC,
    (s16*)D_800D5234, (s16*)D_800D52D4, (s16*)D_800D52F0, (s16*)D_800D5320,
    (s16*)D_800D5350, (s16*)D_800D53AC, (s16*)D_800D5408, (s16*)D_800D5450,
    (s16*)D_800D54C4, (s16*)D_800D550C, (s16*)D_800D5568, (s16*)D_800D55C4,
    (s16*)D_800D560C,
};

u32 D_800D3D1C[] = {
    0x01000001, 0xFFDBFFFB, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3D38[] = {
    0x01020001, 0xFFDCFFDF, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3D54[] = {
    0x01100002, 0xFFEB0010, 0x00100040, 0x00000000, 0x00600000, 0x00700040,
    0xFFF30130, 0x0048FFED, 0x00010020, 0x00000000, 0x00480000, 0x00000020,
};

u32 D_800D3D84[] = {
    0x01100001, 0xFFEA0011, 0x00100040, 0x00000000,
    0x00600000, 0x00700040, 0x00000000,
};

u32 D_800D3DA0[] = {
    0x01180001, 0xFFEA0011, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D3DBC[] = {
    0x00190001, 0xFFE9000E, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D3DD8[] = {
    0x00040001, 0xFFE7FFFD, 0x00100038, 0x00000000,
    0x00280048, 0x00380080, 0x00000000,
};

u32 D_800D3DF4[] = {
    0x00000001, 0xFFE30003, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3E10[] = {
    0x00000001, 0xFFE6FFF8, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3E2C[] = {
    0x00100001, 0xFFEEFFE9, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D3E48[] = {
    0x00100001, 0xFFF0FFE3, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D3E64[] = {
    0x00100001, 0xFFF1FFE1, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D3E80[] = {
    0x00100001, 0xFFF2FFDF, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D3E9C[] = {
    0x01000001, 0xFFEBFFF3, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3EB8[] = {
    0x01020001, 0xFFEEFFD8, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3ED4[] = {
    0x01100002, 0xFFFC0007, 0x00100040, 0x00000000, 0x00600000, 0x00700040,
    0xFFE60130, 0x00500000, 0x00010020, 0x00000000, 0x00500000, 0x00000020,
};

u32 D_800D3F04[] = {
    0x01100001, 0xFFFB0008, 0x00100040, 0x00000000,
    0x00600000, 0x00700040, 0x00000000,
};

u32 D_800D3F20[] = {
    0x01180001, 0xFFFB0008, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D3F3C[] = {
    0x00180001, 0xFFF90005, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D3F58[] = {
    0x00040001, 0xFFF8FFF9, 0x00100030, 0x00000000,
    0x00280050, 0x00380080, 0x00000000,
};

u32 D_800D3F74[] = {
    0x00000001, 0xFFF6FFF8, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3F90[] = {
    0x00000001, 0xFFF8FFEF, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D3FAC[] = {
    0x01240002, 0x0009000A, 0x00280030, 0x00000000, 0x00000050, 0x00280080,
    0xFFE90110, 0x0048FFF5, 0x00010030, 0x00000000, 0x00480020, 0x00000050,
};

u32 D_800D3FDC[] = {
    0x01240001, 0x0008000B, 0x00280030, 0x00000000,
    0x00000050, 0x00280080, 0x00000000,
};

u32 D_800D3FF8[] = {
    0x01240001, 0x00020009, 0x00280030, 0x00000000,
    0x00000050, 0x00280080, 0x00000000,
};

u32 D_800D4014[] = {
    0x00180001, 0x0000FFF2, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D4030[] = {
    0x00000001, 0xFFFC0002, 0x00100020, 0x00000000,
    0x00600020, 0x00700040, 0x00000000,
};

u32 D_800D404C[] = {
    0x00000001, 0xFFFBFFF6, 0x00100020, 0x00000000,
    0x00600020, 0x00700040, 0x00000000,
};

u32 D_800D4068[] = {
    0x00100001, 0xFFFEFFE7, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4084[] = {
    0x00100001, 0xFFFFFFE5, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D40A0[] = {
    0x00100001, 0x0000FFE3, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D40BC[] = {
    0x00100001, 0x0001FFE2, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D40D8[] = {
    0x01000001, 0xFFD9FFF7, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D40F4[] = {
    0x01020001, 0xFFDAFFDC, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D4110[] = {
    0x01100002, 0xFFE9000D, 0x00100040, 0x00000000, 0x00600000, 0x00700040,
    0xFFEE0130, 0x0050FFED, 0x00010020, 0x00000000, 0x00500000, 0x00000020,
};

u32 D_800D4140[] = {
    0x01100001, 0xFFE8000E, 0x00100040, 0x00000000,
    0x00600000, 0x00700040, 0x00000000,
};

u32 D_800D415C[] = {
    0x01180001, 0xFFE8000E, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D4178[] = {
    0x00180001, 0xFFE60008, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D4194[] = {
    0x00040001, 0xFFE60001, 0x00100030, 0x00000000,
    0x00280050, 0x00380080, 0x00000000,
};

u32 D_800D41B0[] = {
    0x00000001, 0xFFE10001, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D41CC[] = {
    0x00000001, 0xFFE4FFF5, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D41E8[] = {
    0x00100001, 0xFFECFFE7, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4204[] = {
    0x00100001, 0xFFEDFFE5, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4220[] = {
    0x00100001, 0xFFEEFFE3, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D423C[] = {
    0x00100001, 0xFFEFFFE1, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4258[] = {
    0x01000001, 0xFFD7FFEF, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D4274[] = {
    0x01020001, 0xFFD9FFD3, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D4290[] = {
    0x01100002, 0xFFEB0009, 0x00100040, 0x00000000, 0x00600000, 0x00700040,
    0xFFE80130, 0x0050FFEE, 0x00010020, 0x00000000, 0x00500000, 0x00000020,
};

u32 D_800D42C0[] = {
    0x01100001, 0xFFEA000A, 0x00100040, 0x00000000,
    0x00600000, 0x00700040, 0x00000000,
};

u32 D_800D42DC[] = {
    0x01180001, 0xFFEA000A, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D42F8[] = {
    0x00180001, 0xFFE80006, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D4314[] = {
    0x00040001, 0xFFE70004, 0x00100028, 0x00000000,
    0x00280058, 0x00380080, 0x00000000,
};

u32 D_800D4330[] = {
    0x00000001, 0xFFE2FFFB, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D434C[] = {
    0x00000001, 0xFFE3FFF5, 0x00180020, 0x00000000,
    0x00400048, 0x00580068, 0x00000000,
};

u32 D_800D4368[] = {
    0x01240002, 0xFFFE000F, 0x00280030, 0x00000000, 0x00000050, 0x00280080,
    0xFFF00110, 0x0048FFEC, 0x00010030, 0x00000000, 0x00480020, 0x00000050,
};

u32 D_800D4398[] = {
    0x01240001, 0xFFFD0010, 0x00280030, 0x00000000,
    0x00000050, 0x00280080, 0x00000000,
};

u32 D_800D43B4[] = {
    0x01240001, 0xFFF7000D, 0x00280030, 0x00000000,
    0x00000050, 0x00280080, 0x00000000,
};

u32 D_800D43D0[] = {
    0x00180001, 0xFFF1FFF7, 0x00100040, 0x00000000,
    0x00700000, 0x00800040, 0x00000000,
};

u32 D_800D43EC[] = {
    0x00000001, 0xFFEDFFFB, 0x00100028, 0x00000000,
    0x00600018, 0x00700040, 0x00000000,
};

u32 D_800D4408[] = {
    0x00000001, 0xFFEB0000, 0x00100018, 0x00000000,
    0x00600028, 0x00700040, 0x00000000,
};

u32 D_800D4424[] = {
    0x00100001, 0xFFEEFFE9, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4440[] = {
    0x00100001, 0xFFEFFFE7, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D445C[] = {
    0x00100001, 0xFFF0FFE5, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4478[] = {
    0x00100001, 0xFFF1FFE3, 0x00100020, 0x00000000,
    0x00500000, 0x00600020, 0x00000000,
};

u32 D_800D4494[] = {
    0x00300007, 0xFFF1FFFB, 0x00180010, 0x00010004, 0x00000000, 0x00180010,
    0xFFFB0010, 0x0010FFEA, 0x00040018, 0x00000001, 0x00100058, 0x00000070,
    0xFFE7FFF8, 0x00180010, 0x00010004, 0x00400020, 0x00580030, 0xFFF80020,
    0x0018FFF9, 0x00040020, 0x00480001, 0x00600000, 0x00000020, 0xFFE70007,
    0x00100010, 0x00010004, 0x00600020, 0x00700030, 0xFFE90008, 0x00100003,
    0x00040010, 0x00200001, 0x00300070, 0x00080080, 0xFFECFFF1, 0x00200010,
    0x00010004, 0x00600010, 0x00800020, 0x00000000,
};

u32 D_800D4534[] = {
    0x00300007, 0xFFF2FFFC, 0x00180010, 0x00010004, 0x00000000, 0x00180010,
    0xFFFC0010, 0x0010FFE9, 0x00040018, 0x00000001, 0x00100058, 0x00000070,
    0xFFE6FFF8, 0x00180010, 0x00010004, 0x00400020, 0x00580030, 0xFFF80020,
    0x0018FFF9, 0x00040020, 0x00480001, 0x00600000, 0x00000020, 0xFFE50007,
    0x00100010, 0x00010004, 0x00600020, 0x00700030, 0xFFE80008, 0x00100002,
    0x00040010, 0x00200001, 0x00300070, 0x00080080, 0xFFEBFFF0, 0x00200010,
    0x00010004, 0x00600010, 0x00800020, 0x00000000,
};

u32 D_800D45D4[] = {
    0x00300007, 0xFFF1FFFD, 0x00180010, 0x00010004, 0x00000000, 0x00180010,
    0xFFFD0010, 0x0010FFE9, 0x00040018, 0x00000001, 0x00100058, 0x00000070,
    0xFFE6FFF8, 0x00180010, 0x00010004, 0x00400020, 0x00580030, 0xFFFC0000,
    0x0010FFF9, 0x00040020, 0x00200001, 0x00300020, 0x00000040, 0xFFE50006,
    0x00100010, 0x00010004, 0x00600020, 0x00700030, 0xFFE70008, 0x00100002,
    0x00040010, 0x00200001, 0x00300070, 0x00080080, 0xFFEBFFEF, 0x00200010,
    0x00010004, 0x00600010, 0x00800020, 0x00000000,
};

u32 D_800D4674[] = {
    0x00300007, 0xFFF0FFFC, 0x00180010, 0x00010004, 0x00000000, 0x00180010,
    0xFFFC0010, 0x0010FFEA, 0x00040018, 0x00000001, 0x00100058, 0x00000070,
    0xFFE7FFF8, 0x00180010, 0x00010004, 0x00400020, 0x00580030, 0xFFFC0000,
    0x0010FFF9, 0x00040020, 0x00200001, 0x00300020, 0x00000040, 0xFFE60007,
    0x00100010, 0x00010004, 0x00600020, 0x00700030, 0xFFE80008, 0x00100003,
    0x00040010, 0x00200001, 0x00300070, 0x00080080, 0xFFECFFF0, 0x00200010,
    0x00010004, 0x00600010, 0x00800020, 0x00000000,
};

u32 D_800D4714[] = {
    0x00100006, 0xFFEAFFFB, 0x00180010, 0x00010006, 0x00580000, 0x00700010,
    0xFFF80000, 0x0010FFE7, 0x00060018, 0x00200001, 0x00300040, 0x00200058,
    0xFFF9FFF8, 0x00200018, 0x00010006, 0x00000048, 0x00200060, 0x00010000,
    0x0010FFED, 0x00060010, 0x00200001, 0x00300060, 0x00080070, 0x0003FFE9,
    0x00100010, 0x00010006, 0x00700020, 0x00800030, 0xFFF10008, 0x0010FFEC,
    0x00060020, 0x00100001, 0x00200060, 0x00000080,
};

u32 D_800D479C[] = {
    0x00100006, 0xFFE9FFFC, 0x00180010, 0x00010006, 0x00580000, 0x00700010,
    0xFFF80000, 0x0010FFE6, 0x00060018, 0x00200001, 0x00300040, 0x00200058,
    0xFFF9FFF8, 0x00200018, 0x00010006, 0x00000048, 0x00200060, 0x00000000,
    0x0010FFEC, 0x00060010, 0x00200001, 0x00300060, 0x00080070, 0x0002FFE8,
    0x00100010, 0x00010006, 0x00700020, 0x00800030, 0xFFF00008, 0x0010FFEB,
    0x00060020, 0x00100001, 0x00200060, 0x00000080,
};

u32 D_800D4824[] = {
    0x00100006, 0xFFE9FFFD, 0x00180010, 0x00010006, 0x00580000, 0x00700010,
    0xFFF80000, 0x0010FFE6, 0x00060018, 0x00200001, 0x00300040, 0x00000058,
    0xFFF9FFFC, 0x00200010, 0x00010006, 0x00200020, 0x00400030, 0xFFFF0000,
    0x0010FFEC, 0x00060010, 0x00200001, 0x00300060, 0x00080070, 0x0002FFE7,
    0x00100010, 0x00010006, 0x00700020, 0x00800030, 0xFFEF0008, 0x0010FFEB,
    0x00060020, 0x00100001, 0x00200060, 0x00000080,
};

u32 D_800D48AC[] = {
    0x00100006, 0xFFEAFFFC, 0x00180010, 0x00010006, 0x00580000, 0x00700010,
    0xFFF80000, 0x0010FFE7, 0x00060018, 0x00200001, 0x00300040, 0x00000058,
    0xFFF9FFFC, 0x00200010, 0x00010006, 0x00200020, 0x00400030, 0x00000000,
    0x0010FFED, 0x00060010, 0x00200001, 0x00300060, 0x00080070, 0x0003FFE8,
    0x00100010, 0x00010006, 0x00700020, 0x00800030, 0xFFF00008, 0x0010FFEC,
    0x00060020, 0x00100001, 0x00200060, 0x00000080,
};

u32 D_800D4934[] = {
    0x00000007, 0xFFECFFEB, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00000018,
    0xFFEBFFEA, 0x00080018, 0x00010008, 0x00480030, 0x00500048, 0xFFF30010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00210058, 0xFFEEFFEC,
    0x00200010, 0x00010008, 0x00000020, 0x00200030, 0xFFEC0020, 0x0010FFD0,
    0x00080020, 0x00200001, 0x00300000, 0x00180020, 0xFFECFFF8, 0x00100010,
    0x00010008, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D49D4[] = {
    0x00000007, 0xFFECFFEC, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00000018,
    0xFFEBFFE9, 0x00080018, 0x00010008, 0x00480030, 0x00500048, 0xFFF30010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00210058, 0xFFEEFFED,
    0x00200010, 0x00010008, 0x00000020, 0x00200030, 0xFFED0020, 0x0010FFD0,
    0x00080020, 0x00200001, 0x00300000, 0x00180020, 0xFFEDFFF6, 0x00100010,
    0x00010008, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4A74[] = {
    0x00000007, 0xFFECFFED, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00000018,
    0xFFEBFFE9, 0x00080018, 0x00010008, 0x00480030, 0x00500048, 0xFFF30010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00210058, 0xFFEEFFEE,
    0x00200010, 0x00010008, 0x00000020, 0x00200030, 0xFFEE0020, 0x0010FFD0,
    0x00080020, 0x00200001, 0x00300000, 0x00180020, 0xFFEEFFF4, 0x00100010,
    0x00010008, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4B14[] = {
    0x00000007, 0xFFECFFEC, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00000018,
    0xFFEBFFE8, 0x00080018, 0x00010008, 0x00480030, 0x00500048, 0xFFF30010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00210058, 0xFFEEFFEC,
    0x00200018, 0x00010008, 0x00000030, 0x00200048, 0xFFEC0020, 0x0018FFD0,
    0x00080020, 0x00300001, 0x00480000, 0x00180020, 0xFFEFFFFB, 0x00100010,
    0x00010008, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4BB4[] = {
    0x00000007, 0xFFECFFEC, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00000018,
    0xFFEBFFE7, 0x00080018, 0x00010008, 0x00480030, 0x00500048, 0xFFF30010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00210058, 0xFFEDFFED,
    0x00200018, 0x00010008, 0x00000030, 0x00200048, 0xFFED0020, 0x0018FFD1,
    0x00080020, 0x00300001, 0x00480000, 0x00180020, 0xFFEFFFFD, 0x00100010,
    0x00010008, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4C54[] = {
    0x00000006, 0xFFEDFFEB, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFA0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00100018,
    0xFFF1FFF2, 0x00280020, 0x00010008, 0x00300000, 0x00580020, 0xFFE30023,
    0x0010FFEF, 0x00080020, 0x00200001, 0x00300000, 0x00220020, 0xFFD1FFE3,
    0x00200010, 0x00010008, 0x00000020, 0x00200030, 0xFFF90018, 0x0010FFEF,
    0x00080010, 0x00000001, 0x00100070, 0x00000080,
};

u32 D_800D4CDC[] = {
    0x00000006, 0xFFEDFFEB, 0x00080018, 0x00010008, 0x00580010, 0x00600028,
    0xFFFA0020, 0x0010FFE7, 0x00080018, 0x00100001, 0x00200000, 0x00100018,
    0xFFF1FFF2, 0x00280020, 0x00010008, 0x00300000, 0x00580020, 0xFFEC0021,
    0x0010FFEF, 0x00080020, 0x00200001, 0x00300000, 0x00200020, 0xFFD1FFEC,
    0x00200010, 0x00010008, 0x00000020, 0x00200030, 0xFFF90018, 0x0010FFEF,
    0x00080010, 0x00000001, 0x00100070, 0x00000080,
};

u32 D_800D4D64[] = {
    0x00000007, 0xFFF30009, 0x00080008, 0x00010008, 0x00700008, 0x00780010,
    0xFFEB0000, 0x0018FFED, 0x00080008, 0x00100001, 0x00280058, 0x00200060,
    0xFFE7FFFB, 0x00180010, 0x00010008, 0x00000010, 0x00180020, 0xFFF20010,
    0x0020FFF1, 0x00080028, 0x00000001, 0x00200030, 0x00180058, 0xFFEA0007,
    0x00100008, 0x00010008, 0x00700000, 0x00800008, 0xFFEC0021, 0x0010FFEF,
    0x00080020, 0x00200001, 0x00300000, 0x00200020, 0xFFD1FFEC, 0x00200010,
    0x00010008, 0x00000020, 0x00200030, 0x00000000,
};

u32 D_800D4E04[] = {
    0x00000007, 0xFFF8FFEB, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00000018,
    0xFFF7FFEA, 0x00080018, 0x0001000A, 0x00480030, 0x00500048, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00210030, 0xFFFAFFEC,
    0x00200010, 0x0001000A, 0x00000020, 0x00200030, 0xFFEC0020, 0x0010FFDC,
    0x000A0020, 0x00200001, 0x00300000, 0x00180020, 0xFFF8FFF8, 0x00100010,
    0x0001000A, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4EA4[] = {
    0x00000007, 0xFFF8FFEC, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00000018,
    0xFFF7FFE9, 0x00080018, 0x0001000A, 0x00480030, 0x00500048, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00210030, 0xFFFAFFED,
    0x00200010, 0x0001000A, 0x00000020, 0x00200030, 0xFFED0020, 0x0010FFDC,
    0x000A0020, 0x00200001, 0x00300000, 0x00180020, 0xFFF9FFF6, 0x00100010,
    0x0001000A, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4F44[] = {
    0x00000007, 0xFFF8FFED, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00000018,
    0xFFF7FFE9, 0x00080018, 0x0001000A, 0x00480030, 0x00500048, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00210030, 0xFFFAFFEE,
    0x00200010, 0x0001000A, 0x00000020, 0x00200030, 0xFFEE0020, 0x0010FFDC,
    0x000A0020, 0x00200001, 0x00300000, 0x00180020, 0xFFFAFFF4, 0x00100010,
    0x0001000A, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D4FE4[] = {
    0x00000007, 0xFFF8FFEC, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00000018,
    0xFFF7FFE8, 0x00080018, 0x0001000A, 0x00480030, 0x00500048, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00210030, 0xFFFAFFEC,
    0x00200018, 0x0001000A, 0x00000030, 0x00200048, 0xFFEC0020, 0x0018FFDC,
    0x000A0020, 0x00300001, 0x00480000, 0x00180020, 0xFFFBFFFB, 0x00100010,
    0x0001000A, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D5084[] = {
    0x00000007, 0xFFF8FFEC, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFB0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00000018,
    0xFFF7FFE7, 0x00080018, 0x0001000A, 0x00480030, 0x00500048, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00210030, 0xFFF9FFED,
    0x00200018, 0x0001000A, 0x00000030, 0x00200048, 0xFFED0020, 0x0018FFDD,
    0x000A0020, 0x00300001, 0x00480000, 0x00180020, 0xFFFBFFFD, 0x00100010,
    0x0001000A, 0x00700000, 0x00800010, 0x00000000,
};

u32 D_800D5124[] = {
    0x00000006, 0xFFF9FFEB, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFA0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00100018,
    0x0000FFEE, 0x00180020, 0x0001000A, 0x00180000, 0x00300020, 0xFFE30023,
    0x0010FFFB, 0x000A0020, 0x00200001, 0x00300000, 0x00220020, 0xFFDDFFE3,
    0x00200010, 0x0001000A, 0x00000020, 0x00200030, 0xFFF90018, 0x0010FFFB,
    0x000A0010, 0x00000001, 0x00100070, 0x00000080,
};

u32 D_800D51AC[] = {
    0x00000006, 0xFFF9FFEB, 0x00080018, 0x0001000A, 0x00580010, 0x00600028,
    0xFFFA0020, 0x0010FFF3, 0x000A0018, 0x00100001, 0x00200000, 0x00100018,
    0x0000FFEE, 0x00180020, 0x0001000A, 0x00180000, 0x00300020, 0xFFEC0021,
    0x0010FFFB, 0x000A0020, 0x00200001, 0x00300000, 0x00200020, 0xFFDDFFEC,
    0x00200010, 0x0001000A, 0x00000020, 0x00200030, 0xFFF90018, 0x0010FFFB,
    0x000A0010, 0x00000001, 0x00100070, 0x00000080,
};

u32 D_800D5234[] = {
    0x00000007, 0xFFFF0009, 0x00080008, 0x0001000A, 0x00700008, 0x00780010,
    0xFFEB0000, 0x0018FFF9, 0x000A0008, 0x00100001, 0x00280058, 0x00200060,
    0xFFF3FFFB, 0x00180010, 0x0001000A, 0x00000010, 0x00180020, 0xFFEF0010,
    0x00200000, 0x000A0018, 0x00000001, 0x00200018, 0x00180030, 0xFFF60007,
    0x00100008, 0x0001000A, 0x00700000, 0x00800008, 0xFFEC0021, 0x0010FFFB,
    0x000A0020, 0x00200001, 0x00300000, 0x00200020, 0xFFDDFFEC, 0x00200010,
    0x0001000A, 0x00000020, 0x00200030, 0x00000000,
};

u32 D_800D52D4[] = {
    0x00000001, 0xFFF0FFF3, 0x00280018, 0x0001000C,
    0x00200030, 0x00480048, 0x00000000,
};

u32 D_800D52F0[] = {
    0x00000002, 0xFFF1FFF3, 0x00200018, 0x0001000C, 0x00200030, 0x00400048,
    0xFFF30000, 0x00180010, 0x000C0008, 0x00300001, 0x00480040, 0x00000048,
};

u32 D_800D5320[] = {
    0x00000002, 0xFFF2FFF3, 0x00200018, 0x0001000C, 0x00200030, 0x00400048,
    0xFFF30000, 0x00180010, 0x000C0008, 0x00300001, 0x00480040, 0x00000048,
};

u32 D_800D5350[] = {
    0x00000004, 0xFFE9FFFC, 0x00080008, 0x0001000E, 0x00680038, 0x00700040,
    0x000B0008, 0x0008FFEB, 0x000E0008, 0x00300001, 0x00380078, 0x00000080,
    0xFFEAFFF1, 0x00080008, 0x0001000E, 0x00700030, 0x00780038, 0xFFF60000,
    0x0018FFE8, 0x000E0030, 0x00480001, 0x00600020, 0x00000050,
};

u32 D_800D53AC[] = {
    0x00000004, 0xFFE9FFFC, 0x00080008, 0x0001000E, 0x00600038, 0x00680040,
    0x000B0008, 0x0008FFEB, 0x000E0008, 0x00300001, 0x00380078, 0x00000080,
    0xFFEAFFF1, 0x00080008, 0x0001000E, 0x00700030, 0x00780038, 0xFFF60000,
    0x0018FFE8, 0x000E0030, 0x00480001, 0x00600020, 0x00000050,
};

u32 D_800D5408[] = {
    0x00080003, 0xFFEB000B, 0x00080008, 0x0001000E, 0x00780030, 0x00800038,
    0xFFF10000, 0x0008FFEA, 0x000E0008, 0x00300001, 0x00380070, 0x00000078,
    0xFFE8FFF6, 0x00300018, 0x0001000E, 0x00200048, 0x00500060, 0x00000000,
};

u32 D_800D5450[] = {
    0x00000005, 0xFFF8FFFA, 0x00080008, 0x0001000E, 0x00580028, 0x00600030,
    0xFFF60000, 0x0018FFE8, 0x000E0010, 0x00300001, 0x00480050, 0x00080060,
    0xFFEB000B, 0x00080008, 0x0001000E, 0x00780038, 0x00800040, 0xFFF10000,
    0x0008FFEA, 0x000E0008, 0x00380001, 0x00400070, 0x00000078, 0xFFF0FFF6,
    0x00280018, 0x0001000E, 0x00280048, 0x00500060, 0x00000000,
};

u32 D_800D54C4[] = {
    0x00000003, 0xFFEAFFF0, 0x00100008, 0x0001000E, 0x00600030, 0x00700038,
    0xFFF60000, 0x0018FFEA, 0x000E0018, 0x00480001, 0x00600050, 0x00080068,
    0x0000FFF8, 0x00180020, 0x0001000E, 0x00680040, 0x00800060, 0x00000000,
};

u32 D_800D550C[] = {
    0x00000004, 0xFFEBFFFD, 0x00080008, 0x0001000E, 0x00600038, 0x00680040,
    0xFFF00000, 0x0008FFEA, 0x000E0010, 0x00300001, 0x00380060, 0x00000070,
    0xFFEAFFF6, 0x00180018, 0x0001000E, 0x00500048, 0x00680060, 0xFFF80008,
    0x00200000, 0x000E0018, 0x00400001, 0x00600068, 0x00000080,
};

u32 D_800D5568[] = {
    0x00000004, 0xFFEBFFFD, 0x00080008, 0x0001000E, 0x00680038, 0x00700040,
    0xFFF00000, 0x0008FFEA, 0x000E0010, 0x00300001, 0x00380060, 0x00000070,
    0xFFEAFFF6, 0x00180018, 0x0001000E, 0x00500048, 0x00680060, 0xFFF80008,
    0x00200000, 0x000E0018, 0x00400001, 0x00600068, 0x00000080,
};

u32 D_800D55C4[] = {
    0x00000003, 0xFFEAFFEF, 0x00100008, 0x0001000E, 0x00600030, 0x00700038,
    0xFFF50000, 0x0018FFEA, 0x000E0018, 0x00480001, 0x00600050, 0x00080068,
    0x0000FFF7, 0x00180020, 0x0001000E, 0x00680040, 0x00800060, 0x00000000,
};

u16 D_800D560C[] = {
    0x0001, 0x0000, 0xFFF4, 0xFFFC, 0x0018, 0x0008, 0x0008,
    0x0001, 0x0030, 0x0048, 0x0048, 0x0050, 0x0000,
#ifdef VERSION_US // dirty data
    0x0D20,
#endif
};

u32 D_800D563C[];
u32 D_800D5658[];
u32 D_800D5674[];
u16 D_800D5690[];

s16* D_800D5628[] = {
    NULL,
    (s16*)D_800D563C,
    (s16*)D_800D5658,
    (s16*)D_800D5674,
    (s16*)D_800D5690,
};

u32 D_800D563C[] = {
    0x00200001, 0x00000000, 0x00180060, 0x0070019F,
    0x00000080, 0x001800E0, 0x00000000,
};

u32 D_800D5658[] = {
    0x00000001, 0x00000000, 0x00180060, 0x0070019F,
    0x00180080, 0x003000E0, 0x00000000,
};

u32 D_800D5674[] = {
    0x00000001, 0x00000000, 0x00180060, 0x0070019F,
    0x00300080, 0x004800E0, 0x00000000,
};

u16 D_800D5690[] = {
    0x0001, 0x0000, 0x0000, 0x0000, 0x0060, 0x0018, 0x019F,
    0x0070, 0x0080, 0x0048, 0x00E0, 0x0060, 0x0000,
#ifdef VERSION_US // dirty data
    0x0A0D,
#endif
};

u32 D_800D56E8[];
u32 D_800D5704[];
u32 D_800D5720[];
u32 D_800D573C[];
u32 D_800D5758[];
u32 D_800D5774[];
u32 D_800D5790[];
u32 D_800D57AC[];
u32 D_800D57C8[];
u32 D_800D57E4[];
u32 D_800D5800[];
u32 D_800D5830[];
u16 D_800D584C[];

s16* D_800D56AC[] = {
    NULL,
    (s16*)D_800D56E8,
    (s16*)D_800D5704,
    (s16*)D_800D5720,
    (s16*)D_800D573C,
    (s16*)D_800D5758,
    (s16*)D_800D5774,
    (s16*)D_800D5790,
    (s16*)D_800D57AC,
    (s16*)D_800D57C8,
    (s16*)D_800D57E4,
    (s16*)D_800D5800,
    (s16*)D_800D5830,
    (s16*)D_800D584C,
    NULL,
};

u32 D_800D56E8[] = {
    0x00180001, 0xFFF4FFF5, 0x00180018, 0x00000000,
    0x00680000, 0x00800018, 0x00000000,
};

u32 D_800D5704[] = {
    0x00300001, 0xFFEDFFF0, 0x00200028, 0x00000000,
    0x00000000, 0x00200028, 0x00000000,
};

u32 D_800D5720[] = {
    0x00200001, 0xFFEBFFF0, 0x00200028, 0x00000000,
    0x00000028, 0x00200050, 0x00000000,
};

u32 D_800D573C[] = {
    0x00200001, 0xFFEBFFF1, 0x00200028, 0x00000000,
    0x00000050, 0x00200078, 0x00000000,
};

u32 D_800D5758[] = {
    0x00100001, 0xFFE7FFF0, 0x00280028, 0x00000000,
    0x00200000, 0x00480028, 0x00000000,
};

u32 D_800D5774[] = {
    0x00000001, 0xFFF0FFEF, 0x00280028, 0x00000000,
    0x00200028, 0x00480050, 0x00000000,
};

u32 D_800D5790[] = {
    0x00000001, 0xFFEFFFEF, 0x00280028, 0x00000000,
    0x00200050, 0x00480078, 0x00000000,
};

u32 D_800D57AC[] = {
    0x00100001, 0xFFF1FFED, 0x00200028, 0x00000000,
    0x00480000, 0x00680028, 0x00000000,
};

u32 D_800D57C8[] = {
    0x00000001, 0xFFF0FFEF, 0x00200020, 0x00000000,
    0x00480028, 0x00680048, 0x00000000,
};

u32 D_800D57E4[] = {
    0x00000001, 0xFFF0FFF1, 0x00200020, 0x00000000,
    0x00480048, 0x00680068, 0x00000000,
};

u32 D_800D5800[] = {
    0x00040002, 0xFFF7FFED, 0x00100010, 0x00000000, 0x00680070, 0x00780080,
    0xFFFD0004, 0x0010FFEF, 0x00000020, 0x00700000, 0x00800048, 0x00000068,
};

u32 D_800D5830[] = {
    0x00080001, 0xFFEFFFFF, 0x00180010, 0x00000000,
    0x00680018, 0x00800028, 0x00000000,
};

u16 D_800D584C[] = {
    0x0001, 0x0008, 0x0003, 0xFFEF, 0x0010, 0x0018, 0x0000,
    0x0000, 0x0028, 0x0068, 0x0038, 0x0080, 0x0000,
#ifdef VERSION_US // dirty data
    0x2C35,
#endif
};

u32 D_800D59D8[];
u32 D_800D59F4[];
u32 D_800D5A24[];
u32 D_800D5A54[];
u32 D_800D5A84[];
u32 D_800D5AB4[];
u32 D_800D5AE4[];
u32 D_800D5B14[];
u32 D_800D5B44[];
u32 D_800D5B74[];
u32 D_800D5BA4[];
u32 D_800D5BD4[];
u32 D_800D5C04[];
u32 D_800D5C34[];
u32 D_800D5C64[];
u32 D_800D5C94[];
u32 D_800D5CC4[];
u32 D_800D5CF4[];
u32 D_800D5D10[];
u32 D_800D5D2C[];
u32 D_800D5D48[];
u32 D_800D5D78[];
u32 D_800D5DA8[];
u32 D_800D5DD8[];
u32 D_800D5E08[];
u32 D_800D5E38[];
u32 D_800D5E68[];
u32 D_800D5E98[];
u32 D_800D5EC8[];
u32 D_800D5EF8[];
u32 D_800D5F28[];
u32 D_800D5F44[];
u32 D_800D5F60[];
u32 D_800D5F90[];
u32 D_800D5FC0[];
u32 D_800D5FDC[];
u32 D_800D600C[];
u32 D_800D603C[];
u32 D_800D606C[];
u32 D_800D609C[];
u32 D_800D60CC[];
u32 D_800D60FC[];
u32 D_800D612C[];
u32 D_800D615C[];
u32 D_800D618C[];
u32 D_800D61BC[];
u32 D_800D61EC[];
u32 D_800D621C[];
u32 D_800D624C[];
u32 D_800D627C[];
u32 D_800D62AC[];
u32 D_800D62DC[];
u32 D_800D62F8[];
u32 D_800D6314[];
u32 D_800D6330[];
u32 D_800D6360[];
u32 D_800D6390[];
u32 D_800D63C0[];
u32 D_800D63F0[];
u32 D_800D6420[];
u32 D_800D6450[];
u32 D_800D6480[];
u32 D_800D64B0[];
u32 D_800D64E0[];
u32 D_800D6510[];
u32 D_800D652C[];
u32 D_800D6548[];
u32 D_800D6578[];
u32 D_800D65A8[];
u32 D_800D65D8[];
u32 D_800D6608[];
u32 D_800D6638[];
u32 D_800D6654[];
u32 D_800D6670[];
u32 D_800D668C[];
u32 D_800D66A8[];
u32 D_800D66C4[];
u32 D_800D66E0[];
u32 D_800D66FC[];
u32 D_800D6718[];
u32 D_800D6734[];
u32 D_800D6750[];
u32 D_800D676C[];
u32 D_800D6788[];
u32 D_800D67A4[];
u32 D_800D67C0[];
u32 D_800D67DC[];
u32 D_800D67F8[];
u32 D_800D6814[];
u16 D_800D6830[];

s16* D_800D5868[] = {
    NULL,
    (s16*)D_800D59D8,
    (s16*)D_800D59F4,
    (s16*)D_800D5A24,
    (s16*)D_800D5A54,
    (s16*)D_800D5A84,
    (s16*)D_800D5AB4,
    (s16*)D_800D5AE4,
    (s16*)D_800D5B14,
    (s16*)D_800D5B44,
    (s16*)D_800D5B74,
    (s16*)D_800D5BA4,
    (s16*)D_800D5BD4,
    (s16*)D_800D5C04,
    (s16*)D_800D5C34,
    (s16*)D_800D5C64,
    (s16*)D_800D5C94,
    (s16*)D_800D5CC4,
    (s16*)D_800D5CF4,
    (s16*)D_800D5D10,
    (s16*)D_800D5D2C,
    (s16*)D_800D5D48,
    (s16*)D_800D5D78,
    (s16*)D_800D5DA8,
    (s16*)D_800D5DD8,
    (s16*)D_800D5E08,
    (s16*)D_800D5E38,
    (s16*)D_800D5E68,
    (s16*)D_800D5E98,
    (s16*)D_800D5EC8,
    (s16*)D_800D5EF8,
    (s16*)D_800D5F28,
    (s16*)D_800D5F44,
    (s16*)D_800D5F60,
    (s16*)D_800D5F90,
    (s16*)D_800D5FC0,
    (s16*)D_800D5FDC,
    (s16*)D_800D600C,
    (s16*)D_800D603C,
    (s16*)D_800D606C,
    (s16*)D_800D609C,
    (s16*)D_800D60CC,
    (s16*)D_800D60FC,
    (s16*)D_800D612C,
    (s16*)D_800D615C,
    (s16*)D_800D618C,
    (s16*)D_800D61BC,
    (s16*)D_800D61EC,
    (s16*)D_800D621C,
    (s16*)D_800D624C,
    (s16*)D_800D627C,
    (s16*)D_800D62AC,
    (s16*)D_800D62DC,
    (s16*)D_800D62F8,
    (s16*)D_800D6314,
    (s16*)D_800D6330,
    (s16*)D_800D6360,
    (s16*)D_800D6390,
    (s16*)D_800D63C0,
    (s16*)D_800D63F0,
    (s16*)D_800D6420,
    (s16*)D_800D6450,
    (s16*)D_800D6480,
    (s16*)D_800D64B0,
    (s16*)D_800D64E0,
    (s16*)D_800D6510,
    (s16*)D_800D652C,
    (s16*)D_800D6548,
    (s16*)D_800D6578,
    (s16*)D_800D65A8,
    (s16*)D_800D65D8,
    (s16*)D_800D6608,
    (s16*)D_800D6638,
    (s16*)D_800D6654,
    (s16*)D_800D6670,
    (s16*)D_800D668C,
    (s16*)D_800D66A8,
    (s16*)D_800D66C4,
    (s16*)D_800D66E0,
    (s16*)D_800D66FC,
    (s16*)D_800D6718,
    (s16*)D_800D6734,
    (s16*)D_800D6750,
    (s16*)D_800D676C,
    (s16*)D_800D6788,
    (s16*)D_800D67A4,
    (s16*)D_800D67C0,
    (s16*)D_800D67DC,
    (s16*)D_800D67F8,
    (s16*)D_800D6814,
    (s16*)D_800D6830,
    NULL,
};

u32 D_800D59D8[] = {
    0x00000001, 0xFFFFFFF3, 0x00100018, 0x00000000,
    0x00580050, 0x00680068, 0x00000000,
};

u32 D_800D59F4[] = {
    0x01200002, 0x0002FFF4, 0x00180010, 0x00000000, 0x00000020, 0x00180030,
    0xFFF80030, 0x00100002, 0x00010018, 0x00000000, 0x00100000, 0x00000018,
};

u32 D_800D5A24[] = {
    0x01200002, 0x0002FFF4, 0x00180010, 0x00000000, 0x00000030, 0x00180040,
    0xFFF80020, 0x00100002, 0x00010018, 0x00100000, 0x00200000, 0x00000018,
};

u32 D_800D5A54[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000040, 0x00180050,
    0xFFF40020, 0x00100002, 0x00010018, 0x00200000, 0x00300000, 0x00000018,
};

u32 D_800D5A84[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000050, 0x00180060,
    0xFFF40020, 0x00100002, 0x00010018, 0x00300000, 0x00400000, 0x00000018,
};

u32 D_800D5AB4[] = {
    0x01200002, 0x0002FFFC, 0x00180010, 0x00000000, 0x00000060, 0x00180070,
    0xFFF80020, 0x00100002, 0x00010018, 0x00400000, 0x00500000, 0x00000018,
};

u32 D_800D5AE4[] = {
    0x01240002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000070, 0x00180080,
    0xFFF80020, 0x00100002, 0x00010018, 0x00500000, 0x00600000, 0x00000018,
};

u32 D_800D5B14[] = {
    0x01300002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000000, 0x00180010,
    0xFFFC0020, 0x00100002, 0x00010018, 0x00600000, 0x00700000, 0x00000018,
};

u32 D_800D5B44[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000010, 0x00180020,
    0xFFF80024, 0x00100002, 0x00010018, 0x00700000, 0x00800000, 0x00000018,
};

u32 D_800D5B74[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000040, 0x00180050,
    0xFFF80030, 0x00100002, 0x00010018, 0x00000000, 0x00100000, 0x00000018,
};

u32 D_800D5BA4[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000050, 0x00180060,
    0xFFF80020, 0x00100002, 0x00010018, 0x00100000, 0x00200000, 0x00000018,
};

u32 D_800D5BD4[] = {
    0x01200002, 0x0002FFFC, 0x00180010, 0x00000000, 0x00000060, 0x00180070,
    0xFFF40020, 0x00100002, 0x00010018, 0x00200000, 0x00300000, 0x00000018,
};

u32 D_800D5C04[] = {
    0x01240002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000070, 0x00180080,
    0xFFF40020, 0x00100002, 0x00010018, 0x00300000, 0x00400000, 0x00000018,
};

u32 D_800D5C34[] = {
    0x01300002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000000, 0x00180010,
    0xFFF80020, 0x00100002, 0x00010018, 0x00400000, 0x00500000, 0x00000018,
};

u32 D_800D5C64[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000010, 0x00180020,
    0xFFF80020, 0x00100002, 0x00010018, 0x00500000, 0x00600000, 0x00000018,
};

u32 D_800D5C94[] = {
    0x01200002, 0x0002FFF4, 0x00180010, 0x00000000, 0x00000020, 0x00180030,
    0xFFFC0020, 0x00100002, 0x00010018, 0x00600000, 0x00700000, 0x00000018,
};

u32 D_800D5CC4[] = {
    0x01200002, 0x0002FFF4, 0x00180010, 0x00000000, 0x00000030, 0x00180040,
    0xFFF80024, 0x00100002, 0x00010018, 0x00700000, 0x00800000, 0x00000018,
};

u32 D_800D5CF4[] = {
    0x01000001, 0x000AFFF8, 0x00100010, 0x00010000,
    0x00180020, 0x00280030, 0x00000000,
};

u32 D_800D5D10[] = {
    0x01000001, 0x000AFFF8, 0x00100010, 0x00010000,
    0x00180030, 0x00280040, 0x00000000,
};

u32 D_800D5D2C[] = {
    0x01100001, 0x000AFFF8, 0x00100010, 0x00010000,
    0x00180000, 0x00280010, 0x00000000,
};

u32 D_800D5D48[] = {
    0x01100002, 0x0008FFF3, 0x00100010, 0x00000000, 0x00500000, 0x00600010,
    0xFFEE0020, 0x00100001, 0x00010018, 0x00300000, 0x00400000, 0x00000018,
};

u32 D_800D5D78[] = {
    0x01000002, 0x0008FFFB, 0x00100010, 0x00000000, 0x00500010, 0x00600020,
    0xFFF30000, 0x00100006, 0x00010018, 0x00100000, 0x00200030, 0x00000048,
};

u32 D_800D5DA8[] = {
    0x01000002, 0x0008FFFB, 0x00100010, 0x00000000, 0x00500020, 0x00600030,
    0xFFF60000, 0x00100009, 0x00010010, 0x00200000, 0x00300030, 0x00000040,
};

u32 D_800D5DD8[] = {
    0x01000002, 0x0008FFFB, 0x00100018, 0x00000000, 0x00480030, 0x00580048,
    0xFFFE0000, 0x00180006, 0x00010010, 0x00300000, 0x00480048, 0x00000058,
};

u32 D_800D5E08[] = {
    0x01100002, 0x0008FFF7, 0x00180010, 0x00000000, 0x00300000, 0x00480010,
    0xFFF70020, 0x00100004, 0x00010018, 0x00300000, 0x00400000, 0x00000018,
};

u32 D_800D5E38[] = {
    0x01000002, 0x0008FFF7, 0x00180010, 0x00000000, 0x00300010, 0x00480020,
    0xFFFA0000, 0x00100009, 0x00010018, 0x00200000, 0x00300030, 0x00000048,
};

u32 D_800D5E68[] = {
    0x01000002, 0x0008FFF7, 0x00180010, 0x00000000, 0x00300020, 0x00480030,
    0xFFFC0020, 0x00100002, 0x00010018, 0x00500000, 0x00600000, 0x00000018,
};

u32 D_800D5E98[] = {
    0x01200002, 0x0002FFF8, 0x00180010, 0x00000000, 0x00000050, 0x00180060,
    0xFFF70000, 0x00100009, 0x00010018, 0x00300000, 0x00400030, 0x00000048,
};

u32 D_800D5EC8[] = {
    0x01000002, 0x0008FFF7, 0x00180010, 0x00000000, 0x00300020, 0x00480030,
    0xFFF50000, 0x00100009, 0x00010018, 0x00100000, 0x00200030, 0x00000048,
};

u32 D_800D5EF8[] = {
    0x01000002, 0x0008FFF7, 0x00180010, 0x00000000, 0x00300030, 0x00480040,
    0xFFF70010, 0x0010000A, 0x00010018, 0x00000000, 0x00100030, 0x00000048,
};

u32 D_800D5F28[] = {
    0x00040001, 0xFFFFFFF3, 0x00100018, 0x00000000,
    0x00580068, 0x00680080, 0x00000000,
};

u32 D_800D5F44[] = {
    0x00000001, 0xFFFFFFF8, 0x00100010, 0x00000000,
    0x00680060, 0x00780070, 0x00000000,
};

u32 D_800D5F60[] = {
    0x01200002, 0x0002FFF4, 0x00180010, 0x00010000, 0x00000030, 0x00180040,
    0xFFFD0020, 0x00100002, 0x00010018, 0x00300001, 0x00400000, 0x00000018,
};

u32 D_800D5F90[] = {
    0x01200002, 0x0002FFFE, 0x00180010, 0x00010000, 0x00000040, 0x00180050,
    0xFFF20120, 0x00100002, 0x00000018, 0x00400001, 0x00500000, 0x00000018,
};

u32 D_800D5FC0[] = {
    0x00000001, 0xFFFFFFF9, 0x00100010, 0x00010000,
    0x00180060, 0x00280070, 0x00000000,
};

u32 D_800D5FDC[] = {
    0x01000002, 0x0000FFFC, 0x00180010, 0x00000000, 0x00180020, 0x00300030,
    0xFFF80010, 0x00100000, 0x00010018, 0x00000000, 0x00100018, 0x00000030,
};

u32 D_800D600C[] = {
    0x01000002, 0x0000FFFC, 0x00180010, 0x00000000, 0x00180030, 0x00300040,
    0xFFF80000, 0x00100000, 0x00010018, 0x00100000, 0x00200018, 0x00000030,
};

u32 D_800D603C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180040, 0x00300050,
    0xFFFC0000, 0x00100000, 0x00010018, 0x00200000, 0x00300018, 0x00000030,
};

u32 D_800D606C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180050, 0x00300060,
    0xFFFC0000, 0x00100000, 0x00010018, 0x00300000, 0x00400018, 0x00000030,
};

u32 D_800D609C[] = {
    0x01000002, 0x0000FFF4, 0x00180010, 0x00000000, 0x00180060, 0x00300070,
    0xFFF80000, 0x00100000, 0x00010018, 0x00400000, 0x00500018, 0x00000030,
};

u32 D_800D60CC[] = {
    0x01040002, 0x0000FFF4, 0x00180010, 0x00000000, 0x00180070, 0x00300080,
    0xFFF80000, 0x00100000, 0x00010018, 0x00500000, 0x00600018, 0x00000030,
};

u32 D_800D60FC[] = {
    0x01100002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180000, 0x00300010,
    0xFFF40000, 0x00100000, 0x00010018, 0x00600000, 0x00700018, 0x00000030,
};

u32 D_800D612C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180010, 0x00300020,
    0xFFF40004, 0x00100000, 0x00010018, 0x00700000, 0x00800018, 0x00000030,
};

u32 D_800D615C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180040, 0x00300050,
    0xFFF80010, 0x00100000, 0x00010018, 0x00000000, 0x00100018, 0x00000030,
};

u32 D_800D618C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180050, 0x00300060,
    0xFFF80000, 0x00100000, 0x00010018, 0x00100000, 0x00200018, 0x00000030,
};

u32 D_800D61BC[] = {
    0x01000002, 0x0000FFF4, 0x00180010, 0x00000000, 0x00180060, 0x00300070,
    0xFFFC0000, 0x00100000, 0x00010018, 0x00200000, 0x00300018, 0x00000030,
};

u32 D_800D61EC[] = {
    0x01040002, 0x0000FFF4, 0x00180010, 0x00000000, 0x00180070, 0x00300080,
    0xFFFC0000, 0x00100000, 0x00010018, 0x00300000, 0x00400018, 0x00000030,
};

u32 D_800D621C[] = {
    0x01100002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180000, 0x00300010,
    0xFFF80000, 0x00100000, 0x00010018, 0x00400000, 0x00500018, 0x00000030,
};

u32 D_800D624C[] = {
    0x01000002, 0x0000FFF8, 0x00180010, 0x00000000, 0x00180010, 0x00300020,
    0xFFF80000, 0x00100000, 0x00010018, 0x00500000, 0x00600018, 0x00000030,
};

u32 D_800D627C[] = {
    0x01000002, 0x0000FFFC, 0x00180010, 0x00000000, 0x00180020, 0x00300030,
    0xFFF40000, 0x00100000, 0x00010018, 0x00600000, 0x00700018, 0x00000030,
};

u32 D_800D62AC[] = {
    0x01000002, 0x0000FFFC, 0x00180010, 0x00000000, 0x00180030, 0x00300040,
    0xFFF40004, 0x00100000, 0x00010018, 0x00700000, 0x00800018, 0x00000030,
};

u32 D_800D62DC[] = {
    0x01000001, 0x0008FFF8, 0x00100010, 0x00010000,
    0x00180040, 0x00280050, 0x00000000,
};

u32 D_800D62F8[] = {
    0x01000001, 0x0008FFF8, 0x00100010, 0x00010000,
    0x00180050, 0x00280060, 0x00000000,
};

u32 D_800D6314[] = {
    0x01000001, 0x0008FFF8, 0x00100010, 0x00010000,
    0x00180010, 0x00280020, 0x00000000,
};

u32 D_800D6330[] = {
    0x01180002, 0x0005FFF0, 0x00180018, 0x00000000, 0x00680000, 0x00800018,
    0xFFF80004, 0x00100001, 0x00010018, 0x00700000, 0x00800018, 0x00000030,
};

u32 D_800D6360[] = {
    0x01080002, 0x0005FFF0, 0x00180018, 0x00000000, 0x00680018, 0x00800030,
    0xFFF50004, 0x00100001, 0x00010018, 0x00700000, 0x00800018, 0x00000030,
};

u32 D_800D6390[] = {
    0x01080002, 0x0005FFF0, 0x00180018, 0x00000000, 0x00680030, 0x00800048,
    0xFFF30008, 0x00180005, 0x00010018, 0x00300000, 0x00480068, 0x00000080,
};

u32 D_800D63C0[] = {
    0x01000002, 0x0005FFF0, 0x00100018, 0x00000000, 0x00680048, 0x00780060,
    0xFFEF0000, 0x00180003, 0x00010010, 0x00480000, 0x00600068, 0x00000078,
};

u32 D_800D63F0[] = {
    0x01000002, 0x0005FFF9, 0x00180010, 0x00000000, 0x00300040, 0x00480050,
    0xFFF70000, 0x00100004, 0x00010018, 0x00400000, 0x00500030, 0x00000048,
};

u32 D_800D6420[] = {
    0x01000002, 0x0005FFF9, 0x00180010, 0x00000000, 0x00300050, 0x00480060,
    0xFFF70000, 0x00100007, 0x00010018, 0x00600000, 0x00700030, 0x00000048,
};

u32 D_800D6450[] = {
    0x01000002, 0x0005FFFA, 0x00180010, 0x00000000, 0x00300060, 0x00480070,
    0xFFFD0000, 0x00100006, 0x00010018, 0x00600000, 0x00700030, 0x00000048,
};

u32 D_800D6480[] = {
    0x01040002, 0x0005FFFA, 0x00180010, 0x00000000, 0x00300070, 0x00480080,
    0xFFFD0004, 0x00100005, 0x00010018, 0x00700000, 0x00800030, 0x00000048,
};

u32 D_800D64B0[] = {
    0x01000002, 0x0005FFFA, 0x00180010, 0x00000000, 0x00300050, 0x00480060,
    0xFFFC0000, 0x00100006, 0x00010018, 0x00600000, 0x00700030, 0x00000048,
};

u32 D_800D64E0[] = {
    0x01000002, 0x0005FFF9, 0x00180010, 0x00000000, 0x00300040, 0x00480050,
    0xFFFC0000, 0x00100008, 0x00010018, 0x00600000, 0x00700030, 0x00000048,
};

u32 D_800D6510[] = {
    0x00040001, 0xFFFDFFF9, 0x00100010, 0x00010000,
    0x00100070, 0x00200080, 0x00000000,
};

u32 D_800D652C[] = {
    0x00240001, 0xFFFDFFF9, 0x00100010, 0x00010001,
    0x00000070, 0x00100080, 0x00000000,
};

u32 D_800D6548[] = {
    0x01200002, 0x0000FFF7, 0x00180010, 0x00010000, 0x00000050, 0x00180060,
    0xFFFD0020, 0x00100000, 0x00010018, 0x00500001, 0x00600000, 0x00000018,
};

u32 D_800D6578[] = {
    0x01200002, 0x0000FFFD, 0x00180010, 0x00010001, 0x00000060, 0x00180070,
    0xFFF50120, 0x00100000, 0x00010018, 0x00600001, 0x00700000, 0x00000018,
};

u32 D_800D65A8[] = {
    0x01000002, 0x0000FFFC, 0x00180010, 0x00000000, 0x00180030, 0x00300040,
    0xFFF80000, 0x00100000, 0x00010018, 0x00500000, 0x00600018, 0x00000030,
};

u32 D_800D65D8[] = {
    0x01300002, 0x0002FFF9, 0x00180010, 0x00000000, 0x00000000, 0x00180010,
    0xFFF50024, 0x00100002, 0x00010018, 0x00700000, 0x00800000, 0x00000018,
};

u32 D_800D6608[] = {
    0x01000002, 0x0000FFF7, 0x00180010, 0x00000000, 0x00180040, 0x00300050,
    0xFFFC0000, 0x00100000, 0x00010018, 0x00500000, 0x00600018, 0x00000030,
};

u32 D_800D6638[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x00000000,
    0x00480068, 0x00580078, 0x00000000,
};

u32 D_800D6654[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x00000000,
    0x00480058, 0x00580068, 0x00000000,
};

u32 D_800D6670[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x00000000,
    0x00480048, 0x00580058, 0x00000000,
};

u32 D_800D668C[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x00000000,
    0x00580030, 0x00680040, 0x00000000,
};

u32 D_800D66A8[] = {
    0x00000001, 0xFFF8FFF8, 0x00100010, 0x00000000,
    0x00580040, 0x00680050, 0x00000000,
};

u32 D_800D66C4[] = {
    0x00040001, 0xFFFCFFF8, 0x00080010, 0x00000000,
    0x00680070, 0x00700080, 0x00000000,
};

u32 D_800D66E0[] = {
    0x00040001, 0xFFFCFFF8, 0x00080010, 0x00000000,
    0x00700070, 0x00780080, 0x00000000,
};

u32 D_800D66FC[] = {
    0x000C0001, 0xFFFCFFF8, 0x00080010, 0x00000000,
    0x00780070, 0x00800080, 0x00000000,
};

u32 D_800D6718[] = {
    0x00300001, 0xFFF4FFF4, 0x00180018, 0x00010000,
    0x00000000, 0x00180018, 0x00000000,
};

u32 D_800D6734[] = {
    0x00200001, 0xFFF4FFF8, 0x00180010, 0x00010000,
    0x00000018, 0x00180028, 0x00000000,
};

u32 D_800D6750[] = {
    0x00200001, 0xFFF4FFFC, 0x00180008, 0x00010000,
    0x00000028, 0x00180030, 0x00000000,
};

u32 D_800D676C[] = {
    0x00040001, 0xFFFDFFB0, 0x00180070, 0x00010002,
    0x00280010, 0x00400080, 0x00000000,
};

u32 D_800D6788[] = {
    0x00100001, 0xFFF9FFC8, 0x00200058, 0x00010002,
    0x00400000, 0x00600058, 0x00000000,
};

u32 D_800D67A4[] = {
    0x00180001, 0xFFF9FFF0, 0x00200020, 0x00010000,
    0x00600000, 0x00800020, 0x00000000,
};

u32 D_800D67C0[] = {
    0x00040001, 0xFFF5FFEC, 0x00280028, 0x00010002,
    0x00400058, 0x00680080, 0x00000000,
};

u32 D_800D67DC[] = {
    0x00000001, 0xFFFCFFFC, 0x00080008, 0x00010000,
    0x00600020, 0x00680028, 0x00000000,
};

u32 D_800D67F8[] = {
    0x00000001, 0xFFFCFFFC, 0x00080008, 0x00010000,
    0x00600028, 0x00680030, 0x00000000,
};

u32 D_800D6814[] = {
    0x00000001, 0xFFFCFFFC, 0x00080008, 0x00010000,
    0x00600030, 0x00680038, 0x00000000,
};

u16 D_800D6830[] = {
    0x0001, 0x0000, 0xFFFC, 0xFFFC, 0x0008, 0x0008, 0x0000,
    0x0001, 0x0038, 0x0060, 0x0040, 0x0068, 0x0000,
#ifdef VERSION_US // dirty data
    0x2029,
#endif
};

s16 D_800D6864[];
s16 D_800D6880[];
s16 D_800D689C[];
s16 D_800D68B8[];

s16* D_800D684C[] = {
    NULL, D_800D6864, D_800D6880, D_800D689C, D_800D68B8, NULL,
};

s16 D_800D6864[] = {1, 16, -3, -4, 8, 8, 159, 32, 0, 104, 8, 112, 0, 0};

s16 D_800D6880[] = {1, 0, -3, -12, 8, 16, 159, 32, 8, 96, 16, 112, 0, 0};

s16 D_800D689C[] = {1, 0, -3, -12, 8, 16, 159, 32, 16, 96, 24, 112, 0, 0};

s16 D_800D68B8[] = {
    1,      0, -3, -12, 16, 16, 159, 32, 24, 96, 40, 112, 0,
#ifdef VERSION_US // dirty data
    0x3020,
#endif
};

u16 D_800D68D4[] = {
#include "gen/D_800D68D4.h"
};

u16 D_800D68F4[] = {
#include "gen/D_800D68F4.h"
};

u16 D_800D6914[] = {
#include "gen/D_800D6914.h"
};

u16 D_800D6934[] = {
#include "gen/D_800D6934.h"
};

u16 D_800D6954[] = {
#include "gen/D_800D6954.h"
};

u16 D_800D6974[] = {
#include "gen/D_800D6974.h"
};

u16 D_800D6994[] = {
#include "gen/D_800D6994.h"
};

u16 D_800D69B4[] = {
#include "gen/D_800D69B4.h"
};

u16 D_800D69D4[] = {
#include "gen/D_800D69D4.h"
};

u16 D_800D69F4[] = {
#include "gen/D_800D69F4.h"
};

u16 D_800D6A14[] = {
#include "gen/D_800D6A14.h"
};

u16 D_800D6A34[] = {
#include "gen/D_800D6A34.h"
};

u16 D_800D6AD4[] = {
#include "gen/D_800D6AD4.h"
};

u16 D_800D6CD4[] = {
#include "gen/D_800D6CD4.h"
};

u16 D_800D6ED4[] = {
#include "gen/D_800D6ED4.h"
};

u16 D_800D70D4[] = {
#include "gen/D_800D70D4.h"
};

u16 D_800D72D4[] = {
#include "gen/D_800D72D4.h"
};
