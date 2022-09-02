#include "user_functions.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        set_keylog(keycode, record);
#endif
    }

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
    case MOUSE_T:
        return MOUSE_T_handler(record);
      break;
    case KC_MAKE:
        return KC_MAKE_handler(record);
        break;
    }
    return process_record_secrets(keycode, record);
}

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_scan_user(void) {
#ifdef RGBLIGHT_ENABLE

    static uint8_t old_layer = 255;
    uint8_t new_layer = biton32(layer_state);

    if (old_layer != new_layer) {
        switch (new_layer) {
        case _ADJUST:
            rgblight_setrgb(0x00, 0x00, 0xFF);
            break;
        case _MOUSE:
            rgblight_setrgb(0x00, 0xA0, 0xFF);
            break;
        }

        old_layer = new_layer;
    }

#endif //RGBLIGHT_ENABLE
}

#ifdef RGB_MATRIX_ENABLE
/* void check_default_layer(uint8_t mode, uint8_t type) { */
/*     switch (get_highest_layer(default_layer_state)) { */
/*         case _QWERTY: */
/*             rgb_matrix_layer_helper(HSV_CYAN, mode, rgb_matrix_config.speed, type); */
/*             break; */
/*         case _DVORAK: */
/*             rgb_matrix_layer_helper(HSV_PURPLE, mode, rgb_matrix_config.speed, type); */
/*             break; */
/*     } */
/* } */

/* void rgb_matrix_indicators_user(void) { */
/*     if (rgb_matrix_config.enable) { */
/*         switch (get_highest_layer(layer_state)) { */
/*         case _MOUSE: */
/*             rgb_matrix_layer_helper(HSV_RED, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW); */
/*             break; */
/*         case _ADJUST: */
/*             rgb_matrix_layer_helper(HSV_BLUE, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW); */
/*             break; */
/*         default: { */
/*             check_default_layer(1, LED_FLAG_UNDERGLOW); */
/*             break; */
/*         } */
/*         } */
/*         /\* check_default_layer(0, LED_FLAG_MODIFIER); *\/ */
/*     } */
/* } */
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#ifdef OUTER_CLASSICAL
        case LT_TAB:
        case LT_ESCG:
            return 150;
#endif
#ifdef BELOW_HOME_MODS
        // Shorter tapping_term for Shift
        #ifdef HOME_PINKY_SHIFTS
        // Works for QM_A too, since it's the same define
        case DM_A:
        // Dvorak
        case DM_S:
        // Qwerty
        case QM_SCLN:
        #endif
        // Dvorak
        case DM_K:
        // Works for QM_M too, since it's the same define
        case DM_M:
        // Qwerty
        case QM_V:
            return 120;
#endif
        default:
            return TAPPING_TERM;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _SYM, _NUM, _ADJUST);
    return state;
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
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
        case _MOUSE:
            oled_write_P(PSTR("Mouse\n"), false);
            break;
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
    oled_write_P(led_usb_state.num_lock    ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLCK ") : PSTR("       "), false);
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE
