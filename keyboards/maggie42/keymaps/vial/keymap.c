// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │   │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │   │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───┤
      * │Win│ Z │ X │ C │ V │ B │   │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┼───┼───┼───┤   ├───┼───┼───┼───┴───┴───┘
      *             │Sft│Rse│Spc│   │ BS│Ent│Alt│
      *             └───┴───┴───┘   └───┴───┴───┘
      */
    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                   KC_LSFT, MO(1), KC_SPC, KC_BSPC,  LT(2, KC_ENT),  KC_RALT
    ),
    [1] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
        _______, KC_LNG2, KC_LEFT, KC_UP,   KC_RGHT, KC_PGUP,                            KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        _______, KC_LNG1, KC_HOME, KC_DOWN, KC_END,  KC_PGDN,                            KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                   _______, _______, _______,            KC_DEL,  MO(3), _______
    ),
    [2] = LAYOUT(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        _______, KC_LNG2, KC_LEFT, KC_UP,   KC_RGHT, KC_PGUP,                            KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
        _______, _______, _______, _______, _______, _______,                            KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                   _______,   MO(3), _______,          _______, _______, _______
    ),
    [3] = LAYOUT(
        _______,   KC_F1,  KC_F2 ,   KC_F3,   KC_F4,   KC_F5,                            KC_F6,     KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______,  KC_F12,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,          _______, _______, _______
    )
};
