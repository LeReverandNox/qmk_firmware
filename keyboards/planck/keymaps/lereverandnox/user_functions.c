#include "user_functions.h"
#include "layers.h"

bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
        return QWERTY_handler(record);
      break;
    case DVORAK:
        return DVORAK_handler(record);
      break;
    case GAMING:
        return GAMING_handler(record);
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
    case EXT_GAM:
        return EXT_GAM_handler(record);
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
    case GUI_OFF:
        return GUI_OFF_handler(record);
    case GUI_ON:
        return GUI_ON_handler(record);
      break;
  case TIMBR_1:
	  set_timbre(TIMBRE_12);
	  return false;
	  break;
  case TIMBR_2:
	  set_timbre(TIMBRE_25);
	  return false;
	  break;
  case TIMBR_3:
	  set_timbre(TIMBRE_50);
	  return false;
	  break;
  case TIMBR_4:
	  set_timbre(TIMBRE_75);
	  return false;
	  break;
  case TEMP_UP:
	  increase_tempo(10);
	  return false;
	  break;
  case TEMP_DN:
	  decrease_tempo(10);
	  return false;
	  break;
  case TEMP_DF:
	  set_tempo(TEMPO_DEFAULT);
	  set_timbre(TIMBRE_DEFAULT);
	  return false;
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
    state = update_tri_layer_state(state, _SYM, _NUM, _ADJUST);
    state = update_tri_layer_state(state, _GAMING_LOWER, _GAMING_RAISE, _GAMING_ADJUST);
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

void matrix_init_user(void) {
	set_tempo(150);
}

void keyboard_post_init_user(void) {
    #ifdef AUDIO_CLICKY
    clicky_off();
    #endif
}

uint16_t get_tapping_term(uint16_t keycode) {
    switch (keycode) {
#ifdef HOME_MODS
        case QM_S:
        case QM_D:
        case QM_K:
        case QM_L:
        case QM_SCLN:

        case DM_A:
        case DM_O:
        case DM_E:
        case DM_T:
        case DM_N:
        case DM_S:
            return 250;
#endif
        default:
            return TAPPING_TERM;
    }
}
