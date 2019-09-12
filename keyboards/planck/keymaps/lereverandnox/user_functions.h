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
        return QWERTY_handler(record);
      break;
    case DVORAK:
        return DVORAK_handler(record);
      break;
    case BACKLIT:
        return BACKLIT_handler(record);
      break;
    case PLOVER:
        return PLOVER_handler(record);
      break;
    case EXT_PLV:
        return EXT_PLV_handler(record);
      break;
    case ALT_TAB:
        return ALT_TAB_handler(record);
      break;
    case MU_TOG:
        return MU_TOG_handler(record);
        break;
    case MOUSE_T:
        return MOUSE_T_handler(record);
      break;
    case KC_MAKE:
        return KC_MAKE_handler(record);
        break;
    case KC_CAPS:
        return KC_CAPS_handler(record);
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
