#include "user_functions.h"

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
    return true;
}

void matrix_scan_user(void) {
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

void encoder_update_user(uint8_t index, bool clockwise) {
    static uint16_t kc;
    uint8_t mods = get_mods();
    if (clockwise) {
        if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // CTRL + GUI + ALT + SHIFT
            kc = encoder_actions[0][14];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // GUI + ALT + SHIFT
            kc = encoder_actions[0][13];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // CTRL + ALT + SHIFT
            kc = encoder_actions[0][12];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT)) { // CTRL + GUI + ALT
            kc = encoder_actions[0][11];
        } else if ((mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // ALT + SHIFT
            kc = encoder_actions[0][10];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_SHIFT)) { // GUI + SHIFT
            kc = encoder_actions[0][9];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT)) { // GUI + ALT
            kc = encoder_actions[0][8];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_SHIFT)) { // CTRL + SHIFT
            kc = encoder_actions[0][7];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_ALT)) { // CTRL + ALT
            kc = encoder_actions[0][6];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI)) { // CTRL + GUI
            kc = encoder_actions[0][5];
        } else if (mods & MOD_MASK_SHIFT) { // SHIFT
            kc = encoder_actions[0][4];
        } else if (mods & MOD_MASK_ALT) { // ALT
            kc = encoder_actions[0][3];
        } else if (mods & MOD_MASK_GUI) { // GUI
            kc = encoder_actions[0][2];
        } else if (mods & MOD_MASK_CTRL) { // CTRL
            kc = encoder_actions[0][1];
        } else { // None
            kc = encoder_actions[0][0];
        }
    } else {
        if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // CTRL + GUI + ALT + SHIFT
            kc = encoder_actions[1][14];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // GUI + ALT + SHIFT
            kc = encoder_actions[1][13];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // CTRL + ALT + SHIFT
            kc = encoder_actions[1][12];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT)) { // CTRL + GUI + ALT
            kc = encoder_actions[1][11];
        } else if ((mods & MOD_MASK_ALT) && (mods & MOD_MASK_SHIFT)) { // ALT + SHIFT
            kc = encoder_actions[1][10];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_SHIFT)) { // GUI + SHIFT
            kc = encoder_actions[1][9];
        } else if ((mods & MOD_MASK_GUI) && (mods & MOD_MASK_ALT)) { // GUI + ALT
            kc = encoder_actions[1][8];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_SHIFT)) { // CTRL + SHIFT
            kc = encoder_actions[1][7];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_ALT)) { // CTRL + ALT
            kc = encoder_actions[1][6];
        } else if ((mods & MOD_MASK_CTRL) && (mods & MOD_MASK_GUI)) { // CTRL + GUI
            kc = encoder_actions[1][5];
        } else if (mods & MOD_MASK_SHIFT) { // SHIFT
            kc = encoder_actions[1][4];
        } else if (mods & MOD_MASK_ALT) { // ALT
            kc = encoder_actions[1][3];
        } else if (mods & MOD_MASK_GUI) { // GUI
            kc = encoder_actions[1][2];
        } else if (mods & MOD_MASK_CTRL) { // CTRL
            kc = encoder_actions[1][1];
        } else { // None
            kc = encoder_actions[1][0];
        }
    }

    clear_mods();

    // Big and dirty workaround, because clear_mods on its own can't really clear mods for Media keycode.
    unregister_code_mods(mods);

    tap_code16(kc);
    set_mods(mods);
}

const uint16_t PROGMEM encoder_actions[][15] = { \
    /* None    CTRL     GUI      ALT      SHIFT    C+G      C+A      C+S      G+A      G+S      A+S      C+G+A    C+A+S    G+A+S    C+G+A+S    */
    /* 0       1        2        3        4        5        6        7        8        9        10       11       12       13       14         */
    { KC_PGDN, KC_DOWN, XXXXXXX, KC_VOLU, KC_WFWD, TABNEXT, XXXXXXX, KC_RGHT, KC_MUTE, XXXXXXX, KC_MNXT, XXXXXXX, XXXXXXX, KC_MUTE, KC_BRIU }, // Clockwise
    { KC_PGUP, KC_UP,   XXXXXXX, KC_VOLD, KC_WBAK, TABPREV, XXXXXXX, KC_LEFT, KC_MPLY, XXXXXXX, KC_MPRV, XXXXXXX, XXXXXXX, KC_MPLY, KC_BRID }  // Anti-Clockwise
};
