bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;
bool is_mouse_active = false;
bool is_caps_on = false;

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
