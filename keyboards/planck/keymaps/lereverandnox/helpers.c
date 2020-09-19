#include "helpers.h"

bool is_caps_on = false;

// register simple key press
void tap_key(uint16_t keycode) {
    register_code(keycode);
    unregister_code(keycode);
}

void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift) {
    uint8_t mods      = get_mods();
    uint8_t os_mods   = get_oneshot_mods();
    uint8_t weak_mods = get_weak_mods();

    // double tap: toggle Capslock
    if (state->count >= 2) {
        // To avoid switching romaji/hiragana with Windows IME (Shift + Caps)
        clear_mods();
        clear_oneshot_mods();
        clear_weak_mods();
        tap_key(KC_CAPS);
        is_caps_on = !is_caps_on;
        set_mods(mods);
        set_oneshot_mods(os_mods);
        set_weak_mods(weak_mods);
        // pressed: hold Shift
    } else if (state->pressed) {
        register_code(shift);
        // single tap
    } else {
        //  if enable, turn Capslock off. Prevent Shift + Caps
        if (is_caps_on) {
            clear_mods();
            clear_oneshot_mods();
            clear_weak_mods();
            tap_key(KC_CAPS);
            is_caps_on = false;
            set_mods(mods);
            set_oneshot_mods(os_mods);
            set_weak_mods(weak_mods);
        } else if (os_mods & MOD_MASK_SHIFT) {  // Disable OS Shift if enable
            set_oneshot_mods(os_mods ^ MOD_LSFT);
        } else {  // oneshot Shift (don't know why it doesn't work with MOD_RSFT...)
            set_oneshot_mods(MOD_LSFT);
        }
    }
}
