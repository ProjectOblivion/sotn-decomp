// SPDX-License-Identifier: AGPL-3.0-or-later
#include "dai.h"

static u8 D_us_80180EE0[] = {0x00, 0x40, 0x00, 0x00};
static u8 D_us_80180EE4[] = {0x00, 0x00, 0x00, 0x00};
static u16 D_us_80180EE8[] = {0x0258, 0x0260, 0x0210, 0x0218};
static u16 D_us_80180EF0[] = {0x0000, 0x0020};
static u16 D_us_80180EF4[] = {0x01A1, 0x01A1, 0x01A1, 0x01A1};
static u16 D_us_80180EFC[] = {
    0x0008, 0x0013, 0x0011, 0x0031, 0x004F, 0x0026, 0x0036, 0x001D, 0x001B,
    0x0033, 0x002C, 0x0021, 0x0019, 0x000A, 0x0033, 0x001F, 0x0048, 0x002F,
    0x0013, 0x0019, 0x004D, 0x004B, 0x0017, 0x001D, 0x0012, 0x0002, 0x001B,
    0x002A, 0x0050, 0x0045, 0x0032, 0x000D, 0x002A, 0x004D, 0x0006, 0x0027,
    0x0007, 0x0048, 0x002F, 0x001B, 0x0036, 0x0022, 0x0039, 0x0014, 0x0039,
    0x001D, 0x000A, 0x0035, 0x0010, 0x001B, 0x003D, 0x0017, 0x002E, 0x000B,
    0x0049, 0x0042, 0x003D, 0x002A, 0x0001, 0x000C, 0x001B, 0x0034, 0x0041,
    0x0035, 0x0008, 0x000E, 0x004D, 0x0011, 0x0034, 0x0041, 0x0029, 0x0048};

static const char* actor_names[] = {_S("Alucard"), _S("Maria")};

u8 D_us_80180F94[] = {
    0x01, 0x01, 0xFF, 0x00, 0x01, 0x02, 0xFF, 0x00, 0x01, 0x02, 0x07, 0x03,
    0x07, 0x04, 0x07, 0x05, 0x07, 0x06, 0x07, 0x07, 0x07, 0x08, 0x07, 0x09,
    0x10, 0x0A, 0xFF, 0x00, 0x01, 0x0A, 0x06, 0x0B, 0x06, 0x0C, 0x06, 0x0D,
    0x10, 0x0E, 0x0A, 0x0F, 0x0A, 0x0E, 0x0A, 0x0F, 0x20, 0x0E, 0xFF, 0x00,
    0x01, 0x0E, 0x04, 0x10, 0x04, 0x11, 0x0B, 0x12, 0xFF, 0x00, 0x00, 0x00,
    0x01, 0x13, 0xFF, 0x00, 0x01, 0x12, 0xFF, 0x00, 0x20, 0x12, 0x03, 0x11,
    0x03, 0x10, 0x03, 0x14, 0x03, 0x15, 0x40, 0x16, 0x06, 0x15, 0x05, 0x0D,
    0x05, 0x0C, 0x05, 0x0B, 0x20, 0x0A, 0xFF, 0x00, 0x10, 0x0A, 0x10, 0x17,
    0x08, 0x0A, 0xFF, 0x00, 0x01, 0x0A, 0x02, 0x0B, 0x02, 0x0C, 0x06, 0x18,
    0x06, 0x19, 0x50, 0x18, 0x03, 0x0C, 0x03, 0x0B, 0x08, 0x0A, 0xFF, 0x00,
    0x01, 0x0A, 0x03, 0x0B, 0x03, 0x0C, 0x03, 0x0D, 0x03, 0x0E, 0x06, 0x1B,
    0x10, 0x1A, 0x20, 0x1B, 0x03, 0x0E, 0x03, 0x0D, 0x03, 0x0C, 0xFF, 0x00};

u8 D_us_80181024[] = {0x04, 0x1C, 0x04, 0x1D, 0x04, 0x1E,
                      0x04, 0x1F, 0xFF, 0,    0};
u8 D_us_80181030[] = {
    0x02, 0x20, 0x04, 0x21, 0x04, 0x22, 0x04, 0x23, 0x04, 0x24,
    0x04, 0x25, 0x04, 0x26, 0x04, 0x27, 0x02, 0x20, 0,    0};
u8 D_us_80181044[] = {0x08, 0x28, 0x08, 0x29, 0x60, 0x2A, 0xFF, 0};

s32 g_SkipCutscene;
Dialogue g_Dialogue;
STATIC_PAD_BSS(0x68);
u32 g_CutsceneFlags;
s32 g_IsCutsceneDone;

#include "../cutscene_unk1.h"

#include "../set_cutscene_script.h"

#include "../cutscene_unk3.h"

#include "../cutscene_unk4.h"

#include "../cutscene_actor_name.h"

#include "../set_cutscene_end.h"

#include "../cutscene_run.h"

#include "../cutscene_scale_avatar.h"

extern u8 OVL_EXPORT(cutscene_data)[];
void OVL_EXPORT(EntityCutscene)(Entity* self) {
    RECT rect;
    Primitive* prim;
    s32 primIndex;
    s32 i;
    s16 j;
    s16 uCoord;
    s16 vCoord;
    u16 nextChar;
    s32 nextChar2;
    s32 ptr;

    if (self->step) {
        if (self->step && g_IsCutsceneDone && !g_SkipCutscene &&
            ((g_Settings.D_8003CB04 & 0x400) || g_IsTimeAttackUnlocked)) {
            if (g_pads->tapped & 0x800) {
                g_SkipCutscene = 1;
                g_api.FreePrimitives(self->primIndex);
                self->flags ^= FLAG_HAS_PRIMS;
                if (g_Dialogue.primIndex[1] != -1) {
                    g_api.FreePrimitives(g_Dialogue.primIndex[1]);
                }
                if (g_Dialogue.primIndex[0] != -1) {
                    g_api.FreePrimitives(g_Dialogue.primIndex[0]);
                }
                g_api.PlaySfx(SET_STOP_MUSIC);
                self->step = 1;
                self->step_s = 0;
            }
        }
        if (self->step && g_Dialogue.unk3C) {
            CutsceneRun();
        }
    }
    switch (self->step) {
    case 0:
        if (g_CastleFlags[MET_MARIA_IN_DAI] ||
            g_PlayableCharacter != PLAYER_ALUCARD) {
            DestroyEntity(self);
            return;
        }
        if (SetCutsceneScript(OVL_EXPORT(cutscene_data))) {
            self->flags |= FLAG_HAS_PRIMS | FLAG_UNK_2000;
            g_CutsceneHasControl = 1;
            g_CutsceneFlags = 0;
            g_IsCutsceneDone = 0;
            g_SkipCutscene = 0;
            self->primIndex = g_Dialogue.primIndex[2];
            self->step++;
        }
        break;
    case 1:
        // this is a huge While-loop! Don't miss it!
        while (1) {
            if ((g_Dialogue.nextCharTimer != 0) && !g_SkipCutscene) {
                g_Dialogue.nextCharTimer--;
                return;
            }
            nextChar = *g_Dialogue.scriptCur++;
            switch (nextChar) {
            case 0:
                self->step = 7;
                return;
            case 1:
                if (g_SkipCutscene) {
                    continue;
                }
                g_Dialogue.nextCharX = g_Dialogue.nextLineX;
                if (!(g_Dialogue.unk12 & 1)) {
                    g_Dialogue.nextLineY += 12;
                }
                g_Dialogue.nextCharY++;
                if (g_Dialogue.nextCharY >= 5) {
                    g_Dialogue.nextCharY = 0;
                }
                CutsceneUnk4();
                if (!(g_Dialogue.unk12 & 1)) {
                    if (g_Dialogue.nextCharY >= 4) {
                        g_Dialogue.unk12 |= 1;
                        g_Dialogue.portraitAnimTimer = 0;
                        self->step_s = 0;
                        self->step++;
                        return;
                    }
                    continue;
                }
                g_Dialogue.portraitAnimTimer = 0;
                self->step_s = 0;
                self->step++;
                return;
            case 2:
                g_Dialogue.unk17 = *g_Dialogue.scriptCur++;
                continue;
            case 3:
                g_Dialogue.nextCharTimer = *g_Dialogue.scriptCur++;
                if (g_SkipCutscene) {
                    continue;
                }
                return;
            case 4:
                if (g_SkipCutscene) {
                    continue;
                }
                prim = g_Dialogue.prim[0];
                for (i = 0; i < 5; i++) {
                    prim->drawMode = DRAW_HIDE;
                    prim = prim->next;
                }
                return;
            case 5:
                if (g_SkipCutscene) {
                    g_Dialogue.scriptCur += 2;
                    continue;
                }
                // fake reuse of i?
                i = *g_Dialogue.scriptCur++;
                nextChar2 = *g_Dialogue.scriptCur++;
                prim = g_Dialogue.prim[5];
                uCoord = D_us_80180EE0[nextChar2 & 1];
                vCoord = D_us_80180EE4[nextChar2 & 1];
                prim->clut = D_us_80180EE8[i];
                prim->tpage = 0x90;
                if (nextChar2 & 0x80) {
                    prim->u0 = prim->u2 = uCoord + 0x2F;
                    prim->u1 = prim->u3 = uCoord;
                } else {
                    prim->u0 = prim->u2 = uCoord;
                    prim->u1 = prim->u3 = uCoord + 0x2F;
                }
                prim->v0 = prim->v1 = vCoord;
                prim->v2 = prim->v3 = vCoord + 0x48;
                prim->x0 = prim->x1 = prim->x2 = prim->x3 =
                    g_Dialogue.startX - 0x1E;
                prim->y0 = prim->y1 = prim->y2 = prim->y3 =
                    g_Dialogue.startY + 0x24;
                g_Dialogue.clutIndex = D_us_80180EF4[i];
                CutsceneUnk1();
                CutsceneUnk4();
                prim->priority = 0x1FE;
                prim->drawMode = DRAW_DEFAULT;
                DrawCutsceneActorName(i & 0xffff, self);
                g_Dialogue.portraitAnimTimer = 6;
                self->step = 3;
                return;
            case 6:
                if (g_SkipCutscene) {
                    continue;
                }
                for (prim = g_Dialogue.prim[0], i = 0; i < 5; i++) {
                    prim->drawMode = DRAW_HIDE;
                    prim = prim->next;
                }
                g_api.FreePrimitives(g_Dialogue.primIndex[1]);
                g_Dialogue.primIndex[1] = -1;
                g_Dialogue.portraitAnimTimer = 6;
                self->step = 4;
                return;
            case 7:
                if (g_SkipCutscene) {
                    g_Dialogue.scriptCur++;
                    g_Dialogue.scriptCur++;
                    continue;
                }
                g_Dialogue.startX = *g_Dialogue.scriptCur++;
                g_Dialogue.startY = *g_Dialogue.scriptCur++;
                prim = g_Dialogue.prim[5];
                prim = prim->next;
                prim->y0 = prim->y1 = g_Dialogue.startY;
                prim->y2 = prim->y3 = g_Dialogue.startY + 0x48;
                prim = prim->next;
                prim->y0 = g_Dialogue.startY - 1;
                prim->u0 = 0xF6;
                g_Dialogue.portraitAnimTimer = 0x18;
                self->step = 5;
                self->step_s = 0;
                return;

            case 8:
                if (g_SkipCutscene) {
                    continue;
                }
                g_Dialogue.portraitAnimTimer = 0x18;
                self->step = 6;
                return;
            case 9:
                if (g_SkipCutscene) {
                    g_Dialogue.scriptCur++;
                    g_Dialogue.scriptCur++;
                    continue;
                }
                nextChar = *g_Dialogue.scriptCur++;
                nextChar <<= 4;
                nextChar |= *g_Dialogue.scriptCur++;
                g_api.PlaySfx(nextChar);
                continue;
            case 10:
                if (g_SkipCutscene) {
                    continue;
                }
                if (g_api.func_80131F68()) {
                    continue;
                }
                *g_Dialogue.scriptCur--;
                return;
            case 11:
                if (g_SkipCutscene) {
                    continue;
                }
                if (g_api.func_80131F68() != true) {
                    continue;
                }
                *g_Dialogue.scriptCur--;
                return;
            case 12:
                ptr = (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                SetCutsceneEnd((u8*)ptr);
                continue;
            case 13:
                continue;
            case 14:
                ptr = (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr += 0x100000;
                g_Dialogue.scriptCur += *(u8*)ptr << 2;

                ptr = (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur;
                g_Dialogue.scriptCur = (u8*)ptr + 0x100000;
                continue;

            case 15:
                ptr = (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur++;
                ptr <<= 4;
                ptr |= (u_long)*g_Dialogue.scriptCur;
                g_Dialogue.scriptCur = (u8*)ptr + 0x100000;
                continue;

            case 16:
                if (!((g_CutsceneFlags >> *g_Dialogue.scriptCur) & 1)) {
                    g_Dialogue.scriptCur--;
                    return;
                }
                g_CutsceneFlags &= ~(1 << *g_Dialogue.scriptCur);
                *g_Dialogue.scriptCur++;
                continue;
            case 17:
                g_CutsceneFlags |= 1 << *g_Dialogue.scriptCur++;
                continue;
            case 18:
                g_Dialogue.unk3C = 0;
                continue;
            case 19:
                if (g_SkipCutscene) {
                    g_Dialogue.scriptCur += 5;
                } else {
                    ptr = (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr <<= 4;
                    ptr |= (u_long)*g_Dialogue.scriptCur++;
                    ptr += 0x100000;
                    nextChar2 = g_Dialogue.scriptCur++[0];
                    LoadTPage((u_long*)ptr, 1, 0, D_us_80180EF0[nextChar2],
                              0x100, 0x30, 0x48);
                }
                continue;
            case 20:
                nextChar = *g_Dialogue.scriptCur++;
                nextChar <<= 4;
                nextChar |= *g_Dialogue.scriptCur++;
                g_api.PlaySfx(nextChar);
                continue;
            case 21:
                g_CutsceneFlags = 0;
                g_SkipCutscene = 0;
                g_IsCutsceneDone = 0;
                continue;
            case 22:
                g_CutsceneFlags &= ~(1 << *g_Dialogue.scriptCur++);
                continue;
            case 23:
                return;
            case 24:
                if (!((g_CutsceneFlags >> *g_Dialogue.scriptCur) & 1)) {
                    *g_Dialogue.scriptCur--;
                    return;
                }
                *g_Dialogue.scriptCur++;
                continue;
            default:
                if (g_SkipCutscene) {
                    continue;
                }
                g_Dialogue.nextCharTimer = g_Dialogue.unk17;
            }
            break; // This breaks the big while-loop!
        }
        if (nextChar == 0x20) {
            g_Dialogue.nextCharX += 2;
            return;
        }
        rect.x = ((nextChar & 0xF) * 2) + 0x380;
        rect.y = ((u32)(nextChar & 0xF0) >> 1) + 0xF0;
        rect.w = 2;
        rect.h = 8;
        vCoord = (g_Dialogue.nextCharY * 0xC) + 0x180;
        MoveImage(&rect, g_Dialogue.nextCharX, vCoord);
        g_Dialogue.nextCharX += 2;
        break;
    case 2:
        ScaleCutsceneAvatar(2);
        if (g_Dialogue.portraitAnimTimer >= 6) {
            self->step -= 1;
            return;
        }
        break;
    case 3:
        prim = g_Dialogue.prim[5];
        prim->x0 = prim->x2 -= 4;
        prim->x1 = prim->x3 += 4;
        prim->y0 = prim->y1 -= 6;
        prim->y2 = prim->y3 += 6;
        g_Dialogue.portraitAnimTimer--;
        if (!g_Dialogue.portraitAnimTimer) {
            self->step = 1;
            for (prim = &g_PrimBuf[g_Dialogue.primIndex[1]]; prim != NULL;
                 prim = prim->next) {
                prim->drawMode = DRAW_DEFAULT;
            }
        }
        break;
    case 4:
        prim = g_Dialogue.prim[5];
        prim->x0 = prim->x2 += 4;
        prim->x1 = prim->x3 -= 4;
        prim->y0 = prim->y1 += 6;
        prim->y2 = prim->y3 -= 6;
        if (prim->x1 >= (g_Dialogue.startX - 2)) {
            prim->x1 = prim->x3 = g_Dialogue.startX - 3;
        }
        g_Dialogue.portraitAnimTimer--;
        if (!g_Dialogue.portraitAnimTimer) {
            self->step = 1;
            return;
        }
        break;
    case 5:
        switch (self->step_s) {
        case 0:
            g_IsCutsceneDone = 1;
            primIndex = g_api.AllocPrimitives(PRIM_LINE_G2, 0x48);
            if (primIndex == -1) {
                DestroyEntity(self);
                return;
            }
            g_Dialogue.primIndex[0] = primIndex;
            for (prim = &g_PrimBuf[primIndex], j = 0; prim != NULL;
                 prim = prim->next) {
                prim->r0 = prim->r1 = 0x7F;
                prim->b0 = prim->b1 = prim->g0 = prim->g1 = 0;
                prim->x0 = prim->x1 = 0xF7;
                prim->y0 = prim->y1 = g_Dialogue.startY + j;
                prim->priority = 0x1FE;
                prim->drawMode = DRAW_DEFAULT;
                prim->x2 = D_us_80180EFC[j];
                prim->x3 = 0xF70;

                j++;
            }
            self->step_s++;
            return;
        case 1:
            for (j = 0, prim = &g_PrimBuf[g_Dialogue.primIndex[0]];
                 prim != NULL; prim = prim->next) {
                prim->x3 -= prim->x2;
                prim->x2 += 2;
                prim->x0 = prim->x3 / 16;
                if (prim->x0 < 5) {
                    prim->x0 = 4;
                } else {
                    j = 1;
                }
            }
            if (j == 0) {
                g_api.FreePrimitives(g_Dialogue.primIndex[0]);
                g_Dialogue.primIndex[0] = -1;
                prim = g_Dialogue.prim[5];
                prim = prim->next;
                prim->drawMode = DRAW_TPAGE | DRAW_TRANSP;
                prim = prim->next;
                prim->drawMode = DRAW_UNK_40 | DRAW_TPAGE | DRAW_TRANSP;
                self->step_s++;
                return;
            }
            break;
        case 2:
            j = 0;
            prim = g_Dialogue.prim[5];
            prim = prim->next;
            if (prim->r0 < 0x10) {
                prim->r0 = prim->r1 = prim->r2 = prim->r3 = 0;
            } else {
                prim->r0 = prim->r1 = prim->r2 = prim->r3 -= 0x10;
                j = 1;
            }
            if (prim->b0 >= 0x7F) {
                prim->b0 = prim->b1 = 0x7F;
            } else {
                prim->b0 = prim->b1 += 8;
                j = 1;
            }

            prim = prim->next;
            if (prim->r0 < 0x10) {
                prim->r0 = prim->g0 = prim->b0 = 0x10;
            } else {
                prim->r0 = prim->g0 = prim->b0 -= 0xF;
                j = 1;
            }
            if (j == 0) {
                self->step = 1;
            }
        }
        break;
    case 6:
        prim = g_Dialogue.prim[5];
        prim = prim->next;
        g_Dialogue.portraitAnimTimer--;
        if (g_Dialogue.portraitAnimTimer >= 0xC) {
            prim = prim->next;
            prim->u0 -= 20;
            if (g_Dialogue.portraitAnimTimer & 1) {
                prim->u0--;
                return;
            }
        } else {
            if (!g_Dialogue.portraitAnimTimer) {
                self->step = 1;
                prim->drawMode = DRAW_HIDE;
            } else {
                prim->y2 = (prim->y3 -= 6);
            }
            prim = prim->next;
            prim->drawMode = DRAW_HIDE;
            return;
        }
        break;

    case 7:
        DestroyEntity(self);
        g_CastleFlags[MET_MARIA_IN_DAI] = 1;
        g_CutsceneHasControl = 0;
        g_Settings.D_8003CB04 |= 0x400;
        break;
    }
}

void func_801961DC(s16 arg0) {
    s16 temp_v0 = arg0 - g_unkGraphicsStruct.unkC;

    if (temp_v0 > 1) {
        g_unkGraphicsStruct.unkC++;
    } else if (temp_v0 < -1) {
        g_unkGraphicsStruct.unkC--;
    } else {
        g_unkGraphicsStruct.unkC = arg0;
    }
}

void func_us_801C5920(Entity* self) {
    Tilemap* gTilemap;
    Entity* gEntities;
    s16 posScrollX;

    gTilemap = &g_Tilemap;
    gEntities = g_Entities;

    posScrollX = gEntities->posX.i.hi + g_Tilemap.scrollX.i.hi;

    switch (self->step) {
    case 0:
        InitializeEntity(g_EInitSpawner);
        g_PauseAllowed = false;
        g_unkGraphicsStruct.pauseEnemies = true;
        if (g_Player.status & 1) {
            g_Player.padSim = PAD_R1;
        } else if (g_Player.status & 2) {
#ifdef VERSION_PSP
            g_Player.padSim = PAD_NONE;
        } else if (g_Player.status & 4) {
            g_Player.padSim = PAD_L1;
#else
            g_Player.padSim = PAD_L1;
        } else if (g_Player.status & 4) {
            g_Player.padSim = PAD_R2;
#endif
        } else {
            g_Player.padSim = PAD_LEFT;
        }
        g_Player.demo_timer = 1;
        break;
    case 1:
        if (posScrollX > 0x170) {
            if (g_Player.status & 7) {
                g_Player.padSim = PAD_NONE;
                if (g_Timer & 1) {
                    if (g_Player.status & 1) {
                        g_Player.padSim = PAD_R1;
                    } else if (g_Player.status & 2) {
#ifdef VERSION_PSP
                        g_Player.padSim = PAD_R1 | PAD_L1;
                    } else if (g_Player.status & 4) {
                        g_Player.padSim = PAD_L1;
#else
                        g_Player.padSim = PAD_L1;
                    } else if (g_Player.status & 4) {
                        g_Player.padSim = PAD_R2;
#endif
                    }
                }
            } else {
                g_Player.padSim = PAD_LEFT;
            }
        } else {
            gEntities->posX.i.hi = 0x170 - g_Tilemap.scrollX.i.hi;
            g_Player.padSim = 0;
            g_CutsceneFlags |= 1;
            self->step++;
        }
        g_Player.demo_timer = 1;
        break;
    case 2:
        func_801961DC(0xB0);
        g_Player.demo_timer = 1;
        if (g_CutsceneFlags & 2) {
            self->step++;
            return;
        }
        break;
    case 3:
        func_801961DC(0x80);
        if ((g_unkGraphicsStruct.unkC == 0x80) && (g_CutsceneFlags & 8)) {
            g_PauseAllowed = true;
            if (g_unkGraphicsStruct.pauseEnemies) {
                g_unkGraphicsStruct.pauseEnemies = false;
            }
            DestroyEntity(self);
        }
        g_Player.padSim = 0;
        g_Player.demo_timer = 1;
    }
}

void func_us_801C5B88(Entity* self) {
    Tilemap* gTilemap;
    Entity* gEntities;
    s16 posScrollX, posScrollY;
    s32 pan;

    gTilemap = &g_Tilemap;
    gEntities = g_Entities;

    posScrollX = self->posX.i.hi + gTilemap->scrollX.i.hi;
    posScrollY = self->posY.i.hi + gTilemap->scrollY.i.hi;

    switch (self->step) {
    case 0:
        InitializeEntity(g_EInitInteractable);
        self->animSet = -0x7FF1;
        self->animCurFrame = 0xA;
        self->unk5A = 0x48;
        self->palette = 0x251;
        break;
    case 1:
        if (g_CutsceneFlags & 4) {
            self->step++;
        }
        break;
    case 2:
        if (!AnimateEntity(&D_us_80181024, self)) {
            SetStep(3);
            self->velocityX = FIX(1.5);
        }
        break;
    case 3:
        pan = AnimateEntity(&D_us_80181030, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x170) {
            SetStep(4);
            self->velocityY = FIX(-4);
        }
        break;
    case 4:
        AnimateEntity(&D_us_80181044, self);
        self->velocityY += FIX(0.1875);
        MoveEntity();
        if (self->velocityY > 0 && posScrollY > 0x97) {
            self->posY.i.hi = 0x97 - gTilemap->scrollY.i.hi;
            self->velocityY = FIX(0);
            SetStep(5);
        }
        break;
    case 5:
        pan = AnimateEntity(&D_us_80181030, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x1C0) {
            SetStep(6);
            self->velocityY = FIX(-4);
            g_CutsceneFlags |= 8;
        }
        break;
    case 6:
        AnimateEntity(&D_us_80181044, self);
        self->velocityY += FIX(0.1875);
        MoveEntity();
        if (self->velocityY > 0 && posScrollY > 0x87) {
            self->posY.i.hi = 0x87 - gTilemap->scrollY.i.hi;
            self->velocityY = FIX(0);
            SetStep(7);
        }
        break;
    case 7:
        pan = AnimateEntity(&D_us_80181030, self);
        if (pan & 0x80 && (self->pose == 3 || self->pose == 7)) {
            pan = (self->posX.i.hi - 120) / 16;
            if (pan < -8) {
                pan = -8;
            }
            if (pan > 8) {
                pan = 8;
            }
            g_api.PlaySfxVolPan(0x64C, 0x50, pan);
        }
        MoveEntity();
        if (posScrollX > 0x220) {
            DestroyEntity(self);
        }
        break;
    }
}
