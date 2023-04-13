#include "process_record_handlers.h"

bool is_mouse_active = false;
extern bool is_caps_on;
extern keymap_config_t keymap_config;

#ifdef AUDIO_ENABLE
float plover_song[][2]    = SONG(PLOVER_SOUND);
float plover_gb_song[][2] = SONG(PLOVER_GOODBYE_SOUND);

float gaming_song[][2]    = SONG(ONE_UP_SOUND);
float gaming_gb_song[][2] = SONG(GOODBYE_SOUND);

float mouse_song[][2]    = SONG(STARTUP_SOUND);
float mouse_gb_song[][2] = SONG(GOODBYE_SOUND);
#endif // AUDIO_ENABLE

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

bool COLEMAKDH_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAKDH);
    }
    return false;
}

#ifdef GAMING_DVORAK
bool GAMING_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        stop_all_notes();
        PLAY_SONG(gaming_song);
#endif // AUDIO_ENABLE
        layer_off(_SYM);
        layer_off(_NUM);
        layer_off(_ADJUST);
        layer_on(_GAMING);
    }
    return false;
}

bool EXT_GAM_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(gaming_gb_song);
#endif // AUDIO_ENABLE
        layer_off(_GAMING);
    }
    return false;
}
#endif // GAMING_DVORAK

#ifdef PLOVER_ENABLED
bool PLOVER_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        stop_all_notes();
        PLAY_SONG(plover_song);
#endif // AUDIO_ENABLE
        layer_off(_SYM);
        layer_off(_NUM);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
        if (!eeconfig_is_enabled()) {
            eeconfig_init();
        }
        keymap_config.raw  = eeconfig_read_keymap();
        keymap_config.nkro = 1;
        eeconfig_update_keymap(keymap_config.raw);
    }
    return false;
}

bool EXT_PLV_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(plover_gb_song);
#endif // AUDIO_ENABLE
        layer_off(_PLOVER);
    }
    return false;
}
#endif // PLOVER_ENABLED

#ifdef AUDIO_ENABLE
bool MU_TOGG_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        if (!is_music_on()) {
            layer_off(_SYM);
            layer_off(_NUM);
            layer_off(_ADJUST);
            layer_on(_MUSIC);
        } else {
            layer_off(_MUSIC);
        }
    }
    return true;
}
#endif // AUDIO_ENABLE

#ifdef MOUSEKEY_ENABLE
bool MOUSE_T_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        if (!is_mouse_active) {
#ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_song);
#endif // AUDIO_ENABLE
        } else {
#ifdef AUDIO_ENABLE
            PLAY_SONG(mouse_gb_song);
#endif // AUDIO_ENABLE
        }
        is_mouse_active = !is_mouse_active;
    }
    return true;
}
#endif // MOUSEKEY_ENABLE

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
#endif // AUDIO_ENABLE
        } else {
#ifdef AUDIO_ENABLE
            PLAY_SONG(plover_gb_song);
#endif // AUDIO_ENABLE
        }
        is_caps_on = !is_caps_on;
    }
    return true;
}
bool GUI_OFF_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(mouse_gb_song);
#endif // AUDIO_ENABLE
    }
    return true;
}

bool GUI_ON_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(mouse_song);
#endif // AUDIO_ENABLE
    }
    return true;
}
