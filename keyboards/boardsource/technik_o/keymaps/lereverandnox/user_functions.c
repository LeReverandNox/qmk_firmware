#include "user_functions.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            return QWERTY_handler(record);
            break;
        case DVORAK:
            return DVORAK_handler(record);
            break;
        case CLMKDH:
            return COLEMAKDH_handler(record);
            break;
        case GAMING:
            return GAMING_handler(record);
            break;
#ifdef PLOVER_ENABLED
        case PLOVER:
            return PLOVER_handler(record);
            break;
        case EXT_PLV:
            return EXT_PLV_handler(record);
            break;
#endif
        case EXT_GAM:
            return EXT_GAM_handler(record);
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
        case KC_SHRG:
            return KC_SHRG_handler(record);
            break;
        case GUI_OFF:
            return GUI_OFF_handler(record);
            break;
        case GUI_ON:
            return GUI_ON_handler(record);
            break;
#ifdef AUDIO_ENABLE
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
#endif
    }
    return process_record_secrets(keycode, record);
}

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_scan_user(void) {
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _SYM, _NUM, _ADJUST);
    state = update_tri_layer_state(state, _GAMING_LOWER, _GAMING_RAISE, _GAMING_ADJUST);
    return state;
}

void matrix_init_user(void) {
#ifdef AUDIO_ENABLE
    set_tempo(150);
#endif
}

void keyboard_post_init_user(void) {
#ifdef AUDIO_CLICKY
    clicky_off();
#endif
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT_TAB:
        case LT_ESCG:
            return 150;
        // Shorter tapping_term for Shift
        // Dvorak
        case DM_K:
        // Works for QM_M too, since it's the same define
        case DM_M:
        // Qwerty
        case QM_V:
            return 175;
        default:
            return TAPPING_TERM;
    }
}
