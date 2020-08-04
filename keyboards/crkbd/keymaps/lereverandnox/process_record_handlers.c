#include "process_record_handlers.h"

bool is_mouse_active = false;

bool QWERTY_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
    }
    return false;
}

bool DVORAK_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
    }
    return false;
}

bool MOUSE_T_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        is_mouse_active = !is_mouse_active;
    }
    return true;
}

bool KC_MAKE_handler(keyrecord_t *record) {
    if (!record->event.pressed) {
        uint8_t mods = get_mods();
        clear_mods();
        send_string_with_delay_P(PSTR("util/docker_build.sh " QMK_KEYBOARD ":" QMK_KEYMAP), 10);
        if (mods & MOD_MASK_SHIFT) {
            // RESET board for flashing if SHIFT held or tapped with KC_MAKE
            send_string_with_delay_P(PSTR(":dfu"), 10);
            send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
            reset_keyboard();
        }
        send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
        set_mods(mods);
    }
    return true;
}

bool RESET_handler(keyrecord_t *record) {
	/* #ifdef RGB_MATRIX_ENABLE */
	/* rgb_matrix_set_color_all(RGB_PINK); */
	/* wait_us(200); */
	/* #endif */
	reset_keyboard();
	return false;
}
