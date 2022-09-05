#include "helpers.h"

bool is_caps_on = false;

// register simple key press
void tap_key(uint16_t keycode)
{
  register_code  (keycode);
  unregister_code(keycode);
}

#ifdef TAP_DANCE_ENABLE
void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift) {
    uint8_t mods = get_mods();
    uint8_t os_mods = get_oneshot_mods();
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
        } else if (os_mods & MOD_MASK_SHIFT) { // Disable OS Shift if enable
            set_oneshot_mods(os_mods ^ MOD_LSFT);
        } else { // oneshot Shift (don't know why it doesn't work with MOD_RSFT...)
            set_oneshot_mods(MOD_LSFT);
        }
    }
}
#endif // TAP_DANCE_ENABLE

/* void rgb_matrix_layer_helper(uint8_t hue, uint8_t sat, uint8_t val, uint8_t mode, uint8_t speed, uint8_t led_type) { */
/*     HSV hsv = {hue, sat, val}; */
/*     if (hsv.v > rgb_matrix_config.hsv.v) { */
/*         hsv.v = rgb_matrix_config.hsv.v; */
/*     } */

/*     switch (mode) { */
/*         case 1:  // breathing */
/*         { */
/*             uint16_t time = scale16by8(g_rgb_counters.tick, speed / 8); */
/*             hsv.v         = scale8(abs8(sin8(time) - 128) * 2, hsv.v); */
/*             RGB rgb       = hsv_to_rgb(hsv); */
/*             for (uint8_t i = 0; i < DRIVER_LED_TOTAL; i++) { */
/*                 if (HAS_FLAGS(g_led_config.flags[i], led_type)) { */
/*                     rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b); */
/*                 } */
/*             } */
/*             break; */
/*         } */
/*         default:  // Solid Color */
/*         { */
/*             RGB rgb = hsv_to_rgb(hsv); */
/*             for (uint8_t i = 0; i < DRIVER_LED_TOTAL; i++) { */
/*                 if (HAS_FLAGS(g_led_config.flags[i], led_type)) { */
/*                     rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b); */
/*                 } */
/*             } */
/*             break; */
/*         } */
/*     } */
/* } */
