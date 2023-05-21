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
#ifdef GAMING_ENABLE
        case GAMING:
            return GAMING_handler(record);
            break;
        case EXT_GAM:
            return EXT_GAM_handler(record);
            break;
#endif // GAMING_ENABLE
#ifdef PLOVER_ENABLED
        case PLOVER:
            return PLOVER_handler(record);
            break;
        case EXT_PLV:
            return EXT_PLV_handler(record);
            break;
#endif // PLOVER_ENABLED
#ifdef MOUSEKEY_ENABLE
        case MOUSE_T:
            return MOUSE_T_handler(record);
            break;
#endif // MOUSEKEY_ENABLE
        case KC_MAKE:
            return KC_MAKE_handler(record);
            break;
        case KC_CAPS:
            return KC_CAPS_handler(record);
            break;
#ifdef UNICODE_ENABLE
        case KC_SHRG:
            return KC_SHRG_handler(record);
            break;
#endif // UNICODE_ENABLE
        case GUI_OFF:
            return GUI_OFF_handler(record);
            break;
        case GUI_ON:
            return GUI_ON_handler(record);
            break;
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
#ifdef GAMING_ENABLE
    state = update_tri_layer_state(state, _GAMING_LOWER, _GAMING_RAISE, _GAMING_ADJUST);
#endif // GAMING_ENABLE
    return state;
}

void matrix_init_user(void) {
}

void keyboard_post_init_user(void) {
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT_TAB:
        case LT_ESCG:
            return TAPPING_TERM - 50;
        // Shorter tapping_term for Shift
        // Dvorak
        case DM_K:
        // Works for QM_M too, since it's the same define
        case DM_M:
        // Qwerty
        case QM_V:
        // Colemak-DH
        case CM_D:
        case CM_H:
            return TAPPING_TERM - 25;
        default:
            return TAPPING_TERM;
    }
}
