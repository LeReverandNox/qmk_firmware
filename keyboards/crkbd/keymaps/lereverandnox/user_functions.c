#include "user_functions.h"
#include "crkbd/keymaps/lereverandnox/keycodes.h"

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
}

void matrix_init_user(void) {
	// SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED
	iota_gfx_init(!has_usb());  // turns on the display
#endif
}

uint16_t get_tapping_term(uint16_t keycode) {
    switch (keycode) {
#ifdef HOME_MODS
    // Qwerty
	case QM_S:
	case QM_D:
	case QM_K:
	case QM_L:
	case QM_SCLN:
	// Dvorak
	case DM_A:
	case DM_O:
	case DM_E:
	case DM_T:
	case DM_N:
	case DM_S:
		return 250;
#endif
#ifdef BELOW_HOME_MODS
	// Dvorak
	case DM_SCLN:
	case DM_Q:
	case DM_J:
	case DM_W:
	case DM_V:
	case DM_Z:
	// Qwerty
	case QM_Z:
	case QM_X:
	case QM_C:
	case QM_COMM:
	case QM_DOT:
	case QM_SLSH:
        return 200;
	// Dvorak
	#ifdef HOME_PINKY_SHIFTS
	case DM_A:
	case DM_S:
	#else
    case DM_K:
	case DM_M:
    #endif
	// Qwerty
	case QM_V:
	case QM_M:
        return 175;
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
