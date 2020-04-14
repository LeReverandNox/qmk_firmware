// clang-format off
#ifdef OUTER_CLASSICAL
/* Symbols
 * ,-----------------------------------------------------------------------------------
 * |   ~  |   "  |      |  *   |  &   |  (   |  )   |   +  |   _  |   |  |   ?  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   '  |  ^   |  %   |  $   |  [   |  ]   |   =  |   -  |   \  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   :  |  #   |  @   |  !   |  {   |  }   |   <  |   >  |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | Del  |      |      | Del  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT(
    KC_TILD, TD_DQUO, XXXXXXX, KC_ASTR, KC_AMPR, TD_LPRN, TD_RPRN, KC_PLUS, KC_UNDS, KC_PIPE, KC_QUES, XXXXXXX,
    TD_GRV,  TD_QUOT, KC_CIRC, KC_PERC, KC_DLR,  TD_LBRC, TD_RBRC, KC_EQL,  KC_MINS, KC_BSLS, KC_SLSH, _______,
    _______, KC_COLN, KC_HASH, KC_AT,   KC_EXLM, TD_LCBR, TD_RCBR, TD_LABK, TD_RABK, XXXXXXX, XXXXXXX, _______,
                               _______, KC_DEL,  _______, _______, KC_DEL,  _______),
#endif
