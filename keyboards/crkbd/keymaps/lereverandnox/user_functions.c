#include "user_functions.h"

extern uint8_t is_master;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
#ifdef SSD1306OLED
		set_keylog(keycode, record);
		/* set_timelog(); */
#endif
	}

	switch (keycode) {
	case QWERTY:
        return QWERTY_handler(record);
      break;
    case DVORAK:
        return DVORAK_handler(record);
      break;
    case MOUSE_T:
        return MOUSE_T_handler(record);
      break;
    case KC_MAKE:
        return KC_MAKE_handler(record);
        break;
	case RESET:
		return RESET_handler(record);
	}
	return true;
}

void matrix_scan_user(void) {
#ifdef SSD1306OLED
	iota_gfx_task();
#endif
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
void check_default_layer(uint8_t mode, uint8_t type) {
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            rgb_matrix_layer_helper(HSV_CYAN, mode, rgb_matrix_config.speed, type);
            break;
        case _DVORAK:
            rgb_matrix_layer_helper(HSV_PURPLE, mode, rgb_matrix_config.speed, type);
            break;
    }
}

void rgb_matrix_indicators_user(void) {
    if (rgb_matrix_config.enable) {
		switch (get_highest_layer(layer_state)) {
		case _MOUSE:
			rgb_matrix_layer_helper(HSV_RED, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW);
			break;
		case _ADJUST:
			rgb_matrix_layer_helper(HSV_BLUE, 0, rgb_matrix_config.speed, LED_FLAG_UNDERGLOW);
			break;
		default: {
			check_default_layer(1, LED_FLAG_UNDERGLOW);
			break;
		}
        }
        /* check_default_layer(0, LED_FLAG_MODIFIER); */
	}
}
#endif

void matrix_init_user(void) {
	// SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED
	iota_gfx_init(!has_usb());  // turns on the display
#endif
}

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

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

void matrix_render_user(struct CharacterMatrix *matrix) {
	if (is_master) {
		// If you want to change the display of OLED, you need to change here
		/* matrix_write_ln(matrix, read_layer_state()); */
		/* matrix_write_ln(matrix, read_rgb_info()); */
		matrix_write_ln(matrix, read_keylog());
		/* matrix_write_ln(matrix, read_keylogs()); */
		/* matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui)); */
		//matrix_write_ln(matrix, read_host_led_state());
		/* matrix_write_ln(matrix, read_timelog()); */
	} else {
		matrix_write(matrix, read_logo());
	}
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}

#endif//SSD1306OLED
