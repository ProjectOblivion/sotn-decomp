// SPDX-License-Identifier: AGPL-3.0-or-later
#include "dra.h"

AnimationFrame D_800AE294[] = {
    {8, 1}, {8, 2}, {8, 3}, {8, 4}, {-1, 0},
};

static u32 D_800AE2A8[] = {
    0x027A0004, 0x027B0050, 0x0000FFFF, 0x027B0008, 0x127C0018, 0x00010000,
};

static u32 D_800AE2C0[] = {
    0x02790050,
    0x0000FFFF,
};

static u32 D_800AE2C8[] = {
    0x020100FF, 0x020100FF, 0x020100FF, 0x020100FF, 0x0006FFFE,
};

static u32 D_800AE2DC[] = {
    0x024F00FF,
    0x00000000,
};

static u32 D_800AE2E4[] = {
    0x0010FFFD, 0x0011FFFD, 0x02130006, 0x02140006, 0x02150006,
    0x02160006, 0x02170006, 0x02180006, 0x0002FFFE,
};

static u32 D_800AE308[] = {
    0x02130004, 0x02140004, 0x02150004, 0x02160004,
    0x02170004, 0x02180004, 0x0000FFFF,
};

static u32 D_800AE324[] = {
    0x02130005, 0x02140005, 0x02150005, 0x02160005,
    0x02170005, 0x02180005, 0x0000FFFF,
};

static u32 D_800AE340[] = {
    0x04560006, 0x02570006, 0x02580006, 0x02590006, 0x025A0006,
    0x025B0005, 0x025C0003, 0x025B0003, 0x025C0002, 0x025D0002,
    0x025C0002, 0x025D0080, 0x0006FFFE,
};

static u32 D_800AE374[] = {
    0x025D00C0, 0x025C0007, 0x025B0003, 0x025C0004,
    0x025D000B, 0x025E0008, 0x024F00A0, 0x0003FFFE,
};

static u32 D_800AE394[] = {
    0x02190003, 0x021A0003, 0x021B0003, 0x021C0003, 0x081D0003, 0x081E0003,
    0x0A1F0003, 0x0A200003, 0x0A210003, 0x0A220003, 0x0A230003, 0x0A240003,
    0x08250003, 0x08260003, 0x08270003, 0x08280003, 0x0008FFFE,
};

static u32 D_800AE3D8[] = {
    0x022C0003, 0x022D0003, 0x022E0003, 0x022F0003,
    0x02300003, 0x02310003, 0x0001FFFD, 0x000DFFFE,
};

static u32 D_800AE3F8[] = {
    0x02390002, 0x023A0003, 0x023B0003, 0x023C0004, 0x023D0004, 0x083E0005,
    0x083F0007, 0x0A400005, 0x0A410003, 0x08420003, 0x000CFFFE,
};

static u32 D_800AE424[] = {
    0x0000FFFD,
    0x0004FFFE,
};

static u32 D_800AE42C[] = {
    0x0000FFFD,
    0x0005FFFE,
};

static AnimationFrame D_800AE434[] = {
    {0x0002, 0x0239}, {0x0002, 0x023A}, {0x0002, 0x023B}, {0x0003, 0x023C},
    {0x0003, 0x023D}, {0x0003, 0x083E}, {0x0003, 0x083F}, {0x0003, 0x0A40},
    {0x0002, 0x0A41}, {0x0002, 0x0842}, {0xFFFF, 0x0000},
};

static AnimationFrame D_800AE460[] = {
    {0x0003, 0x0232}, {0x0003, 0x0233}, {0x0003, 0x0234}, {0x0003, 0x0235},
    {0x0003, 0x0236}, {0x0003, 0x0237}, {0x0003, 0x0238}, {0xFFFF, 0x0000},
};

static u32 D_800AE480[] = {
    0x0001FFFD,
    0x000DFFFE,
};

static u32 D_800AE488[] = {
    0x02290003, 0x022A0002, 0x022B0003, 0x022C0002, 0x022D0003, 0x022E0002,
    0x022F0003, 0x02300002, 0x02310003, 0x02320002, 0x02330003, 0x02340002,
    0x02350003, 0x02360002, 0x02370003, 0x02380002, 0x00000000,
};

static u32 D_800AE4CC[] = {
    0x0002FFFD, 0x02500004, 0x02510004, 0x02520004, 0x02530004,
    0x02540004, 0x02550004, 0x02540004, 0x02550004, 0x0004FFFE,
};

static AnimationFrame D_800AE4F4[] = {
    {0x0004, 0x0C43}, {0x0004, 0x0C44}, {0x0004, 0x0C45}, {0x0004, 0x0C46},
    {0x0004, 0x0C47}, {0x0004, 0x0C48}, {0x0004, 0x0C49}, {0xFFFF, 0x0000},
};

static u32 D_800AE514[] = {
    0x0002FFFD, 0x024A0004, 0x024B0004, 0x024C0004, 0x024D0004,
    0x024E0004, 0x024F0004, 0x024E0004, 0x024F0004, 0x0003FFFE,
};

static u32 D_800AE53C[] = {
    0x08420002, 0x0A410002, 0x0A400003, 0x083F0003, 0x083E0003, 0x000EFFFE,
};

static u32 D_800AE554[] = {
    0x04020002, 0x06030004, 0x06040004, 0x06050004,
    0x06060004, 0x06070004, 0x0003FFFD, 0x0000FFFF,
};

static AnimationFrame D_800AE574[] = {
    {0x0004, 0x0608}, {0x0004, 0x0609}, {0x0004, 0x060A}, {0x0004, 0x060B},
    {0x0004, 0x060C}, {0x0004, 0x060D}, {0x0004, 0x060E}, {0xFFFF, 0x0000},
};

static u32 D_800AE594[] = {
    0x060F00FF,
    0x0000FFFF,
};

static u32 D_800AE59C[] = {
    0x060F0010,
    0x0000FFFF,
};

static u32 D_800AE5A4[] = {
    0x060F0001, 0x06100003, 0x04110003, 0x02120003, 0x0000FFFF,
};

static u32 D_800AE5B8[] = {
    0x0003FFFD,
    0x0011FFFE,
};

static u32 D_800AE5C0[] = {
    0x04020001, 0x06040001, 0x06060001, 0x06080001,
    0x060A0001, 0x060C0001, 0x060E0001, 0x0000FFFF,
};

static u32 D_800AE5E0[] = {
    0x060F0006, 0x060F0006, 0x0410000C, 0x0211000C, 0x0212000C, 0x0000FFFF,
};

static u32 D_800AE5F8[] = {
    0x025F0005,
    0x02600005,
    0x0017FFFE,
};

static u32 D_800AE604[] = {
    0x02610005, 0x02620005, 0x02670005, 0x02680005, 0x02690040, 0x0000FFFF,
};

static u32 D_800AE61C[] = {
    0x0E630005,
    0x10640005,
    0x001AFFFE,
};

static u32 D_800AE628[] = {
    0x10640005,
    0x0E630005,
    0x0017FFFE,
};

static u32 D_800AE634[] = {
    0x10650003,
    0x10660003,
    0x00000000,
};

static u32 D_800AE640[] = {
    0x0E6A0003, 0x0E6B0004, 0x0E6C0004, 0x0E6D0004, 0x001CFFFE,
};

static u32 D_800AE654[] = {
    0x0E6E0008, 0x0E6F0005, 0x0E700005, 0x0E710005, 0x0E720041, 0x0000FFFF,
};

static u32 D_800AE66C[] = {
    0x0004FFFD, 0x02510004, 0x02520004, 0x02530004, 0x02540004,
    0x02550004, 0x02540004, 0x02550004, 0x0004FFFE,
};

static u32 D_800AE690[] = {
    0x08740005, 0x08750005, 0x04760005, 0x02770005, 0x02780005, 0x0000FFFF,
};

static u32 D_800AE6A8[] = {
    0x0004FFFD, 0x024C0004, 0x024D0004, 0x024E0004,
    0x024F0004, 0x024E0004, 0x024F0004, 0x0003FFFE,
};

static u32 D_800AE6C8[] = {
    0x0E710003,
    0x0E720042,
    0x0000FFFF,
};

static u32 D_800AE6D4[] = {
    0x10990002, 0x10980002, 0x10990004, 0x109A0003, 0x109B0003,
    0x10650003, 0x10660003, 0x10650003, 0x10660003, 0x0000FFFF,
};

static u32 D_800AE6FC[] = {
    0x025F0005,
    0x02600005,
    0x0017FFFE,
};

static u32 D_800AE708[] = {
    0x0E7300FF,
    0x00000000,
};

static u32 D_800AE710[] = {
    0x0E740003, 0x0E030003, 0x06040003, 0x06050003, 0x06060003, 0x06070003,
    0x06080003, 0x06090003, 0x060A0003, 0x060B0003, 0x060C0004, 0x060D0004,
    0x060E0005, 0x060C0007, 0x060B0005, 0x060A0004, 0x06090004, 0x06080004,
    0x06070004, 0x06060004, 0x06050004, 0x06040004, 0x06030004, 0x067400FF,
    0x067400FF, 0x0000FFFF,
};

static u32 D_800AE778[] = {
    0x069C0005,
    0x029D0006,
    0x0A9E0006,
    0x0000FFFF,
};

static u32 D_800AE788[] = {
    0x127C0002, 0x127D0002, 0x127E0002, 0x127F0002, 0x127E0003,
    0x127C0002, 0x127D0003, 0x127C0004, 0x12800006, 0x0000FFFF,
};

static u32 D_800AE7B0[] = {
    0x06810002, 0x06820002, 0x06830002, 0x06840002, 0x06830003,
    0x06810002, 0x06820003, 0x06810004, 0x0000FFFF,
};

static u32 D_800AE7D4[] = {
    0x10850002, 0x10860002, 0x10870002, 0x10860003, 0x10850003, 0x0000FFFF,
};

static u32 D_800AE7EC[] = {
    0x0E880002, 0x0E890002, 0x0E8A0002, 0x0E890003, 0x0E880003, 0x0000FFFF,
};

static u32 D_800AE804[] = {
    0x0E6E0003, 0x148B000B, 0x0E8C0005, 0x0E8D0005, 0x0E6E0007,
    0x0E6F0003, 0x0E700003, 0x0E710003, 0x0E7200FF, 0x0000FFFF,
};

static u32 D_800AE82C[] = {
    0x0E9F0030,
    0x0000FFFF,
};

static u32 D_800AE834[] = {
    0x0E9F0010,
    0x02A10007,
    0x02A2001C,
    0x0000FFFF,
};

static u32 D_800AE844[] = {
    0x02A30030,
    0x0000FFFF,
};

static u32 D_800AE84C[] = {
    0x0CA50009, 0x0CA60002, 0x0CA50002, 0x0CA60003, 0x0CA50003, 0x0CA60003,
    0x0CA50011, 0x0C9F0003, 0x0C110004, 0x0C120004, 0x0000FFFF,
};

static u32 D_800AE878[] = {
    0x08A70009, 0x08A80002, 0x08A70002, 0x08A80003, 0x08A70003, 0x08A80003,
    0x08A70011, 0x0C9F0003, 0x0C110004, 0x0C120004, 0x0000FFFF,
};

static u32 D_800AE8A4[] = {
    0x08A90009, 0x08AA0002, 0x08A90002, 0x08AA0003, 0x08A90003,
    0x08AA0003, 0x08A90011, 0x0C110003, 0x0C120003, 0x0000FFFF,
};

static u32 D_800AE8CC[] = {
    0x08AB0009, 0x08AC0002, 0x08AB0002, 0x08AC0003, 0x08AB0003,
    0x08AC0003, 0x08AB0011, 0x0C110003, 0x0C120003, 0x0000FFFF,
};

static u32 D_800AE8F4[] = {
    0x0E9F0002,
    0x0EA00002,
    0x00000000,
};

static u32 D_800AE900[] = {
    0x02A30002,
    0x02A40002,
    0x00000000,
};

static u32 D_800AE90C[] = {
    0x0E9F0005, 0x02A20005, 0x02A30005, 0x0CA50005, 0x08A90005, 0x00000000,
};

static u32 D_800AE924[] = {
    0x0EAD000F,
    0x0000FFFF,
};

static u32 D_800AE92C[] = {
    0x0EAE000F,
    0x0000FFFF,
};

static u32 D_800AE934[] = {
    0x0EAF000F,
    0x0000FFFF,
};

static u32 D_800AE93C[] = {
    0x0CA50005, 0x0CA60002, 0x0CA50002, 0x0CA60003, 0x0CA50003,
    0x0CA60003, 0x0CA50011, 0x0C110003, 0x0C120003, 0x0000FFFF,
};

static u32 D_800AE964[] = {
    0x0E9F0009, 0x02A10004, 0x02A20004, 0x08A90004, 0x08AA0004, 0x0EB10011,
    0x0EB20008, 0x0EB30008, 0x0E710005, 0x0E720042, 0x0000FFFF,
};

static u32 D_800AE990[] = {
    0x0EB50003, 0x0EB60003, 0x0EB70003, 0x0EB80003, 0x0EB40003, 0x0EB50004,
    0x0EB60004, 0x0EB70004, 0x0EB80004, 0x0EB40004, 0x0EB50005, 0x0EB60005,
    0x0EB70005, 0x0EB80005, 0x0EB40005, 0x0EB50006, 0x0EB60006, 0x0EB70006,
    0x0EB80006, 0x0EB40006, 0x0000FFFF,
};

static u32 D_800AE9E4[] = {
    0x0EB50002, 0x0EB60002, 0x0EB70002, 0x0EB80002, 0x0EB40002,
    0x001BFFFD, 0x0EB50007, 0x0EB60007, 0x0EB70007, 0x0EB80008,
    0x0EB40009, 0x0EB5000A, 0x0E9F0040, 0x0000FFFF,
};

static u32 D_800AEA1C[] = {
    0x06C70002, 0x06C80002, 0x06C90002, 0x06CA0002, 0x06CB0010,
    0x06CC0002, 0x06CD0002, 0x06CE0001, 0x06CF0001, 0x0000FFFF,
};

static u32 D_800AEA44[] = {
    0x001BFFFD, 0x0EB50007, 0x0EB60007, 0x0EB70007,
    0x0EA10008, 0x0EA20001, 0x0000FFFF,
};

static u32 D_800AEA60[] = {
    0x001BFFFD, 0x0EB50007, 0x0EB60007, 0x0EB70007, 0x0000FFFF,
};

static u32 D_800AEA74[] = {
    0x028E0018, 0x028F0004, 0x02900004, 0x02910004, 0x02920006, 0x02930007,
    0x02940004, 0x02950019, 0x02960004, 0x02970004, 0x02B00004, 0x02970002,
    0x02960002, 0x02950041, 0x02930009, 0x02920004, 0x02910003, 0x02900004,
    0x028F0004, 0x028E0004, 0x0000FFFF,
};

static u32 D_800AEAC8[] = {
    0x028E0004,
    0x0000FFFF,
};

static u32 D_800AEAD0[] = {
    0x0005FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AEADC[] = {
    0x12BF0004, 0x02C00006, 0x02C10005, 0x02C20005,
    0x02C30004, 0x02540003, 0x02550003, 0x0000FFFF,
};

static u32 D_800AEAFC[] = {
    0x12B90002, 0x12BA0001, 0x12BA0001, 0x12BA0001, 0x12BA0001,
    0x12BB0001, 0x12BB0001, 0x12BB0001, 0x12BB0002, 0x12BC0004,
    0x12BD0004, 0x12BE0004, 0x12BF0004, 0x0000FFFF,
};

static u32 D_800AEB34[] = {
    0x0005FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AEB40[] = {
    0x12BF0004, 0x02570005, 0x02580004, 0x02590003, 0x025A0003,
    0x025B0003, 0x025C0003, 0x025D0040, 0x0000FFFF,
};

static u32 D_800AEB64[] = {
    0x06C40002, 0x06C50001, 0x06C50001, 0x06C50001,
    0x06C50001, 0x0006FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEB84[] = {
    0x06CB0004, 0x06CC0006, 0x06CD0005, 0x06CE0005, 0x06CF0005, 0x060F0040,
};

static u32 D_800AEB9C[] = {
    0x06C70001, 0x06C70001, 0x06C70001, 0x06C70002, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0004, 0x0000FFFF,
};

static u32 D_800AEBC0[] = {
    0x06C40002, 0x06C60001, 0x06C60001, 0x06C60001,
    0x06C60001, 0x0006FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEBE0[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10001, 0x0ED10002, 0x000AFFFD, 0x0000FFFF,
};

static u32 D_800AEBF8[] = {
    0x0ED20001, 0x0ED20001, 0x0ED20001, 0x0ED20002, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AEC10[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50001, 0x0ED50002, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEC28[] = {
    0x0ED70001, 0x0ED70001, 0x0ED70001, 0x0ED70002, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AEC40[] = {
    0x0ED40002, 0x0ED60001, 0x0ED60001, 0x0ED60002, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEC58[] = {
    0x0008FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AEC64[] = {
    0x12B90001, 0x12B90001, 0x12BA0001, 0x12BA0002, 0x12BA0008,
    0x12BB0001, 0x12BB0001, 0x12BB0001, 0x12BB0001, 0x12BC0004,
    0x12BD0004, 0x12BE0004, 0x12BF0004, 0x0000FFFF,
};

static u32 D_800AEC9C[] = {
    0x0008FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AECA8[] = {
    0x06C40001, 0x06C40001, 0x06C50001, 0x06C50002,
    0x06C50008, 0x0009FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AECC8[] = {
    0x06C70001, 0x06C70001, 0x06C70001, 0x06C70002, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x0000FFFF,
};

static u32 D_800AECEC[] = {
    0x06C40001, 0x06C40001, 0x06C60001, 0x06C60002,
    0x06C60008, 0x0009FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AED0C[] = {
    0x0ED00001, 0x0ED00001, 0x0ED10001, 0x0ED10002,
    0x0ED10008, 0x000AFFFD, 0x0000FFFF,
};

static u32 D_800AED28[] = {
    0x0ED40001, 0x0ED40001, 0x0ED50001, 0x0ED50002,
    0x0ED50008, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AED44[] = {
    0x0ED40001, 0x0ED40001, 0x0ED60001, 0x0ED60002,
    0x0ED60008, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AED60[] = {
    0x000BFFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AED6C[] = {
    0x12B90001, 0x12B90001, 0x12BA0001, 0x12BA0002, 0x12BA0002, 0x12BA0002,
    0x12BA0002, 0x12BA0001, 0x12BA0001, 0x12BB0001, 0x12BB0001, 0x12BB0001,
    0x12BB0001, 0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0004, 0x0000FFFF,
};

static u32 D_800AEDB4[] = {
    0x000BFFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AEDC0[] = {
    0x06C40001, 0x06C40001, 0x06C50001, 0x06C50002, 0x06C50002, 0x06C50002,
    0x06C50002, 0x06C50001, 0x06C50001, 0x0006FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEDF0[] = {
    0x06C40001, 0x06C40001, 0x06C60001, 0x06C60002, 0x06C60002, 0x06C60002,
    0x06C60002, 0x06C60001, 0x06C60001, 0x0006FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEE20[] = {
    0x0ED00001, 0x0ED00001, 0x0ED10001, 0x0ED10002, 0x0ED10002, 0x0ED10002,
    0x0ED10002, 0x0ED10001, 0x0ED10001, 0x000AFFFD, 0x0000FFFF,
};

static u32 D_800AEE4C[] = {
    0x0ED40001, 0x0ED40001, 0x0ED50001, 0x0ED50002, 0x0ED50002, 0x0ED50002,
    0x0ED50002, 0x0ED50001, 0x0ED50001, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEE78[] = {
    0x0ED40001, 0x0ED40001, 0x0ED60001, 0x0ED60002, 0x0ED60002, 0x0ED60002,
    0x0ED60002, 0x0ED60001, 0x0ED60001, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEEA4[] = {
    0x000CFFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AEEB0[] = {
    0x12B90002, 0x12B90001, 0x12BA0001, 0x12BA0002, 0x12BA0002, 0x12BA0001,
    0x12BA0001, 0x12BA0001, 0x12BA0003, 0x12BB0001, 0x12BB0001, 0x12BB0001,
    0x12BB0001, 0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AEEF8[] = {
    0x000CFFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AEF04[] = {
    0x06C40002, 0x06C40001, 0x06C50001, 0x06C50002, 0x06C50002, 0x06C50001,
    0x06C50001, 0x06C50001, 0x06C50003, 0x0009FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEF34[] = {
    0x06C40002, 0x06C40001, 0x06C60001, 0x06C60002, 0x06C60002, 0x06C60001,
    0x06C60001, 0x06C60001, 0x06C60003, 0x0009FFFD, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AEF64[] = {
    0x0ED00002, 0x0ED00001, 0x0ED10001, 0x0ED10002, 0x0ED10002, 0x0ED10001,
    0x0ED10001, 0x0ED10001, 0x0ED10003, 0x000AFFFD, 0x0000FFFF,
};

static u32 D_800AEF90[] = {
    0x0ED40002, 0x0ED40001, 0x0ED50001, 0x0ED50002, 0x0ED50002, 0x0ED50001,
    0x0ED50001, 0x0ED50001, 0x0ED50003, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEFBC[] = {
    0x0ED40002, 0x0ED40001, 0x0ED60001, 0x0ED60002, 0x0ED60002, 0x0ED60001,
    0x0ED60001, 0x0ED60001, 0x0ED60003, 0x0007FFFD, 0x0000FFFF,
};

static u32 D_800AEFE8[] = {
    0x027A0002, 0x027B0002, 0x12BA0001, 0x12BB0001, 0x12BC0001, 0x12BD0001,
    0x12BE0001, 0x12BF0003, 0x02C00003, 0x02C10003, 0x02C20003, 0x02C30003,
    0x02540002, 0x02550002, 0x0010FFFD, 0x0002FFFE,
};

static u32 D_800AF028[] = {
    0x02570005, 0x02580004, 0x02590003, 0x025A0003, 0x025B0003,
    0x025C0003, 0x025D0003, 0x02790010, 0x0003FFFE,
};

static u32 D_800AF04C[] = {
    0x027A0004, 0x027B0004, 0x02010004, 0x0010FFFD, 0x0011FFFD, 0x0002FFFE,
};

static u32 D_800AF064[] = {
    0x04560006, 0x02570006, 0x02580006, 0x02590006, 0x025A0006,
    0x025B0005, 0x025C0003, 0x025B0003, 0x025C0002, 0x025D0002,
    0x025C0002, 0x025D0080, 0x0006FFFE,
};

static u32 D_800AF098[] = {
    0x06C50001, 0x06C70001, 0x06C80001, 0x06C90001, 0x06CA0001, 0x06CB0001,
    0x06CC0004, 0x06CD0003, 0x06CE0003, 0x06CF0003, 0x060F0001, 0x0000FFFF,
};

static u32 D_800AF0C8[] = {
    0x027A0002, 0x027A0002, 0x027A0002, 0x027B0040, 0x0000FFFF,
};

static u32 D_800AF0DC[] = {
    0x06810002, 0x06810002, 0x06810002, 0x06820040, 0x0000FFFF,
};

static u32 D_800AF0F0[] = {
    0x0002FFFD, 0x02500004, 0x02510004, 0x02520004, 0x02530004,
    0x02540004, 0x02550004, 0x02540004, 0x02550004, 0x0000FFFF,
};

static u32 D_800AF118[] = {
    0x0002FFFD, 0x024A0004, 0x024B0004, 0x024C0004, 0x024D0004,
    0x024E0004, 0x024F0004, 0x024E0004, 0x024F0004, 0x0000FFFF,
};

static u32 D_800AF140[] = {
    0x0012FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF14C[] = {
    0x12B90001, 0x12B90001, 0x12BA0001, 0x12BA0001, 0x12BA0001,
    0x12BA0001, 0x12BB0002, 0x12BB0002, 0x12BB0002, 0x12BC0004,
    0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF184[] = {
    0x0012FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF190[] = {
    0x06C40001, 0x06C40001, 0x06C50001, 0x06C50001, 0x06C50001,
    0x06C50001, 0x06C70002, 0x06C70002, 0x06C70002, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF1CC[] = {
    0x06C40001, 0x06C40001, 0x06C60001, 0x06C60002, 0x06C60001,
    0x06C70002, 0x06C70002, 0x06C70002, 0x06C80004, 0x06C90004,
    0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF204[] = {
    0x0ED00001, 0x0ED00001, 0x0ED10001, 0x0ED10001, 0x0ED10001,
    0x0ED10001, 0x0ED20001, 0x0ED20001, 0x0ED20002, 0x0ED30002,
    0x0ED30002, 0x0ED30002, 0x0ED30002, 0x0000FFFF,
};

static u32 D_800AF23C[] = {
    0x0ED40001, 0x0ED40001, 0x0ED50001, 0x0ED50001, 0x0ED50001,
    0x0ED50001, 0x0ED70001, 0x0ED70001, 0x0ED70002, 0x0ED80002,
    0x0ED80002, 0x0ED80002, 0x0ED80002, 0x0000FFFF,
};

static u32 D_800AF274[] = {
    0x0ED40001, 0x0ED40001, 0x0ED60001, 0x0ED60001, 0x0ED60001,
    0x0ED70001, 0x0ED70001, 0x0ED70001, 0x0ED80002, 0x0ED80002,
    0x0ED80002, 0x0ED80002, 0x0000FFFF,
};

static u32 D_800AF2A8[] = {
    0x02D00001, 0x04D00001, 0x26D10001, 0x08D10001, 0x08D10010,
    0x08BA0001, 0x08BA0001, 0x0ABB0001, 0x0CBB0001, 0x0EBB0001,
    0x10BC0002, 0x10BD0002, 0x10BE0002, 0x10BF0002, 0x0000FFFF,
};

static u32 D_800AF2E4[] = {
    0x001CFFFD, 0x000DFFFD, 0x0000FFFF, 0x001CFFFD, 0x000EFFFD, 0x0000FFFF,
};

static u32 D_800AF2FC[] = {
    0x127C0002, 0x127D0002, 0x127E0001, 0x127F0001, 0x127E0002,
    0x127D0002, 0x127C0004, 0x12800005, 0x0000FFFF,
};

static u32 D_800AF320[] = {
    0x06810002, 0x06820002, 0x06830001, 0x06840001,
    0x06830002, 0x06820002, 0x06810004, 0x0000FFFF,
};

static u32 D_800AF340[] = {
    0x10850001, 0x10860001, 0x10870001, 0x10860002, 0x10850002, 0x0000FFFF,
};

static u32 D_800AF358[] = {
    0x0E880001,
    0x0E890004,
    0x0E880002,
    0x0000FFFF,
};

static u32 D_800AF368[] = {
    0x0013FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF374[] = {
    0x12B90002, 0x12BA0001, 0x12BA0003, 0x12BB0001, 0x12BB0003,
    0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF39C[] = {
    0x0013FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF3A8[] = {
    0x06C40002, 0x06C50001, 0x06C50003, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF3D4[] = {
    0x06C40002, 0x06C60001, 0x06C60003, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF400[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10003, 0x0ED20001,
    0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF41C[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50003, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF438[] = {
    0x0ED40002, 0x0ED60001, 0x0ED60003, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF454[] = {
    0x127C0001, 0x127D0001, 0x127E0001, 0x127F0001, 0x127E0002,
    0x127D0002, 0x127C0004, 0x12800005, 0x0000FFFF,
};

static u32 D_800AF478[] = {
    0x06810001, 0x06820001, 0x06830001, 0x06840001,
    0x06830002, 0x06820002, 0x06810004, 0x0000FFFF,
};

static u32 D_800AF498[] = {
    0x0014FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF4A4[] = {
    0x12B90002, 0x12BA0001, 0x12BA0002, 0x12BB0001, 0x12BB0003,
    0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF4CC[] = {
    0x0014FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF4D8[] = {
    0x06C40002, 0x06C50001, 0x06C50002, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF504[] = {
    0x06C40002, 0x06C60001, 0x06C60002, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF530[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10002, 0x0ED20001,
    0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF54C[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50002, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF568[] = {
    0x0015FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF574[] = {
    0x127C0002, 0x127D0002, 0x127E0001, 0x127F0001, 0x127E0002,
    0x127E0002, 0x127D0002, 0x127C0002, 0x12B90001, 0x12B90001,
    0x12BA0001, 0x12BA0003, 0x12BB0001, 0x12BB0003, 0x12BC0004,
    0x12BD0004, 0x12BE0004, 0x12BF0004, 0x0000FFFF,
};

static u32 D_800AF5C0[] = {
    0x0015FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF5CC[] = {
    0x06810002, 0x06820002, 0x06830001, 0x06840001, 0x06830002,
    0x06830002, 0x06820002, 0x06810002, 0x06C40001, 0x06C40001,
    0x06C60001, 0x06C60003, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0004, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF61C[] = {
    0x0ED00001, 0x0ED00001, 0x0ED10001, 0x0ED10003,
    0x0ED20001, 0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF63C[] = {
    0x0ED40001, 0x0ED40001, 0x0ED50001, 0x0ED50003,
    0x0ED70001, 0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF65C[] = {
    0x0ED40002, 0x0ED60001, 0x0ED60003, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF678[] = {
    0x0016FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF684[] = {
    0x12B90002, 0x12BA0001, 0x12BA0001, 0x12BA0001, 0x12BA0001,
    0x12BA0001, 0x12BB0001, 0x12BB0003, 0x12BC0004, 0x12BD0004,
    0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF6B8[] = {
    0x0016FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF6C4[] = {
    0x06C40002, 0x06C50001, 0x06C50001, 0x06C50001, 0x06C50001,
    0x06C50001, 0x06C70001, 0x06C70003, 0x06C80004, 0x06C90004,
    0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF6FC[] = {
    0x06C40002, 0x06C60001, 0x06C60001, 0x06C60001, 0x06C60001,
    0x06C60001, 0x06C70001, 0x06C70003, 0x06C80004, 0x06C90004,
    0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF734[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10001, 0x0ED10001, 0x0ED10001,
    0x0ED10001, 0x0ED20001, 0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF75C[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50001, 0x0ED50001, 0x0ED50001,
    0x0ED50001, 0x0ED70001, 0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF784[] = {
    0x0ED40002, 0x0ED60001, 0x0ED60001, 0x0ED60001, 0x0ED60001,
    0x0ED60001, 0x0ED70001, 0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF7AC[] = {
    0x0017FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF7B8[] = {
    0x12B90002, 0x12BA0001, 0x12BA0003, 0x12BB0002, 0x12BB0002,
    0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF7E0[] = {
    0x0017FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF7EC[] = {
    0x06C40002, 0x06C50001, 0x06C50003, 0x06C70002, 0x06C70002, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF818[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10003, 0x0ED20002,
    0x0ED20002, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF834[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50003, 0x0ED70002,
    0x0ED70002, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF850[] = {
    0x0018FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF85C[] = {
    0x12B90003, 0x12BA0001, 0x12BA0004, 0x12BB0001, 0x12BB0003,
    0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF884[] = {
    0x0018FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF890[] = {
    0x06C40003, 0x06C50001, 0x06C50004, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF8BC[] = {
    0x0ED00003, 0x0ED10001, 0x0ED10004, 0x0ED20001,
    0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF8D8[] = {
    0x0ED40003, 0x0ED50001, 0x0ED50004, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF8F4[] = {
    0x0019FFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF900[] = {
    0x12B90004, 0x12BA0002, 0x12BA0003, 0x12BB0001, 0x12BB0003,
    0x12BC0004, 0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AF928[] = {
    0x0019FFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AF934[] = {
    0x06C40002, 0x06C50001, 0x06C50003, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF960[] = {
    0x06C40002, 0x06C60001, 0x06C60003, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AF98C[] = {
    0x0ED00002, 0x0ED10001, 0x0ED10003, 0x0ED20001,
    0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AF9A8[] = {
    0x0ED40002, 0x0ED50001, 0x0ED50003, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF9C4[] = {
    0x0ED40002, 0x0ED60001, 0x0ED60003, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AF9E0[] = {
    0x001AFFFD,
    0x000DFFFD,
    0x0000FFFF,
};

static u32 D_800AF9EC[] = {
    0x12B90001, 0x12B90001, 0x12B90001, 0x12B90001, 0x12BA0001, 0x12BA0001,
    0x12BA0001, 0x12BA0001, 0x12BA0001, 0x12BB0001, 0x12BB0003, 0x12BC0004,
    0x12BD0004, 0x12BE0004, 0x12BF0008, 0x0000FFFF,
};

static u32 D_800AFA2C[] = {
    0x001AFFFD,
    0x000EFFFD,
    0x0000FFFF,
};

static u32 D_800AFA38[] = {
    0x06C40001, 0x06C40001, 0x06C40001, 0x06C40001, 0x06C50001, 0x06C50001,
    0x06C50001, 0x06C50001, 0x06C50001, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AFA7C[] = {
    0x06C40001, 0x06C40001, 0x06C40001, 0x06C40001, 0x06C60001, 0x06C60001,
    0x06C60001, 0x06C60001, 0x06C60001, 0x06C70001, 0x06C70003, 0x06C80004,
    0x06C90004, 0x06CA0004, 0x06CB0008, 0x000FFFFD, 0x0000FFFF,
};

static u32 D_800AFAC0[] = {
    0x0ED00001, 0x0ED00001, 0x0ED00001, 0x0ED00001, 0x0ED10001,
    0x0ED10001, 0x0ED10001, 0x0ED10001, 0x0ED10001, 0x0ED20001,
    0x0ED20003, 0x0ED30008, 0x0000FFFF,
};

static u32 D_800AFAF4[] = {
    0x0ED40001, 0x0ED40001, 0x0ED40001, 0x0ED40001, 0x0ED50001,
    0x0ED50001, 0x0ED50001, 0x0ED50001, 0x0ED50001, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AFB28[] = {
    0x0ED40001, 0x0ED40001, 0x0ED40001, 0x0ED40001, 0x0ED60001,
    0x0ED60001, 0x0ED60001, 0x0ED60001, 0x0ED60001, 0x0ED70001,
    0x0ED70003, 0x0ED80008, 0x0000FFFF,
};

static u32 D_800AFB5C[] = {
    0x02C30002, 0x02C20002, 0x02C10002, 0x02C00002, 0x02BF0002, 0x02C00002,
    0x02BF0002, 0x02C00002, 0x02BF0002, 0x02C00024, 0x0000FFFF,
};

static u32 D_800AFB88[] = {
    0x06C70002, 0x06C80002, 0x06C90002, 0x06CA0002, 0x06C90002, 0x06CA0002,
    0x06C90002, 0x06CA0002, 0x06C90002, 0x06CA0018, 0x0000FFFF,
};

static u32 D_800AFBB4[] = {
    0x0ED20002, 0x0ED30002, 0x0ED20002, 0x0ED30002, 0x0ED20002,
    0x0ED30024, 0x0000FFFF, 0x027B0030, 0x0000FFFF,
};

static u32 D_800AFBD8[] = {
    0x02790030,
    0x0000FFFF,
};

static u32 D_800AFBE0[] = {
    0x02670003, 0x02680003, 0x02690003, 0x02680003, 0x02690003, 0x02680003,
    0x02690003, 0x02680003, 0x02690018, 0x02780004, 0x02790020, 0x0000FFFF,
};

static u32 D_800AFC10[] = {
    0x02790006,
    0x027A0006,
    0x027B0010,
    0x0000FFFF,
};

static u32 D_800AFC20[] = {
    0x02790006,
    0x027A0006,
    0x02790010,
    0x0000FFFF,
};

static u32 D_800AFC30[] = {
    0x028E0004, 0x028F0004, 0x02900004, 0x02910014,
    0x02900004, 0x028F0004, 0x028E0010, 0x0004FFFE,
};

u16 D_800AFC50[] = {40, 0, -1, 0};

static u32 D_800AFC58[] = {
    0x1E010002, 0x1E020003, 0x1E030004, 0x1E040004, 0x1E050003, 0x1E060002,
    0x1E070002, 0x1E080002, 0x1E090002, 0x1E0A0002, 0x00000000,
};

static u32 D_800AFC84[] = {
    0x1E0C0001, 0x1E0D0001, 0x1E0F0001, 0x1E100001, 0x1E0E0001,
    0x1E0D0001, 0x1E0C0001, 0x1E0D0001, 0x1E0F0001, 0x1E100002,
    0x1E0E0002, 0x1E0D0002, 0x1E0C0002, 0x1E0D0002, 0x1E0F0002,
    0x1E100003, 0x1E0E0003, 0x1E0D0003, 0x00C4FFFE,
};

static u32 D_800AFCD0[] = {
    0x1E010003, 0x1E020004, 0x1E030006, 0x1E040006, 0x1E050005, 0x1E060004,
    0x1E070004, 0x1E080003, 0x1E090003, 0x1E0A0003, 0x00000000,
};

static u32 D_800AFCFC[] = {
    0x1E020004, 0x1E030006, 0x1E040006, 0x1E050005, 0x1E060004, 0x1E070004,
    0x1E080003, 0x1E090003, 0x1E0A0003, 0x1E010003, 0x00090000,
};

static u32 D_800AFD28[] = {
    0x1E030006,
    0x0000FFFF,
};

static u32 D_800AFD30[] = {
    0x06C70004, 0x06C80004, 0x06C90004, 0x06CA0004, 0x06CB0004,
    0x06CC0006, 0x06CD0005, 0x06CE0005, 0x06CF0005, 0x0000FFFF,
};

static u32 D_800AFD58[] = {
    0x06CE0004, 0x06CD0004, 0x06CC0006, 0x06CD0005,
    0x06CE0005, 0x06CF0005, 0x0000FFFF,
};

static u32 D_800AFD74[] = {
    0x1E0C0001, 0x1E0D0001, 0x1E0F0001, 0x1E100001, 0x1E0E0001, 0x1E0D0001,
    0x1E0C0001, 0x1E0D0001, 0x1E0F0001, 0x1E100001, 0x1E0E0004, 0x0000FFFF,
};

s16 D_800AFDA4[] = {128, 0, -1, 0};

static u32 D_800AFDAC[] = {
    0x005F0084,
    0x0000FFFF,
};

static u32 D_800AFDB4[] = {
    0x00C70084,
    0x0000FFFF,
};

static u32 D_800AFDBC[] = {
    0x02010003, 0x02020002, 0x02030002, 0x02040003,
    0x02030002, 0x02020002, 0x00000000,
};

static u32 D_800AFDD8[] = {
    0x02050001,
    0x02060010,
    0x0000FFFF,
};

static u32 D_800AFDE4[] = {
    0x02030080, 0x02020001, 0x02020010, 0x02030010, 0x02020001,
    0x02020010, 0x02030010, 0x02020001, 0x02020010, 0x02030010,
    0x02020001, 0x02020080, 0x00000000,
};

static u32 D_800AFE18[] = {
    0x02020080,
    0x0000FFFF,
};

static u32 D_800AFE20[] = {
    0x02080080,
    0x0000FFFF,
};

static u32 D_800AFE28[] = {
    0x060C0001, 0x060B0001, 0x060A0001, 0x06820018, 0x060F0001, 0x0000FFFF,
};

static u32 D_800AFE40[] = {
    0x02100001, 0x02110001, 0x02120001, 0x027D0014, 0x027A0004, 0x0004FFFE,
};

static u32 D_800AFE58[] = {
    0x001A0002, 0x001B0002, 0x001C0002, 0x001D0002, 0x001E0002, 0x001F0002,
    0x00D00002, 0x00D10004, 0x00D20005, 0x00D30010, 0x006A0002, 0x006B0002,
    0x006C0002, 0x006D0002, 0x006E0003, 0x006E0001, 0x00010080, 0x0000FFFF,
};

static u32 D_800AFEA0[] = {
    0x001A0002, 0x001B0002, 0x001C0002, 0x001D0002, 0x001E0002, 0x001F0002,
    0x00D00002, 0x00D10004, 0x00D20005, 0x00D30004, 0x00D00002, 0x00D10004,
    0x00D20005, 0x00D30004, 0x006A0002, 0x006B0002, 0x006C0002, 0x006D0002,
    0x006E0003, 0x006E0001, 0x00010080, 0x0000FFFF,
};

static u32 D_800AFEF8[] = {
    0x0002FFFD,
    0x02780004,
    0x02790040,
    0x0000FFFF,
};

static u32 D_800AFF08[] = {
    0x06C50001, 0x06C70001, 0x06C80001, 0x06C90001, 0x06CA0001, 0x06CB0001,
    0x06CC0004, 0x06CD0003, 0x06CE0003, 0x06CF0010, 0x060F0008, 0x0000FFFF,
};

static u32 D_800AFF38[] = {
    0x06C50001, 0x06C70001, 0x06C80001, 0x06C90001, 0x06CA0001, 0x06CB0001,
    0x06CC0004, 0x06CD0003, 0x06CE0003, 0x06CF0010, 0x060F0008, 0x0000FFFF,
};

static u32 D_800AFF68[] = {
    0x24090080,
    0x00000000,
};

static u32 D_800AFF70[] = {
    0x240E0080,
    0x00000000,
};

static u32 D_800AFF78[] = {
    0x240A0006, 0x240B0006, 0x240C0006, 0x240D0006, 0x240E0006,
    0x240F0006, 0x24100006, 0x24110006, 0x00000000,
};

static u32 D_800AFF9C[] = {
    0x24090003, 0x24210003, 0x24220001, 0x24220001,
    0x24210003, 0x24090003, 0x0000FFFF,
};

u16 D_800AFFB8[] = {
    0x0004, 0x2402, 0x0004, 0x2403, 0x0004, 0x2404, 0x0004, 0x2405, 0x0004,
    0x2406, 0x0004, 0x2407, 0x0004, 0x2408, 0x0004, 0x2409, 0x0000, 0x0000,
};

static u32 D_800AFFDC[] = {
    0x26120002,
    0x26130002,
    0x0000FFFF,
};

static u32 D_800AFFE8[] = {
    0x26130002,
    0x26120002,
    0x0000FFFF,
};

static u32 D_800AFFF4[] = {
    0x26120004,
    0x26140010,
    0x26120004,
    0x0000FFFF,
};

static u32 D_800B0004[] = {
    0x28190010, 0x281A0006, 0x281B0006, 0x281C0006,
    0x281D0006, 0x281E0006, 0x0000FFFF,
};

static u32 D_800B0020[] = {
    0x28150006, 0x28160006, 0x28170006, 0x28180014, 0x28170004,
    0x28160004, 0x281D0006, 0x281E0004, 0x281E0003, 0x281E0003,
    0x281E0003, 0x281E0003, 0x0000FFFF,
};

static u32 D_800B0054[] = {
    0x28150004, 0x28160004, 0x28170004, 0x28180004,
    0x28160004, 0x281D0006, 0x281E0006, 0x0000FFFF,
};

static u32 D_800B0074[] = {
    0x2A460080,
    0x00000000,
};

static u32 D_800B007C[] = {
    0x00550004,
    0x00000000,
};

static u32 D_800B0084[] = {
    0x281A0006, 0x281B0006, 0x281C0006, 0x281D0006, 0x281A0006,
    0x281B0006, 0x281C0006, 0x281D0006, 0x00000000,
};

static u32 D_800B00A8[] = {
    0x28150002, 0x28160002, 0x28170002, 0x28180008, 0x28170002,
    0x28160002, 0x281D0002, 0x281E0002, 0x0000FFFF,
};

static u32 D_800B00CC[] = {
    0x02DA0008, 0x02DB0008, 0x02DC0010, 0x02DD0008,
    0x02DE0017, 0x02DF0004, 0x0000FFFF,
};

static u32 D_800B00E8[] = {
    0x02DA0008,
    0x02DB0008,
    0x02E00004,
    0x0000FFFF,
};

static u32 D_800B00F8[] = {
    0x02670003, 0x02680003, 0x02690003, 0x02680003, 0x02690003, 0x02680003,
    0x02690003, 0x02680003, 0x02690018, 0x02780004, 0x02790200, 0x0000FFFF,
};

static u32 D_800B0128[] = {
    0x02790200,
    0x0000FFFF,
};

s8 D_800B0130[] = {
    0, 0,  0,  0,  0, 1,  4,  20, 0,  7,  4,  16, 0,   13,  4, 9,  2, 3,
    5, 13, 5,  -1, 8, 9,  -2, 4,  6,  16, 0,  -3, 4,   16,  5, -5, 6, 12,
    5, 1,  4,  20, 1, -7, 11, 9,  -2, -5, 25, 26, -32, -31, 0, 0,  1, -3,
    7, 7,  1,  -3, 7, 7,  0,  1,  4,  7,  1,  -3, 7,   7,   0, 13, 4, 12,
    0, 13, 10, 10, 0, 15, 10, 5,  0,  8,  10, 8,  0,   11,  8, 12,
};

u32 D_800B0188[] = {
    0x00000000, 0x0000E1E0, 0x05041509, 0x0705F312, 0x0711F512, 0x0705050B,
    0x0710070C, 0x0705F20F, 0x0713F612, 0x070CF606, 0x08080613, 0x090B0C15,
};

AnimationFrame* D_800B01B8[] = {
    D_800AE2A8, D_800AE2C0, D_800AE2C8, D_800AE2DC, D_800AE2E4, D_800AE340,
    D_800AE374, D_800AE394, D_800AE3D8, D_800AE3F8, D_800AE424, D_800AE42C,
    D_800AE480, D_800AE488, D_800AE4CC, D_800AE514, D_800AE554, D_800AE594,
    D_800AE59C, D_800AE5A4, D_800AE5B8, D_800AE5C0, D_800AE5F8, D_800AE604,
    D_800AE61C, D_800AE628, D_800AE634, D_800AE640, D_800AE654, D_800AE66C,
    D_800AE6A8, D_800AE6C8, D_800AE6D4, D_800AE6FC, D_800AE708, D_800AEA1C,
    D_800AE788, D_800AE788, D_800AE7B0, D_800AE7B0, D_800AE7D4, D_800AE7EC,
    D_800AE804, D_800AE710, D_800AE710, D_800AE778, D_800AE82C, D_800AE834,
    D_800AE844, D_800AE84C, D_800AE878, D_800AE8A4, D_800AE8CC, D_800AE8F4,
    D_800AE900, D_800AE90C, D_800AE924, D_800AE92C, D_800AE934, D_800AE93C,
    D_800AEA74, D_800AEAC8, D_800AFC50, D_800AE964, D_800AE9E4, D_800AEAD0,
    D_800AEB34, D_800AEB64, D_800AEBC0, D_800AEBE0, D_800AEC10, D_800AEC40,
    D_800AEC58, D_800AEC9C, D_800AECA8, D_800AECEC, D_800AED0C, D_800AED28,
    D_800AED44, D_800AED60, D_800AEDB4, D_800AEDC0, D_800AEDF0, D_800AEE20,
    D_800AEE4C, D_800AEE78, D_800AEEA4, D_800AEEF8, D_800AEF04, D_800AEF34,
    D_800AEF64, D_800AEF90, D_800AEFBC, D_800AEFE8, D_800AF028, D_800AF098,
    D_800AF04C, D_800AF064, D_800AF098, D_800AF0C8, D_800AF0C8, D_800AF0DC,
    D_800AF0F0, D_800AF118, D_800AF140, D_800AF184, D_800AF190, D_800AF1CC,
    D_800AF204, D_800AF23C, D_800AF274, D_800AF2FC, D_800AF2FC, D_800AF320,
    D_800AF320, D_800AF340, D_800AF358, D_800AF358, D_800AF368, D_800AF39C,
    D_800AF3A8, D_800AF3D4, D_800AF400, D_800AF41C, D_800AF438, D_800AF454,
    D_800AF454, D_800AF478, D_800AF478, D_800AF340, D_800AF358, D_800AF358,
    D_800AF498, D_800AF4CC, D_800AF4D8, D_800AF504, D_800AF530, D_800AF54C,
    D_800AF54C, D_800AF568, D_800AF5C0, D_800AF5CC, D_800AF5CC, D_800AF61C,
    D_800AF63C, D_800AF65C, D_800AF678, D_800AF6B8, D_800AF6C4, D_800AF6FC,
    D_800AF734, D_800AF75C, D_800AF784, D_800AF7AC, D_800AF7E0, D_800AF7EC,
    D_800AF7EC, D_800AF818, D_800AF834, D_800AF834, D_800AF850, D_800AF884,
    D_800AF890, D_800AF890, D_800AF8BC, D_800AF8D8, D_800AF8D8, D_800AF8F4,
    D_800AF928, D_800AF934, D_800AF960, D_800AF98C, D_800AF9A8, D_800AF9C4,
    D_800AF9E0, D_800AFA2C, D_800AFA38, D_800AFA7C, D_800AFAC0, D_800AFAF4,
    D_800AFB28, D_800AFB5C, D_800AFB88, D_800AFBB4, D_800AFBD8, D_800AFBD8,
    D_800AFBE0, D_800AFBE0, D_800AFC10, D_800AFC20, D_800AFC30, D_800AFC30,
    D_800AEA44, D_800AEA60, D_800AFC58, D_800AFC84, D_800AFCD0, D_800AFCFC,
    D_800AFD28, D_800AFD30, D_800AFD58, D_800AFD74, D_800AFDA4, D_800AFDAC,
    D_800AFDB4, D_800AFDBC, D_800AFDD8, D_800AFDE4, D_800AFE18, D_800AFE20,
    D_800AFE40, D_800AFE40, D_800AFE28, D_800AFE28, D_800AF2E4, D_800AF2E4,
    D_800AFE58, D_800AFEA0, D_800AFEF8, D_800AE53C, D_800AFBD8, D_800AFBD8,
    D_800AFF68, D_800AFF70, D_800AFF78, D_800AFF9C, D_800AFFB8, D_800AFFDC,
    D_800AFFE8, D_800AFFF4, D_800B0004, D_800B0020, D_800B0054, D_800B0074,
    D_800B0054, D_800B007C, D_800B0084, D_800B00A8, D_800B00A8, D_800B00A8,
    D_800AFF08, D_800AFF38, D_800B00CC, D_800B00E8, D_800B00F8, D_800B0128,
    D_800AE5E0,
};

AnimationFrame* D_800B0594[] = {
    D_800AE434,
    D_800AE460,
    D_800AE4F4,
    D_800AE574,
    (AnimationFrame*)D_800AE690,
    (AnimationFrame*)D_800AEAFC,
    (AnimationFrame*)D_800AEB9C,
    (AnimationFrame*)D_800AEC28,
    (AnimationFrame*)D_800AEC64,
    (AnimationFrame*)D_800AECC8,
    (AnimationFrame*)D_800AEBF8,
    (AnimationFrame*)D_800AED6C,
    (AnimationFrame*)D_800AEEB0,
    (AnimationFrame*)D_800AEADC,
    (AnimationFrame*)D_800AEB40,
    (AnimationFrame*)D_800AEB84,
    (AnimationFrame*)D_800AE308,
    (AnimationFrame*)D_800AE324,
    (AnimationFrame*)D_800AF14C,
    (AnimationFrame*)D_800AF374,
    (AnimationFrame*)D_800AF4A4,
    (AnimationFrame*)D_800AF574,
    (AnimationFrame*)D_800AF684,
    (AnimationFrame*)D_800AF7B8,
    (AnimationFrame*)D_800AF85C,
    (AnimationFrame*)D_800AF900,
    (AnimationFrame*)D_800AF9EC,
    (AnimationFrame*)D_800AE990,
    (AnimationFrame*)D_800AF2A8,
};

u8 D_800B0608[] = {
    0x41, 0x48, 0x4F, 0x56, 0x56, 0x68, 0x6F, 0x76, 0x7D, 0x84,
    0x8B, 0x92, 0x99, 0xA0, 0xA7, 0xAE, 0xB5, 0x41, 0x41, 0x41,
    0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41,
};
