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
  _NAV,
  _SYM,
  _NUM,
  _FN,
  _PLOVER,
  _MUSIC,
  _ADJUST
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  DVORAK,
  PLOVER,
  BACKLIT,
  EXT_PLV,
  ALT_TAB
};

enum tap_dances {
  TD_DOT_COLN = 0
};

#define NAV MO(_NAV)
#define SYM MO(_SYM)
#define NUM MO(_NUM)
#define FN MO(_FN)
#define ADJUST MO(_ADJUST)

#define ALT_TAB_TRESHOLD 500

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [TD_DOT_COLN]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |      |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |  Spc | Tab  |Enter | Bksp | RAlt | Alt  |  GUI | Ctrl |
 * |      |      |      | Nav  | Sym  | Num  | Num  | Sym  |  Fn  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    KC_NO,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
    KC_NO,   LCTL_T(KC_A),    LGUI_T(KC_S),    LALT_T(KC_D),    LSFT_T(KC_F),    KC_G,    KC_H,    RSFT_T(KC_J),    LALT_T(KC_K),    RGUI_T(KC_L),    RCTL_T(KC_SCLN),    KC_NO,
    KC_NO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
    KC_LCTL, KC_LGUI, KC_LALT, LT(NAV, KC_ESC), LT(SYM, KC_SPC),  LT(NUM, KC_TAB), LT(NUM, KC_ENT), LT(SYM, KC_BSPC), LT(FN, KC_RALT), OSM(MOD_LALT), OSM(MOD_RGUI), OSM(MOD_RCTL)
    ),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |      |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |  Spc | Tab  |Enter | Bksp | RAlt | Alt  |  GUI | Ctrl |
 * |      |      |      | Nav  | Sym  | Num  | Num  | Sym  |  Fn  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_planck_grid(
    KC_NO,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_NO,
    KC_NO,   LCTL_T(KC_A),    LGUI_T(KC_O),    LALT_T(KC_E),    LSFT_T(KC_U),    KC_I,    KC_D,    RSFT_T(KC_H),    LALT_T(KC_T),    RGUI_T(KC_N),    RCTL_T(KC_S),    KC_NO,
    KC_NO, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_NO,
    KC_LCTL, KC_LGUI, KC_LALT, LT(NAV, KC_ESC), LT(SYM, KC_SPC),  LT(NUM, KC_TAB), LT(NUM, KC_ENT), LT(SYM, KC_BSPC), LT(FN, KC_RALT), OSM(MOD_LALT), OSM(MOD_RGUI), OSM(MOD_RCTL)
    ),

/* Left Nav
 * ,-----------------------------------------------------------------------------------
 * | ATab |      |      |      |      |      |      | Home |Pg Up |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Ctrl |  GUI |  Alt |Shift |      |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | End  |Pg Dn |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_planck_grid(
    ALT_TAB, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP,  _______, _______, _______,
    _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, _______, _______, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
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
    KC_CAPS, KC_GRV,  KC_TILD, KC_ASTR, KC_AMPR, _______, _______, KC_LPRN, KC_RPRN, KC_SLSH, KC_QUES, _______,
    _______, KC_MINS, KC_CIRC, KC_PERC, KC_DLR,  _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, KC_PIPE, _______,
    _______, KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, _______, _______, KC_LCBR, KC_RCBR, KC_EQL,  KC_PLUS, _______,
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
    _______, _______, _______, _______, _______, _______, KC_SLSH, KC_7,    KC_8,    KC_9,    KC_ASTR, _______,
    _______, LCTL_T(KC_NO), LGUI_T(KC_F), LALT_T(KC_E), LSFT_T(KC_D), _______, KC_HASH, RSFT_T(KC_4), LALT_T(KC_5), RGUI_T(KC_6), RCTL_T(KC_MINS), _______,
    _______, _______, KC_C,    KC_B,    KC_A,    _______, KC_BSLS, KC_1,    KC_2,    KC_3,    KC_PLUS, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_COMM, TD(TD_DOT_COLN),  KC_EQL,  _______
        ),

/* Fn
 * ,-----------------------------------------------------------------------------------
 * |      | F12  |  F9  |  F8  |  F7  |      |      |      |      |      |      |      |
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
    _______, KC_F12,  KC_F9,   KC_F8,   KC_F7,   _______, _______, KC_CUT,  KC_COPY, KC_PSTE, _______, _______,
    _______, KC_F11,  KC_F6,   KC_F5,   KC_F4,   _______, _______, LSFT_T(KC_NO),LALT_T(KC_NO), LGUI_T(KC_NO), LCTL_T(KC_NO), _______,
    _______, KC_F10,  KC_F3,   KC_F2,   KC_F1,   _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, ADJUST, _______, _______, _______, _______
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
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|      |Dvorak|Plover|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    _______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  _______,  DVORAK,  PLOVER,  _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
    )

/* Music
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Rec  | Stop | Play |Speed-|Speed+|      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MUSIC] = LAYOUT_planck_grid(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_LCTL, KC_LALT, KC_LGUI, KC_DOWN, KC_UP,   ADJUST,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif

bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool is_music_mode_on = false;

/* layer_state_t layer_state_set_user(layer_state_t state) { */
    /* return update_tri_layer_state(state, _SYM, _NUM, _ADJUST); */
/* } */

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
            if (!is_music_mode_on) {
                is_music_mode_on = true;
                layer_off(_FN);
                layer_off(_ADJUST);
                layer_on(_MUSIC);
            } else {
                is_music_mode_on = false;
                layer_off(_MUSIC);
            }
        }
        return true;
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
