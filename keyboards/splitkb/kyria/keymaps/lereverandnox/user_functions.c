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
#ifdef MOUSEKEY_ENABLE
        case MOUSE_T:
            return MOUSE_T_handler(record);
            break;
#endif
        case KC_MAKE:
            return KC_MAKE_handler(record);
            break;
        case KC_CAPS:
            return KC_CAPS_handler(record);
            break;
    }
    return process_record_secrets(keycode, record);
}

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _ADJUST:
            break;
    }
    state = update_tri_layer_state(state, _SYM, _NUM, _ADJUST);
    return state;
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

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
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

    return false;
}

const uint16_t PROGMEM encoder_actions[][15] = { \
    /* None    CTRL     GUI      ALT      SHIFT    C+G      C+A      C+S      G+A      G+S      A+S      C+G+A    C+A+S    G+A+S    C+G+A+S    */
    /* 0       1        2        3        4        5        6        7        8        9        10       11       12       13       14         */
    { KC_PGDN, KC_DOWN, XXXXXXX, KC_VOLU, KC_WFWD, TABNEXT, XXXXXXX, KC_RGHT, KC_MUTE, XXXXXXX, KC_MNXT, XXXXXXX, XXXXXXX, KC_MUTE, KC_BRIU }, // Clockwise
    { KC_PGUP, KC_UP,   XXXXXXX, KC_VOLD, KC_WBAK, TABPREV, XXXXXXX, KC_LEFT, KC_MPLY, XXXXXXX, KC_MPRV, XXXXXXX, XXXXXXX, KC_MPLY, KC_BRID }  // Anti-Clockwise
};
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // QMK Logo and version information
        // clang-format off
        static const char PROGMEM qmk_logo[] = {
            0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
            0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
            0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
        // clang-format on

        oled_write_P(qmk_logo, false);
        oled_write_P(PSTR("Kyria rev2.1\n\n"), false);

        // Host Keyboard Layer Status
        oled_write_P(PSTR("Layer: "), false);
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("QWERTY\n"), false);
                break;
            case _DVORAK:
                oled_write_P(PSTR("Dvorak\n"), false);
                break;
            case _COLEMAKDH:
                oled_write_P(PSTR("ColemakDH\n"), false);
                break;
#ifdef MOUSEKEY_ENABLE
            case _MOUSE:
                oled_write_P(PSTR("Mouse\n"), false);
                break;
#endif
            case _NAV:
                oled_write_P(PSTR("Nav\n"), false);
                break;
            case _SYM:
                oled_write_P(PSTR("Symbols\n"), false);
                break;
            case _NUM:
                oled_write_P(PSTR("Numbers\n"), false);
                break;
            case _MEDIA:
                oled_write_P(PSTR("Media\n"), false);
                break;
            case _ADJUST:
                oled_write_P(PSTR("Adjust\n"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }

        // Write host Keyboard LED Status to OLEDs
        led_t led_usb_state = host_keyboard_led_state();
#ifdef CAPS_WORD_ENABLE
        oled_write_P(is_caps_word_on()         ? PSTR("CAPWRD ") : PSTR("       "), false);
#else
        oled_write_P(led_usb_state.num_lock    ? PSTR("NUMLCK ") : PSTR("       "), false);
#endif
        oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPLCK ") : PSTR("       "), false);
        oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLCK ") : PSTR("       "), false);
    } else {
        // clang-format off
        static const char PROGMEM kyria_logo[] = {
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
            0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
            0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
            0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
        };
        // clang-format on
        oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
    }
    return false;
}
#endif
