#include "process_record_handlers.h"

bool is_mouse_active = false;
bool extern is_caps_on;
extern bool is_alt_tab_active;
extern  uint16_t alt_tab_timer;

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);

  float mouse_song[][2]      = SONG(STARTUP_SOUND);
  float mouse_gb_song[][2]   = SONG(GOODBYE_SOUND);
#endif

bool QWERTY_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        print("mode just switched to qwerty and this is a huge string\n");
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

bool GAMING_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        stop_all_notes();
        PLAY_SONG(plover_song);
#endif
        layer_off(_FN);
        layer_off(_ADJUST);
        layer_on(_GAMING);
    }
    return false;
}

bool EXT_GAM_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(plover_gb_song);
#endif
        layer_off(_GAMING);
    }
    return false;
}

bool BACKLIT_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
        backlight_step();
#endif
#ifdef KEYBOARD_planck_rev5
        PORTE &= ~(1 << 6);
#endif
    } else {
        unregister_code(KC_RSFT);
#ifdef KEYBOARD_planck_rev5
        PORTE |= (1 << 6);
#endif
    }
    return false;
}

bool PLOVER_handler(keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef AUDIO_ENABLE
        stop_all_notes();
        PLAY_SONG(plover_song);
#endif
        layer_off(_FN);
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
#endif
        layer_off(_PLOVER);
    }
    return false;
}

bool ALT_TAB_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        if (!is_alt_tab_active) {
            is_alt_tab_active = true;
            register_code(KC_LALT);
        }
        alt_tab_timer = timer_read();
        register_code(KC_TAB);
    } else {
        unregister_code(KC_TAB);
    }
    return false;
}

bool MU_TOG_handler(keyrecord_t *record) {
    if (record->event.pressed) {
        if (!is_music_on()) {
            layer_off(_FN);
            layer_off(_ADJUST);
            layer_on(_MUSIC);
        } else {
            layer_off(_MUSIC);
        }
    }
    return true;
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
        send_string_with_delay_P(PSTR("ALLOW_WARNINGS=yes make " QMK_KEYBOARD ":" QMK_KEYMAP), 10);
        if (mods & MOD_MASK_SHIFT) {
            // RESET board for flashing if SHIFT held or tapped with KC_MAKE
            send_string_with_delay_P(PSTR(":dfu-util"), 10);
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
