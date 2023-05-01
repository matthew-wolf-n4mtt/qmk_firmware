/* Copyright 2022 Matthew J Wolf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * -----
 * Based on F77_-_JIS_-_0-9.json from Joe of Model F Labs
 */
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_all(
           KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_INT3, KC_BSPC,    KC_P7, KC_P8, KC_P9, 
	   KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, _______,          KC_P4, KC_P5, KC_P6, 
	   KC_LNG2,   KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,      KC_P1, KC_P2, KC_P3, 
	   KC_LSFT, _______, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(_FN1),  KC_P0, KC_UP, KC_PDOT, 
	   KC_LCTL, KC_LALT, KC_INT5,              KC_SPC,           KC_INT4, KC_INT2, KC_RALT, KC_RCTL,             KC_LEFT, KC_DOWN, KC_RGHT
	),
	[_FN1] = LAYOUT_all(
           KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,                     KC_HOME, KC_UP,   KC_PGUP, 
	   _______,    _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, KC_UP, _______, KC_DEL,      KC_DEL,  KC_END,  KC_PGDN, 
	   _______,    KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______, _______,   _______, _______, _______, 
	   _______, _______, _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, _______, _______,       _______, _______, _______, 
	   _______, _______, _______,               MO(_FN2),          _______, _______, _______, _______,                                    _______, _______, _______
	),
        [_FN2] = LAYOUT_all(
           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, HF_DWLD,HF_DWLU, _______, _______,   _______, _______, _______,
           _______,   _______, _______, EE_CLR, QK_BOOT, HF_TOGG, _______, _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______,
           _______,     _______, _______, DB_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______,
           _______, _______, _______,                              _______,                       _______, _______, _______, _______,                 _______, _______, _______
        )
};
