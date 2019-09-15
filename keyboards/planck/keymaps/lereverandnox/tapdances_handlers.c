#include "tapdances_handlers.h"

void lbrace(qk_tap_dance_state_t *state, void *user_data)
{
    shift_key(KC_LCBR);
    print("lbrace tapdance");
//   tap_pair(state, S_NEVER, KC_LBRC, KC_RBRC, 0, 0);
}
