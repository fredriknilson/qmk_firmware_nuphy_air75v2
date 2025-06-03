/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "keymap_swedish_dual.h"

// -------------------- Layers --------------------

// Layer enum
enum layers {
    _MAC,
    _MACFN,
    _WIN,
    _WINFN,
    _SYS,
};

// Layer Masks
#define MAC_LAYERS ((1 << _MAC) | (1 << _MACFN))
#define WIN_LAYERS ((1 << _WIN) | (1 << _WINFN))

// -------------------- Home Row Mods --------------------Add commentMore actions

// Left-hand home row mods
#define HM_A LSFT_T(MC_A)
#define HM_S LCTL_T(MC_S)
#define HM_D LALT_T(MC_D)
#define HM_F LGUI_T(MC_F)

// Right-hand home row mods
#define HM_J    RGUI_T(MC_J)
#define HM_K    RALT_T(MC_K)
#define HM_L    RCTL_T(MC_L)
#define HM_SCLN RSFT_T(MC_SCLN)
#define HM_ODIA RSFT_T(MC_ODIA)

// -------------------- Mac-specific overrides --------------------

// " → @
const key_override_t mac_shift_2_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_2, MC_AT, MAC_LAYERS);
// € → $
const key_override_t mac_shift_4_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_4, MC_DLR, MAC_LAYERS);
// option + 4 → €
const key_override_t mac_opt_4_override = ko_make_with_layers(MOD_MASK_ALT, MC_4, MC_EURO, MAC_LAYERS);
// & → ^
const key_override_t mac_shift_6_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_6, MC_CIRC, MAC_LAYERS);
// / → &
const key_override_t mac_shift_7_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_7, MC_AMPR, MAC_LAYERS);
// ( → *
const key_override_t mac_shift_8_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_8, MC_ASTR, MAC_LAYERS);
// ) → (
const key_override_t mac_shift_9_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_9, MC_LPRN, MAC_LAYERS);
// = → )
const key_override_t mac_shift_0_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_0, MC_RPRN, MAC_LAYERS);
// shift + = → +
const key_override_t mac_shift_equal_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_EQL, MC_PLUS, MAC_LAYERS);
// shift + ' → "
const key_override_t mac_shift_quot_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_QUOT, MC_DQUO, MAC_LAYERS);
// option + ' → ´
const key_override_t mac_opt_quot_override = ko_make_with_layers(MOD_MASK_ALT, MC_QUOT, MC_ACUT, MAC_LAYERS);
// shift + \ → |
const key_override_t mac_shift_backslash_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_BSLS, MC_PIPE, MAC_LAYERS);
// shift + ` → ~
const key_override_t mac_shift_grv_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_GRV, MC_TILD, MAC_LAYERS);
// shift + / → ?
const key_override_t mac_shift_slash_override = ko_make_with_layers(MOD_MASK_SHIFT, MC_SLSH, MC_QUES, MAC_LAYERS);
// option + , → <
const key_override_t mac_opt_comma_lt_override = ko_make_with_layers(MOD_MASK_ALT, MC_COMM, MC_LABK, MAC_LAYERS);
// option + . → >
const key_override_t mac_opt_dot_gt_override = ko_make_with_layers(MOD_MASK_ALT, MC_DOT, MC_RABK, MAC_LAYERS);
// option + ` → ¨
const key_override_t mac_opt_grv_override = ko_make_with_layers(MOD_MASK_ALT, MC_GRV, MC_DIAE, MAC_LAYERS);

// [
const key_override_t mac_lbracket_override = ko_make_with_layers_and_negmods(MOD_MASK_ALT, MC_ARNG, MC_LBRC, MAC_LAYERS, MOD_MASK_SHIFT);
// ]
const key_override_t mac_rbracket_override = ko_make_with_layers_and_negmods(MOD_MASK_ALT, MC_ADIA, MC_RBRC, MAC_LAYERS, MOD_MASK_SHIFT);
// {
const key_override_t mac_lcurly_override = ko_make_with_layers(MOD_MASK_SA, MC_ARNG, MC_LCBR, MAC_LAYERS);
// }
const key_override_t mac_rcurly_override = ko_make_with_layers(MOD_MASK_SA, MC_ADIA, MC_RCBR, MAC_LAYERS);


// -------------------- Windows-specific overrides --------------------
// " → @
const key_override_t win_shift_2_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_2, WN_AT, WIN_LAYERS);
// € → $
const key_override_t win_shift_4_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_4, WN_DLR, WIN_LAYERS);
// altgr + 4 → ¤
const key_override_t win_alt_4_override = ko_make_with_layers(MOD_MASK_ALT, WN_4, WN_CURR, WIN_LAYERS);
// & → ^
const key_override_t win_shift_6_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_6, WN_CIRC, WIN_LAYERS);
// / → &
const key_override_t win_shift_7_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_7, WN_AMPR, WIN_LAYERS);
// ( → *
const key_override_t win_shift_8_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_8, WN_ASTR, WIN_LAYERS);
// ) → (
const key_override_t win_shift_9_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_9, WN_LPRN, WIN_LAYERS);
// = → )
const key_override_t win_shift_0_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_0, WN_RPRN, WIN_LAYERS);
// shift + = → +
const key_override_t win_shift_equal_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_EQL, WN_PLUS, WIN_LAYERS);
// shift + ' → "
const key_override_t win_shift_quot_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_QUOT, WN_DQUO, WIN_LAYERS);
// altgr + ' → ´
const key_override_t win_alt_quot_override = ko_make_with_layers(MOD_MASK_ALT, WN_QUOT, WN_ACUT, WIN_LAYERS);
// shift + \ → |
const key_override_t win_shift_backslash_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_BSLS, WN_PIPE, WIN_LAYERS);
// shift + ` → ~
const key_override_t win_shift_grv_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_GRV, WN_TILD, WIN_LAYERS);
// shift + / → ?
const key_override_t win_shift_slash_override = ko_make_with_layers(MOD_MASK_SHIFT, WN_SLSH, WN_QUES, WIN_LAYERS);
// altgr + , → <
const key_override_t win_alt_comma_lt_override = ko_make_with_layers(MOD_MASK_ALT, WN_COMM, WN_LABK, WIN_LAYERS);
// altgr + . → >
const key_override_t win_alt_dot_gt_override = ko_make_with_layers(MOD_MASK_ALT, WN_DOT, WN_RABK, WIN_LAYERS);
// altgr + ` → ¨
const key_override_t win_alt_grv_override = ko_make_with_layers(MOD_MASK_ALT, WN_GRV, WN_DIAE, WIN_LAYERS);

// [
const key_override_t win_bracket_override = ko_make_with_layers_and_negmods(MOD_MASK_ALT, WN_ARNG, WN_LBRC, WIN_LAYERS, MOD_MASK_SHIFT);
// ]
const key_override_t win_rbracket_override = ko_make_with_layers_and_negmods(MOD_MASK_ALT, WN_ADIA, WN_RBRC, WIN_LAYERS, MOD_MASK_SHIFT);
// {
const key_override_t win_lcurly_override = ko_make_with_layers(MOD_MASK_SA, WN_ARNG, WN_LCBR, WIN_LAYERS);
// }
const key_override_t win_rcurly_override = ko_make_with_layers(MOD_MASK_SA, WN_ADIA, WN_RCBR, WIN_LAYERS);

// -------------------- Key Override List --------------------
const key_override_t *key_overrides[] = {
    &mac_shift_2_override,
    &mac_shift_4_override,
    &mac_opt_4_override,
    &mac_shift_6_override,
    &mac_shift_7_override,
    &mac_shift_8_override,
    &mac_shift_9_override,
    &mac_shift_0_override,
    &mac_shift_equal_override,
    &mac_shift_quot_override,
    &mac_opt_quot_override,
    &mac_shift_backslash_override,
    &mac_shift_grv_override,
    &mac_shift_slash_override,
    &mac_opt_comma_lt_override,
    &mac_opt_dot_gt_override,
    &mac_opt_grv_override,
    &mac_lcurly_override,
    &mac_rcurly_override,
    &mac_lbracket_override,
    &mac_rbracket_override,
    &win_shift_2_override,
    &win_shift_4_override,
    &win_alt_4_override,
    &win_shift_6_override,
    &win_shift_7_override,
    &win_shift_8_override,
    &win_shift_9_override,
    &win_shift_0_override,
    &win_shift_equal_override,
    &win_shift_quot_override,
    &win_alt_quot_override,
    &win_shift_backslash_override,
    &win_shift_grv_override,
    &win_shift_slash_override,
    &win_alt_comma_lt_override,
    &win_alt_dot_gt_override,
    &win_alt_grv_override,
    &win_bracket_override,
    &win_rbracket_override,
    &win_lcurly_override,
    &win_rcurly_override,
    NULL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[_MAC] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      SYS_PRT,    KC_INS,     KC_DEL,
    MC_GRV,     MC_1,      MC_2,        MC_3,      MC_4,       MC_5,        MC_6,      MC_7,       MC_8,        MC_9,      MC_0,       MC_MINS,    MC_EQL,                  KC_BSPC,    KC_HOME,
    KC_TAB,     MC_Q,      MC_W,        MC_E,      MC_R,       MC_T,        MC_Y,      MC_U,       MC_I,        MC_O,      MC_P,       MC_ARNG,    MC_QUOT,                 MC_BSLS,    KC_END,
    KC_MEH,     HM_A,      HM_S,        HM_D,      HM_F,       MC_G,        MC_H,      HM_J,       HM_K,        HM_L,      HM_ODIA,    MC_ADIA,                             KC_ENT,     KC_PGUP,
    KC_LSFT,               MC_Z,        MC_X,      MC_C,       MC_V,        MC_B,      MC_N,       MC_M,        MC_COMM,   MC_DOT,     MC_SLSH,                 KC_RSFT,    KC_UP,      KC_PGDN,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RALT,   MO(1),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Mac Fn
[_MACFN] = LAYOUT_75_ansi(
    _______,    KC_BRID,   KC_BRIU,     KC_MCTL,   MAC_SEARCH, MAC_VOICE,   MAC_DND,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     MAC_PRTA,   _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,	   _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    DEV_RESET,  _______,                 BAT_SHOW,   _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     BAT_NUM,   _______,    MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RM_VALU,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(1),      _______,                 RM_NEXT,    RM_VALD,    RM_HUEU),

// layer win
[_WIN] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      KC_PSCR,    KC_INS,     KC_DEL,
    WN_GRV,     WN_1,      WN_2,        WN_3,      WN_4,       WN_5,        WN_6,      WN_7,       WN_8,        WN_9,      WN_0,       WN_MINS,    WN_EQL,                  KC_BSPC,    KC_HOME,
    KC_TAB,     WN_Q,      WN_W,        WN_E,      WN_R,       WN_T,        WN_Y,      WN_U,       WN_I,        WN_O,      WN_P,       WN_ARNG,    WN_QUOT,                 WN_BSLS,    KC_END,
    KC_MEH,     WN_A,      WN_S,        WN_D,      WN_F,       WN_G,        WN_H,      WN_J,       WN_K,        WN_L,      WN_ODIA,    WN_ADIA,                             KC_ENT,     KC_PGUP,
    KC_LSFT,               WN_Z,        WN_X,      WN_C,       WN_V,        WN_B,      WN_N,       WN_M,        WN_COMM,   WN_DOT,     WN_SLSH,                 KC_RSFT,    KC_UP,      KC_PGDN,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RALT,   MO(3),      KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer win Fn
[_WINFN] = LAYOUT_75_ansi(
    _______,    KC_BRID,    KC_BRIU,    KC_CALC,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     _______,    _______,    _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,	   _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    DEV_RESET,  _______,                 BAT_SHOW,   _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     BAT_NUM,   _______,    MO(4),       RGB_SPD,   RGB_SPI,    _______,                 _______,    RM_VALU,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(3),      _______,                 RM_NEXT,    RM_VALD,    RM_HUEU),

// layer 4
[_SYS] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     SLEEP_MODE,             _______,    _______,
    _______,    _______,    KB_SLP,     DB_TOGG,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                LINK_TO,    _______,   RGB_TEST,   _______,     _______,   _______,    _______,     SIDE_SPD,  SIDE_SPI,   _______,                 _______,    SIDE_VAI,   _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(4),      _______,                 SIDE_MOD,	SIDE_VAD,   SIDE_HUI),
};
