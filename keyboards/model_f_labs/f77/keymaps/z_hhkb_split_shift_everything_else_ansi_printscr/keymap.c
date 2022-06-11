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
 * Based on zF77_-_HHKB_Split_Shift,_everything_else_ANSI_-_PrintScr.json from Joe of Model F Labs 
 */
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_all(
           KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,      KC_PSCR, KC_SLCK, KC_PAUS, 
	   KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,          KC_INS,  KC_HOME, KC_PGUP, 
	   KC_CAPS,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,      KC_DEL,  KC_END,  KC_PGDN, 
	   KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(_FN1),  KC_NO,   KC_UP,   KC_NO, 
	   KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,             KC_NO, KC_RALT, KC_NLCK, KC_RCTL,           KC_LEFT, KC_DOWN, KC_RGHT
	),
	[_FN1] = LAYOUT_all(
           KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_INS,                KC_NO, KC_NO, KC_NO, 
	   KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_NO, KC_DEL,                  KC_NO, KC_NO, KC_NO, 
	   _______,    KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, KC_NO, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, 
	   _______, _______, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, _______, _______,           KC_NO, KC_NO, KC_NO, 
	   _______, KC_NO, _______,                  MO(_FN2),            _______, _______, KC_NO, _______,                             KC_NO, KC_NO, KC_NO
	),
    [_FN2] = LAYOUT_all(
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, HPT_DWLD, HPT_DWLI, _______, _______,  _______, _______, _______, 
       _______,   _______, _______, EEP_RST, RESET,   HPT_TOG, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, 
       _______,     _______, _______, DEBUG,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, 
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, _______, 
       _______, _______, _______,                       _______,                           _______, _______, _______, _______,                   _______, _______, _______
    )
};
