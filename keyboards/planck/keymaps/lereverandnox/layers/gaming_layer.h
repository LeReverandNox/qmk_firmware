#include "keycodes.h"
#ifdef GAMING_DVORAK
// +-------+------+-----+-----+-------+-------+-------+-------+------+-----+------+-------+
// |   `   |   '  |  ,  |  .  |   P   |   Y   |   F   |   G   |   C  |  R  |   L  |   /   |
// +-------+------+-----+-----+-------+-------+-------+-------+------+-----+------+-------+
// |  Esc  |   A  |  O  |  E  |   U   |   I   |   D   |   H   |   T  |  N  |   S  | Enter |
// +-------+------+-----+-----+-------+-------+-------+-------+------+-----+------+-------+
// | Shift |   ;  |  Q  |  J  |   K   |   X   |   B   |   M   |   W  |  V  |   Z  | Shift |
// +-------+------+-----+-----+-------+-------+-------+-------+------+-----+------+-------+
// |  Ctrl |  GUI | Alt | Tab | Space |       |       | Bkspc | RAlt | Alt |  GUI |  Ctrl |
// |       |      |     | Nav |       | Raise | Lower |       |      |     |      |       |
// +-------+------+-----+-----+-------+-------+-------+-------+------+-----+------+-------+
[_GAMING] = LAYOUT_planck_grid(
    KC_GRV,  KC_QUOT, KC_COMM, KC_DOT, KC_P,   KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    KC_ESC,  KC_A,    KC_O,    KC_E,   KC_U,   KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,   KC_K,   KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, LT_TAB, KC_SPC, G_RAISE, G_LOWER, KC_BSPC, KC_RALT, KC_LALT, KC_RGUI, KC_RCTL
    ),

/* Gaming raise (num)
 * ,-----------------------------------------------------------------------------------
 * |PrtScr| F12  |  F9  |  F8  |  F7  |      |  *   |  7   |  8   |  9   |  \   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  | F11  |  F6  |  F5  |  F4  |      |  -   |  4   |  5   |  6   |  /   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | F10  |  F3  |  F2  |  F1  |      |  +   |  1   |  2   |  3   |  #   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |  =   |      |  0   |  .   |   ,  |      |
 * |      |      |      |      |      |      |      |      |      |  :   |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_GAMING_RAISE] = LAYOUT_planck_grid(
    KC_PSCR, KC_F12,  KC_F9,   KC_F8,   KC_F7,   XXXXXXX, KC_ASTR, KC_7,    KC_8,    KC_9,   KC_BSLS, XXXXXXX,
    KC_TAB,  KC_F11,  KC_F6,   KC_F5,   KC_F4,   XXXXXXX, KC_MINS, KC_4,    KC_5,    KC_6,   KC_SLSH, _______,
    _______, KC_F10,  KC_F3,   KC_F2,   KC_F1,   XXXXXXX, KC_PLUS, KC_1,    KC_2,    KC_3,   KC_HASH, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    TD_DOT, KC_COMM, _______
        ),

/* Gaming lower (sym)
 * ,-----------------------------------------------------------------------------------
 * |   ~  |   "  |      |  *   |  &   |  (   |  )   |   +  |   _  |   |  |   ?  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   '  |  ^   |  %   |  $   |  [   |  ]   |   =  |   -  |   \  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   :  |  #   |  @   |  !   |  {   |  }   |   <  |   >  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Caps |      |      |      | Del  |      |      | Del  |      |      |      | Exit |
 * `-----------------------------------------------------------------------------------'
 */
[_GAMING_LOWER] = LAYOUT_planck_grid(
    KC_TILD, TD_DQUO, XXXXXXX, KC_ASTR, KC_AMPR, TD_LPRN, TD_RPRN, KC_PLUS, KC_UNDS, KC_PIPE, KC_QUES, XXXXXXX,
    TD_GRV,  TD_QUOT, KC_CIRC, KC_PERC, KC_DLR,  TD_LBRC, TD_RBRC, KC_EQL,  KC_MINS, KC_BSLS, KC_SLSH, _______,
    _______, KC_COLN, KC_HASH, KC_AT,   KC_EXLM, TD_LCBR, TD_RCBR, TD_LABK, TD_RABK, XXXXXXX, XXXXXXX, _______,
    KC_CAPS, _______, _______, _______, KC_DEL,  _______, _______, KC_DEL,  _______, _______, _______, EXT_GAM
    ),
#endif
