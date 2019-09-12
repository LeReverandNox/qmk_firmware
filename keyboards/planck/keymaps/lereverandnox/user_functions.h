bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool is_mouse_active = false;
bool is_caps_on = false;

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

#include "process_record_handlers.h"

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
    case KC_CAPS:
      if (record->event.pressed) {
        if  (!is_caps_on) {
          #ifdef AUDIO_ENABLE
            PLAY_SONG(plover_song);
          #endif
        } else {
          #ifdef AUDIO_ENABLE
            PLAY_SONG(plover_gb_song);
          #endif
        }
        is_caps_on =  !is_caps_on;
      }
      break;
  }
  return true;
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
