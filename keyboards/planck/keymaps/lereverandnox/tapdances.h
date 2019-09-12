enum tap_dances {
  _DOT = 0
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [_DOT]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN)
};
