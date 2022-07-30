#include "process_record_handlers.h"

bool is_mouse_active = false;
bool extern is_caps_on;

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
        if (!is_mouse_active) {
#ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_song);
#endif
        } else {
#ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_gb_song);
#endif
        }
        is_mouse_active = !is_mouse_active;
    }
    return true;
}

bool KC_MAKE_handler(keyrecord_t *record) {
    if (!record->event.pressed) {
        uint8_t mods = get_mods();
        clear_mods();
        send_string_with_delay_P(PSTR("qmk_build " QMK_KEYBOARD ":" QMK_KEYMAP), 10);
        if (mods & MOD_MASK_SHIFT) {
            // RESET board for flashing if SHIFT held or tapped with KC_MAKE
            send_string_with_delay_P(PSTR(":flash"), 10);
            send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
            reset_keyboard();
        }
        send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
        set_mods(mods);
    }
    return true;
}

bool KC_CAPS_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        if (!is_caps_on) {
#ifdef AUDIO_ENABLE
            PLAY_SONG(plover_song);
#endif
        } else {
#ifdef AUDIO_ENABLE
            PLAY_SONG(plover_gb_song);
#endif
        }
        is_caps_on = !is_caps_on;
    }
    return true;
}
bool GUI_OFF_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(mouse_gb_song);
#endif
    }
    return true;
}

bool GUI_ON_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(mouse_song);
#endif
    }
    return true;
}
