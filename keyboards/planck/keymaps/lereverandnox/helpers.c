#include "helpers.h"

bool is_caps_on = false;

// register simple key press
void tap_key(uint16_t keycode)
{
  register_code  (keycode);
  unregister_code(keycode);
}

void shift_key(uint16_t keycode)
{
  register_code  (KC_LSFT);
  tap_key        (keycode);
  unregister_code(KC_LSFT);
}

// tap dance symbol pairs
void tap_pair(qk_tap_dance_state_t *state, uint8_t shift, uint16_t left, uint16_t right, uint16_t modifier, uint8_t close)
{
  // triple tap: left right with cursor between symbol pair a la vim :-)
  if (state->count > 2) {
    symbol_pair(shift, left, right);
    tap_key    (KC_LEFT);
  }
  // double tap: left right
  else if (state->count > 1) {
    symbol_pair(shift, left, right);
  }
  // down: modifier
  else if (state->pressed) {
    if (modifier) {
      register_code(modifier);
    } else {
        // send the symbol if the tap dance is interrupted, since it's considered pressed...
        if (shift == SFT_YES) {
        shift_key(close ? right : left);
        }
        else {
        tap_key(close ? right : left);
        }
    }
  }
  // tap: left (close: right)
  else {
    if (shift == SFT_YES) {
      shift_key(close ? right : left);
    }
    else {
      tap_key(close ? right : left);
    }
  }
  if (!modifier) {
    reset_tap_dance(state);
  }
}

void symbol_pair(uint8_t shift, uint16_t left, uint16_t right)
{
  if (shift == SFT_YES) {
    shift_key(left);
    shift_key(right);
  }
  else {
    tap_key(left);
    tap_key(right);
  }
}

void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift) {
    // double tap: toggle Capslock
    if (state->count >= 2) {
        tap_key(KC_CAPS);
        is_caps_on = !is_caps_on;
    // pressed: hold Shift
    } else if (state->pressed) {
        register_code(shift);
    // single tap
    } else {
        //  if enable, turn Capslock off
        if (is_caps_on) {
            tap_key(KC_CAPS);
            is_caps_on = false;
        // oneshot Shift (don't know why it doesn't work with MOD_RSFT...)
        } else {
            set_oneshot_mods(MOD_LSFT);
        }
    }
}
