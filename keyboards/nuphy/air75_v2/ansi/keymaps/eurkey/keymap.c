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

#include "keymap_eurkey.h"

// -------------------- Layers --------------------

// Layer enum
enum layers {
    _MAC,
    _MACFN,
    _WIN,
    _WINFN,
    _SYS,
    _EURKEY,
};

// Layer Masks
#define MAC_LAYERS ((1 << _MAC) | (1 << _MACFN))
#define WIN_LAYERS ((1 << _WIN) | (1 << _WINFN))

// -------------------- Home Row Mods --------------------

// Left-hand home row mods
#define HM_A LSFT_T(KC_A) // Shift + A
#define HM_S LCTL_T(KC_S) // Control + S
#define HM_D LALT_T(KC_D) // Alt + D
#define HM_F LGUI_T(KC_F) // GUI + F

// Right-hand home row mods
#define HM_J    RGUI_T(KC_J) // GUI + J
#define HM_K    RALT_T(KC_K) // Alt + K
#define HM_L    RCTL_T(KC_L) // Control + L
#define HM_ODIA RSFT_T(EU_ODIA) // Shift + Ö


// -------------------- Custom keycode handling --------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(EU_ODIA):
            if (record->tap.count && record->event.pressed) {
                tap_code16(EU_ODIA); // Send EU_ODIA on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}


// -------------------- Keymap --------------------

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[_MAC] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      SYS_PRT,    KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_HOME,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       EU_ARNG,    KC_QUOT,                 KC_BSLS,    KC_END,
    KC_MEH,     HM_A,      HM_S,        HM_D,      HM_F,       KC_G,        KC_H,      HM_J,       HM_K,        HM_L,      HM_ODIA,    EU_ADIA,                             KC_ENT,     KC_PGUP,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_PGDN,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         LT(_EURKEY, KC_SPC),                KC_RALT,   MO(_MACFN), KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Mac Fn
[_MACFN] = LAYOUT_75_ansi(
    DEV_RESET,  KC_BRID,   KC_BRIU,     KC_MCTL,   MAC_SEARCH, MAC_VOICE,   MAC_DND,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     MAC_PRTA,   BAT_SHOW,   _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,	   _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    KC_LBRC,    _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   KC_SCLN,    KC_RBRC,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     BAT_NUM,   _______,    MO(_SYS),    RGB_SPD,   RGB_SPI,    _______,                 _______,    RM_VALU,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(_MACFN), _______,                 RM_NEXT,    RM_VALD,    RM_HUEU),

// layer Win
[_WIN] = LAYOUT_75_ansi(
    KC_ESC,     KC_F1,     KC_F2,       KC_F3,     KC_F4,      KC_F5,       KC_F6,     KC_F7,      KC_F8,       KC_F9,     KC_F10,     KC_F11,     KC_F12,      KC_PSCR,    KC_INS,     KC_DEL,
    KC_GRV,     KC_1,      KC_2,        KC_3,      KC_4,       KC_5,        KC_6,      KC_7,       KC_8,        KC_9,      KC_0,       KC_MINS,    KC_EQL,                  KC_BSPC,    KC_HOME,
    KC_TAB,     KC_Q,      KC_W,        KC_E,      KC_R,       KC_T,        KC_Y,      KC_U,       KC_I,        KC_O,      KC_P,       EU_ARNG,    KC_QUOT,                 KC_BSLS,    KC_END,
    MO(_EURKEY),KC_A,      KC_S,        KC_D,      KC_F,       KC_G,        KC_H,      KC_J,       KC_K,        KC_L,      EU_ODIA,    EU_ADIA,                             KC_ENT,     KC_PGUP,
    KC_LSFT,               KC_Z,        KC_X,      KC_C,       KC_V,        KC_B,      KC_N,       KC_M,        KC_COMM,   KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,      KC_PGDN,
    KC_LCTL,    KC_LALT,   KC_LGUI,                                         KC_SPC,                             KC_RALT,   MO(_WINFN), KC_RCTL,                 KC_LEFT,    KC_DOWN,    KC_RGHT),

// layer Win Fn
[_WINFN] = LAYOUT_75_ansi(
    DEV_RESET,  KC_BRID,    KC_BRIU,    KC_CALC,   _______,    _______,     _______,   KC_MPRV,    KC_MPLY,     KC_MNXT,   KC_MUTE,    KC_VOLD,    KC_VOLU,     _______,    BAT_SHOW,   _______,
    _______,    LNK_BLE1,   LNK_BLE2,   LNK_BLE3,  LNK_RF,     _______,     _______,   _______,    _______,     _______,   _______,    _______,	   _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    KC_LBRC,    _______,                 _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   KC_SCLN,    KC_RBRC,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     BAT_NUM,   _______,    MO(_SYS),    RGB_SPD,   RGB_SPI,    _______,                 _______,    RM_VALU,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(_WINFN), _______,                 RM_NEXT,    RM_VALD,    RM_HUEU),

// layer Sys
[_SYS] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     SLEEP_MODE,             _______,    _______,
    _______,    _______,    KB_SLP,     DB_TOGG,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                             _______,    _______,
    _______,                LINK_TO,    _______,   RGB_TEST,   _______,     _______,   _______,    _______,     SIDE_SPD,  SIDE_SPI,   _______,                 _______,    SIDE_VAI,   _______,
    _______,    _______,    _______,                                        _______,                            _______,   MO(_SYS),   _______,                 SIDE_MOD,	SIDE_VAD,   SIDE_HUI),

// layer EurKey
[_EURKEY] = LAYOUT_75_ansi(
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,     _______,                _______,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    KC_LBRC,     KC_LBRC,                KC_RBRC,    _______,
    _______,    _______,    _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   KC_SCLN,    KC_RBRC,                             _______,    _______,
    _______,                _______,    _______,   _______,    _______,     _______,   _______,    _______,     _______,   _______,    _______,                 _______,    _______,    _______,
    _______,    _______,    _______,                                        _______,                            _______,   _______,    _______,                 _______,	_______,    _______),
};