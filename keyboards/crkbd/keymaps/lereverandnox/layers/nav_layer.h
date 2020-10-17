// clang-format off
#ifdef OUTER_CLASSICAL
/* Nav
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |      | Home |Pg Up |      |      |Mouse |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Caps |Again |      |      |      |      |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Undo | Cut  | Copy |Paste |      |      | End  |Pg Dn |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Ins  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
    KC_CAPS, KC_AGIN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, _______,
                               _______, _______, _______, _______, KC_INS,  _______),
#endif
