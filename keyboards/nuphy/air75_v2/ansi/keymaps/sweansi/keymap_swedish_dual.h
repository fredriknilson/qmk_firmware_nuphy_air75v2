// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

#define QMK_SWEDISH_DUAL_KEYCODES_VERSION "0.0.1"
#define QMK_SWEDISH_DUAL_KEYCODES_VERSION_BCD 0x00000001
#define QMK_SWEDISH_DUAL_KEYCODES_VERSION_MAJOR 0
#define QMK_SWEDISH_DUAL_KEYCODES_VERSION_MINOR 0
#define QMK_SWEDISH_DUAL_KEYCODES_VERSION_PATCH 1

// Aliases
#define WN_SECT KC_GRV  // §
#define WN_1    KC_1    // 1
#define WN_2    KC_2    // 2
#define WN_3    KC_3    // 3
#define WN_4    KC_4    // 4
#define WN_5    KC_5    // 5
#define WN_6    KC_6    // 6
#define WN_7    KC_7    // 7
#define WN_8    KC_8    // 8
#define WN_9    KC_9    // 9
#define WN_0    KC_0    // 0
#define WN_PLUS KC_MINS // +
#define WN_ACUT KC_EQL  // ´ (dead)
#define WN_Q    KC_Q    // Q
#define WN_W    KC_W    // W
#define WN_E    KC_E    // E
#define WN_R    KC_R    // R
#define WN_T    KC_T    // T
#define WN_Y    KC_Y    // Y
#define WN_U    KC_U    // U
#define WN_I    KC_I    // I
#define WN_O    KC_O    // O
#define WN_P    KC_P    // P
#define WN_ARNG KC_LBRC // Å
#define WN_DIAE KC_RBRC // ¨ (dead)
#define WN_A    KC_A    // A
#define WN_S    KC_S    // S
#define WN_D    KC_D    // D
#define WN_F    KC_F    // F
#define WN_G    KC_G    // G
#define WN_H    KC_H    // H
#define WN_J    KC_J    // J
#define WN_K    KC_K    // K
#define WN_L    KC_L    // L
#define WN_ODIA KC_SCLN // Ö
#define WN_ADIA KC_QUOT // Ä
#define WN_QUOT KC_NUHS // '
#define WN_LABK KC_NUBS // <
#define WN_Z    KC_Z    // Z
#define WN_X    KC_X    // X
#define WN_C    KC_C    // C
#define WN_V    KC_V    // V
#define WN_B    KC_B    // B
#define WN_N    KC_N    // N
#define WN_M    KC_M    // M
#define WN_COMM KC_COMM // ,
#define WN_DOT  KC_DOT  // .
#define WN_MINS KC_SLSH // -
#define WN_HALF S(WN_SECT) // ½
#define WN_EXLM S(WN_1)    // !
#define WN_DQUO S(WN_2)    // "
#define WN_HASH S(WN_3)    // #
#define WN_CURR S(WN_4)    // ¤
#define WN_PERC S(WN_5)    // %
#define WN_AMPR S(WN_6)    // &
#define WN_SLSH S(WN_7)    // /
#define WN_LPRN S(WN_8)    // (
#define WN_RPRN S(WN_9)    // )
#define WN_EQL  S(WN_0)    // =
#define WN_QUES S(WN_PLUS) // ?
#define WN_GRV  S(WN_ACUT) // ` (dead)
#define WN_CIRC S(WN_DIAE) // ^ (dead)
#define WN_ASTR S(WN_QUOT) // *
#define WN_RABK S(WN_LABK) // >
#define WN_SCLN S(WN_COMM) // ;
#define WN_COLN S(WN_DOT)  // :
#define WN_UNDS S(WN_MINS) // _
#define WN_AT   ALGR(WN_2)    // @
#define WN_PND  ALGR(WN_3)    // £
#define WN_DLR  ALGR(WN_4)    // $
#define WN_EURO ALGR(WN_5)    // €
#define WN_LCBR ALGR(WN_7)    // {
#define WN_LBRC ALGR(WN_8)    // [
#define WN_RBRC ALGR(WN_9)    // ]
#define WN_RCBR ALGR(WN_0)    // }
#define WN_BSLS ALGR(WN_PLUS) // (backslash)
#define WN_TILD ALGR(WN_DIAE) // ~ (dead)
#define WN_PIPE ALGR(WN_LABK) // |
#define WN_MICR ALGR(WN_M)    // µ

#define MC_SECT KC_GRV  // §
#define MC_1    KC_1    // 1
#define MC_2    KC_2    // 2
#define MC_3    KC_3    // 3
#define MC_4    KC_4    // 4
#define MC_5    KC_5    // 5
#define MC_6    KC_6    // 6
#define MC_7    KC_7    // 7
#define MC_8    KC_8    // 8
#define MC_9    KC_9    // 9
#define MC_0    KC_0    // 0
#define MC_PLUS KC_MINS // +
#define MC_ACUT KC_EQL  // ´ (dead)
#define MC_Q    KC_Q    // Q
#define MC_W    KC_W    // W
#define MC_E    KC_E    // E
#define MC_R    KC_R    // R
#define MC_T    KC_T    // T
#define MC_Y    KC_Y    // Y
#define MC_U    KC_U    // U
#define MC_I    KC_I    // I
#define MC_O    KC_O    // O
#define MC_P    KC_P    // P
#define MC_ARNG KC_LBRC // Å
#define MC_DIAE KC_RBRC // ¨ (dead)
#define MC_A    KC_A    // A
#define MC_S    KC_S    // S
#define MC_D    KC_D    // D
#define MC_F    KC_F    // F
#define MC_G    KC_G    // G
#define MC_H    KC_H    // H
#define MC_J    KC_J    // J
#define MC_K    KC_K    // K
#define MC_L    KC_L    // L
#define MC_ODIA KC_SCLN // Ö
#define MC_ADIA KC_QUOT // Ä
#define MC_QUOT KC_NUHS // '
#define MC_LABK KC_NUBS // <
#define MC_Z    KC_Z    // Z
#define MC_X    KC_X    // X
#define MC_C    KC_C    // C
#define MC_V    KC_V    // V
#define MC_B    KC_B    // B
#define MC_N    KC_N    // N
#define MC_M    KC_M    // M
#define MC_COMM KC_COMM // ,
#define MC_DOT  KC_DOT  // .
#define MC_MINS KC_SLSH // -
#define MC_DEG  S(MC_SECT) // °
#define MC_EXLM S(MC_1)    // !
#define MC_DQUO S(MC_2)    // "
#define MC_HASH S(MC_3)    // #
#define MC_EURO S(MC_4)    // €
#define MC_PERC S(MC_5)    // %
#define MC_AMPR S(MC_6)    // &
#define MC_SLSH S(MC_7)    // /
#define MC_LPRN S(MC_8)    // (
#define MC_RPRN S(MC_9)    // )
#define MC_EQL  S(MC_0)    // =
#define MC_QUES S(MC_PLUS) // ?
#define MC_GRV  S(MC_ACUT) // `
#define MC_CIRC S(MC_DIAE) // ^ (dead)
#define MC_ASTR S(MC_QUOT) // *
#define MC_RABK S(MC_LABK) // >
#define MC_SCLN S(MC_COMM) // ;
#define MC_COLN S(MC_DOT)  // :
#define MC_UNDS S(MC_MINS) // _
#define MC_PILC A(MC_SECT) // ¶
#define MC_COPY A(MC_1)    // ©
#define MC_AT   A(MC_2)    // @
#define MC_PND  A(MC_3)    // £
#define MC_DLR  A(MC_4)    // $
#define MC_INFN A(MC_5)    // ∞
#define MC_PIPE A(MC_7)    // |
#define MC_LBRC A(MC_8)    // [
#define MC_RBRC A(MC_9)    // ]
#define MC_AEQL A(MC_0)    // ≈
#define MC_PLMN A(MC_PLUS) // ±
#define MC_BULT A(MC_Q)    // •
#define MC_OMEG A(MC_W)    // Ω
#define MC_EACU A(MC_E)    // É
#define MC_REGD A(MC_R)    // ®
#define MC_DAGG A(MC_T)    // †
#define MC_MICR A(MC_Y)    // µ
#define MC_UDIA A(MC_U)    // Ü
#define MC_DLSI A(MC_I)    // ı
#define MC_OE   A(MC_O)    // Œ
#define MC_PI   A(MC_P)    // π
#define MC_DOTA A(MC_ARNG) // ˙
#define MC_TILD A(MC_DIAE) // ~ (dead)
#define MC_APPL A(MC_A)    //  (Apple logo)
#define MC_SS   A(MC_S)    // ß
#define MC_PDIF A(MC_D)    // ∂
#define MC_FHK  A(MC_F)    // ƒ
#define MC_CEDL A(MC_G)    // ¸
#define MC_OGON A(MC_H)    // ˛
#define MC_SQRT A(MC_J)    // √
#define MC_FORD A(MC_K)    // ª
#define MC_FI   A(MC_L)    // ﬁ
#define MC_OSTR A(MC_ODIA) // Ø
#define MC_AE   A(MC_ADIA) // Æ
#define MC_TM   A(MC_QUOT) // ™
#define MC_LTEQ A(MC_LABK) // ≤
#define MC_DIV  A(MC_Z)    // ÷
#define MC_CCED A(MC_C)    // Ç
#define MC_LSAQ A(MC_V)    // ‹
#define MC_RSAQ A(MC_B)    // ›
#define MC_LSQU A(MC_N)    // ‘
#define MC_RSQU A(MC_M)    // ’
#define MC_SLQU A(MC_COMM) // ‚
#define MC_ELLP A(MC_DOT)  // …
#define MC_NDSH A(MC_MINS) // –
#define MC_IEXL S(A(MC_1))    // ¡
#define MC_YEN  S(A(MC_3))    // ¥
#define MC_CENT S(A(MC_4))    // ¢
#define MC_PERM S(A(MC_5))    // ‰
#define MC_BSLS S(A(MC_7))    // (backslash)
#define MC_LCBR S(A(MC_8))    // {
#define MC_RCBR S(A(MC_9))    // }
#define MC_NEQL S(A(MC_0))    // ≠
#define MC_IQUE S(A(MC_PLUS)) // ¿
#define MC_DACU S(A(MC_W))    // ˝
#define MC_DDAG S(A(MC_T))    // ‡
#define MC_STIL S(A(MC_Y))    // ˜
#define MC_DCIR S(A(MC_I))    // ˆ
#define MC_NARP S(A(MC_P))    // ∏
#define MC_RNGA S(A(MC_ARNG)) // ˚
#define MC_LOZN S(A(MC_A))    // ◊
#define MC_NARS S(A(MC_S))    // ∑
#define MC_INCR S(A(MC_D))    // ∆
#define MC_INTG S(A(MC_F))    // ∫
#define MC_MACR S(A(MC_G))    // ¯
#define MC_BREV S(A(MC_H))    // ˘
#define MC_NOT  S(A(MC_J))    // ¬
#define MC_MORD S(A(MC_K))    // º
#define MC_FL   S(A(MC_L))    // ﬂ
#define MC_GTEQ S(A(MC_LABK)) // ≥
#define MC_FRSL S(A(MC_Z))    // ⁄
#define MC_CARN S(A(MC_X))    // ˇ
#define MC_LDAQ S(A(MC_V))    // «
#define MC_RDAQ S(A(MC_B))    // »
#define MC_LDQU S(A(MC_N))    // “
#define MC_RDQU S(A(MC_M))    // ”
#define MC_DLQU S(A(MC_COMM)) // „
#define MC_MDDT S(A(MC_DOT))  // ·
#define MC_MDSH S(A(MC_MINS)) // —

