/* Copyright 2015-2017 Jack Humbert
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
 */

#include QMK_KEYBOARD_H
#include "muse.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _DVORAK,
  _MOUSE,
  _NAV,
  _SYM,
  _NUM,
  _FN,
  _PLOVER,
  _MUSIC,
  _MEDIA,
  _ADJUST
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  DVORAK,
  PLOVER,
  BACKLIT,
  EXT_PLV,
  ALT_TAB,
  KC_MAKE
};

enum tap_dances {
  _DOT = 0
};

#define NAV      MO(_NAV)
#define SYM      MO(_SYM)
#define NUM      MO(_NUM)
#define FN       MO(_FN)
#define ADJUST   MO(_ADJUST)
#define MOUSE_T  TG(_MOUSE)
#define MEDIA    MO(_MEDIA)

#define HOME_AD  CTL_T(KC_A)
#define HOME_OD  LGUI_T(KC_O)
#define HOME_ED  LALT_T(KC_E)
#define HOME_UD  LSFT_T(KC_U)
#define HOME_HD  RSFT_T(KC_H)
#define HOME_TD  LALT_T(KC_T)
#define HOME_ND  RGUI_T(KC_N)
#define HOME_SD  RCTL_T(KC_S)

#define HOME_AQ  CTL_T(KC_A)
#define HOME_SQ  LGUI_T(KC_S)
#define HOME_DQ  LALT_T(KC_D)
#define HOME_FQ  LSFT_T(KC_F)
#define HOME_JQ  RSFT_T(KC_J)
#define HOME_KQ  LALT_T(KC_K)
#define HOME_LQ  RGUI_T(KC_L)
#define HOME_SC  RCTL_T(KC_SCLN)

#define LT_ESC   LT(NAV, KC_ESC)
#define LT_SPC   LT(SYM, KC_SPC)
#define LT_TAB   LT(NUM, KC_TAB)
#define LT_ENT   LT(NUM, KC_ENT)
#define LT_BSPC  LT(SYM, KC_BSPC)
#define LT_RALT  LT(FN,  KC_RALT)
#define OS_LALT  OSM(MOD_LALT)
#define OS_RGUI  OSM(MOD_RGUI)
#define OS_RCTL  OSM(MOD_RCTL)

#define TD_DOT   TD(_DOT)

#define ALT_TAB_TRESHOLD 500

#define NKR_TOG MAGIC_TOGGLE_NKRO

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [_DOT]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |Mouse |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Mouse |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Media |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |  Spc | Tab  |Enter | Bksp | RAlt | Alt  |  GUI | Ctrl |
 * |      |      |      | Nav  | Sym  | Num  | Num  | Sym  |  Fn  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    MOUSE_T, KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,     KC_I,     KC_O,    KC_P,     MOUSE_T,
    MEDIA,   HOME_AQ,  HOME_SQ,  HOME_DQ, HOME_FQ, KC_G,   KC_H,   HOME_JQ,  HOME_KQ,  HOME_LQ, HOME_SC,  XXXXXXX,
    XXXXXXX, KC_Z,     KC_X,     KC_C,    KC_V,    KC_B,   KC_N,   KC_M,     KC_COMM,  KC_DOT,  KC_SLSH,  XXXXXXX,
    KC_LCTL, KC_LGUI,  KC_LALT,  LT_ESC,  LT_SPC,  LT_TAB, LT_ENT, LT_BSPC,  LT_RALT,  OS_LALT, OS_RGUI,  OS_RCTL
    ),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |Mouse |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |Mouse |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Media |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |  Spc | Tab  |Enter | Bksp | RAlt | Alt  |  GUI | Ctrl |
 * |      |      |      | Nav  | Sym  | Num  | Num  | Sym  |  Fn  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_planck_grid(
    MOUSE_T, KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,    KC_Y,   KC_F,   KC_G,     KC_C,     KC_R,    KC_L,      MOUSE_T,
    MEDIA,   HOME_AD,  HOME_OD,  HOME_ED, HOME_UD, KC_I,   KC_D,   HOME_HD,  HOME_TD,  HOME_ND, HOME_SD,   XXXXXXX,
    XXXXXXX, KC_SCLN,  KC_Q,     KC_J,    KC_K,    KC_X,   KC_B,   KC_M,     KC_W,     KC_V,    KC_Z,      XXXXXXX,
    KC_LCTL, KC_LGUI,  KC_LALT,  LT_ESC,  LT_SPC,  LT_TAB, LT_ENT, LT_BSPC,  LT_RALT,  OS_LALT, OS_RGUI,   OS_RCTL
    ),

/* Left Nav
 * ,-----------------------------------------------------------------------------------
 * | ATab |      |      |      |      |      |      | Home |Pg Up |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Ctrl |  GUI |  Alt |Shift |      |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | End  |Pg Dn |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Ins  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_planck_grid(
    ALT_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, _______,
    _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______,  _______, _______, _______
    ),

/* Symbols
 * ,-----------------------------------------------------------------------------------
 * | Caps |  `   |  ~   |  *   |  &   |      |      |  (   |  )   |  /   |  ?   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  -   |  ^   |  %   |  $   |      |      |  [   |  ]   |  \   |  |   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  _   |  #   |  @   |  !   |      |      |  {   |  }   |  =   |  +   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Del  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT_planck_grid(
    KC_CAPS, KC_GRV,  KC_TILD, KC_ASTR, KC_AMPR, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_SLSH, KC_QUES, _______,
    _______, KC_MINS, KC_CIRC, KC_PERC, KC_DLR,  XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS, KC_PIPE, _______,
    _______, KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_EQL,  KC_PLUS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______
    ),

/* Numbers
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |  /   |  7   |  8   |  9   |  *   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  F   |  E   |  D   |      |  #   |  4   |  5   |  6   |  -   |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  C   |  B   |  A   |      |  \   |  1   |  2   |  3   |  +   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  0   |  ,   |  .   |  =   |      |
 * |      |      |      |      |      |      |      |      |      |  :   |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH, KC_7, KC_8,    KC_9,   KC_ASTR, _______,
    _______, XXXXXXX, KC_F,    KC_E,    KC_D,    XXXXXXX, KC_HASH, KC_4, KC_5,    KC_6,   KC_MINS, _______,
    _______, XXXXXXX, KC_C,    KC_B,    KC_A,    XXXXXXX, KC_BSLS, KC_1, KC_2,    KC_3,   KC_PLUS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_0, KC_COMM, TD_DOT, KC_EQL,  _______
        ),

/* Fn
 * ,-----------------------------------------------------------------------------------
 * |      | F12  |  F9  |  F8  |  F7  |      |      |Pause |ScrLck|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | F11  |  F6  |  F5  |  F4  |      |      |      |      |      |      |      |
 * |      |      |      |      |      |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | F10  |  F3  |  F2  |  F1  |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |Adjust|      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_FN] = LAYOUT_planck_grid(
    XXXXXXX, KC_F12,  KC_F9,   KC_F8,   KC_F7,   XXXXXXX, XXXXXXX, KC_PAUS, KC_SLCK, XXXXXXX, XXXXXXX, _______,
    _______, KC_F11,  KC_F6,   KC_F5,   KC_F4,   XXXXXXX, XXXXXXX, KC_LSFT, KC_LALT, KC_LGUI, KC_LCTL, _______,
    _______, KC_F10,  KC_F3,   KC_F2,   KC_F1,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, ADJUST,  _______, _______, _______, _______
    ),

/* Plover layer (http://opensteno.org)
 * ,-----------------------------------------------------------------------------------.
 * |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |   #  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   S  |   T  |   P  |   H  |   *  |   *  |   F  |   P  |   L  |   T  |   D  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   S  |   K  |   W  |   R  |   *  |   *  |   R  |   B  |   G  |   S  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Exit |      |      |   A  |   O  |             |   E  |   U  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_PLOVER] = LAYOUT_planck_grid(
    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1   ,
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    EXT_PLV, XXXXXXX, XXXXXXX, KC_C,    KC_V,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX
),

/* Adjust (Sym + Num)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------
 * |Mu Tog|Ck Tog|Au Tog| RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-| Make |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Mu Mod|Ck Rst|MidiTo|Ag Tog|NKRO T|      |      |      |      |      |Reset |EepRst|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Voice+|Ck P+ |      |      |      |      |      |      |      |      |      |Debug |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Voice-|Ck P- |      |      |      |      |      |      |      |Plover|Qwerty|Dvorak|
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    MU_TOG, CK_TOGG, AU_TOG,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_MAKE,
    MU_MOD, CK_RST,  MI_TOG,  AG_TOGG, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   EEP_RST,
    MUV_IN, CK_UP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG,
    MUV_DE, CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  QWERTY,  DVORAK
    ),

/* Music
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Rec  | Stop | Play |Speed-|Speed+|Adjust|      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MUSIC] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LCTL, KC_LALT, KC_LGUI, KC_DOWN, KC_UP,   ADJUST,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

/* Media
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |      |Brig- | Vol+ |Brig+ |      |PrtScr|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |Track-| Play |Track+|      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Mute | Vol- | Stop |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MEDIA] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, KC_VOLU, KC_BRIU, XXXXXXX, KC_PSCR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_MSTP, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

/* Mouse
 * ,-----------------------------------------------------------------------------------
 * |      |      | Btn2 | Btn3 | Btn1 |      |      | Btn1 | Btn3 | Btn2 |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Btn4 | M Lt | M Dn | M Up | M Rt | Btn5 | Btn4 | M Lt | M Dn | M Up | M Rt | Btn5 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | W Lt | W Dn | W Up | W Rt |      |      | W Lt | W Dn | W Up | W Rt |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | Acc0 | Acc1 | Acc2 |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MOUSE] = LAYOUT_planck_grid(
    _______, XXXXXXX, KC_BTN2, KC_BTN3, KC_BTN1, XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX, _______,
    KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5, KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5,
    _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
    _______, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______
    ),
};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);

  float mouse_song[][2]    = SONG(STARTUP_SOUND);
  float mouse_gb_song[][2] = SONG(GOODBYE_SOUND);
#endif

bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool is_mouse_active = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _ADJUST:
      #ifdef AUDIO_ENABLE
        if (is_music_on()) {
          stop_all_notes();
        }
      #endif
      break;
    }
    /* state = update_tri_layer_state(state, _SYM, _NUM, _MOUSE); */
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
        #ifdef KEYBOARD_planck_rev5
          PORTE &= ~(1<<6);
        #endif
      } else {
        unregister_code(KC_RSFT);
        #ifdef KEYBOARD_planck_rev5
          PORTE |= (1<<6);
        #endif
      }
      return false;
      break;
    case PLOVER:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          stop_all_notes();
          PLAY_SONG(plover_song);
        #endif
        layer_off(_SYM);
        layer_off(_NUM);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
        if (!eeconfig_is_enabled()) {
            eeconfig_init();
        }
        keymap_config.raw = eeconfig_read_keymap();
        keymap_config.nkro = 1;
        eeconfig_update_keymap(keymap_config.raw);
      }
      return false;
      break;
    case EXT_PLV:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_gb_song);
        #endif
        layer_off(_PLOVER);
      }
      return false;
      break;
    case ALT_TAB:
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        alt_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      return false;
      break;
    case MU_TOG:
        if (record->event.pressed) {
            if (!is_music_on()) {
                layer_off(_FN);
                layer_off(_ADJUST);
                layer_on(_MUSIC);
            } else {
                layer_off(_MUSIC);
            }
        }
        return true;
        break;
    case MOUSE_T:
      if (record->event.pressed) {
          if (!is_mouse_active) {
          #ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_song);
          #endif
          } else {
          #ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_gb_song);
          #endif
          }
          is_mouse_active = !is_mouse_active;
      }
      return true;
      break;
    case KC_MAKE:
        if (!record->event.pressed) {
            uint8_t mods = get_mods();
            clear_mods();
            send_string_with_delay_P(PSTR("ALLOW_WARNINGS=yes make " QMK_KEYBOARD ":" QMK_KEYMAP), 10);
            if (mods & MOD_MASK_SHIFT) {
                //RESET board for flashing if SHIFT held or tapped with KC_MAKE
                send_string_with_delay_P(PSTR(":dfu-util"), 10);
                send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
                reset_keyboard();
            }
            send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
            set_mods(mods);
        }
        break;
  }
  return true;
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_SYM)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
}

void dip_switch_update_user(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_song);
        #endif
        layer_on(_ADJUST);
      } else {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_gb_song);
        #endif
        layer_off(_ADJUST);
      }
      break;
    case 1:
      if (active) {
        muse_mode = true;
      } else {
        muse_mode = false;
        #ifdef AUDIO_ENABLE
          stop_all_notes();
        #endif
      }
   }
}

void matrix_scan_user(void) {
  #ifdef AUDIO_ENABLE
    if (muse_mode) {
      if (muse_counter == 0) {
        uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
        if (muse_note != last_muse_note) {
          stop_note(compute_freq_for_midi_note(last_muse_note));
          play_note(compute_freq_for_midi_note(muse_note), 0xF);
          last_muse_note = muse_note;
        }
      }
      muse_counter = (muse_counter + 1) % muse_tempo;
    }
  #endif

  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > ALT_TAB_TRESHOLD) {
        unregister_code(KC_LALT);
        is_alt_tab_active = false;
    }
  }
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case ADJUST:
      return false;
    default:
      return true;
  }
}

void keyboard_post_init_user(void) {
    #ifdef AUDIO_CLICKY
    clicky_off();
    #endif
}

uint16_t get_tapping_term(uint16_t keycode) {
  switch (keycode) {
    case HOME_SQ:
    case HOME_DQ:
    case HOME_KQ:
    case HOME_LQ:
    case HOME_SC:

    case HOME_AD:
    case HOME_OD:
    case HOME_ED:
    case HOME_TD:
    case HOME_ND:
    case HOME_SD:
      return 250;
    default:
      return TAPPING_TERM;
  }
}
