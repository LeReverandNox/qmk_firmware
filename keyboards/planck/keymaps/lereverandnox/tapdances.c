#include "tapdances.h"

#include "tapdances_handlers.h"

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [_DOT]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN),
  [_LBRACE] = ACTION_TAP_DANCE_FN(lbrace)
};
