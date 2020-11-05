// clang-format off
#ifdef OUTER_COLS
/* Nav
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |      | Home |Pg Up |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Ctrl |  GUI |  Alt |Shift |      |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | End  |Pg Dn |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Ins  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_planck_grid(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, _______,
    _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______,  _______, _______, _______
    ),
#endif

#ifdef INNER_COLS
// +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
// |         |         |         |         |         |         |         |         |   Home  |  Pg Up  |         |         |
// +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
// |   Ctrl  |   GUI   |   Alt   |  Shift  |         |         |         |         |   Left  |   Down  |    Up   |  Right  |
// +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
// |         |         |         |         |         |         |         |         |   End   |  Pg Dn  |         |         |
// +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
// |         |         |         |         |         |         |         |         |   Ins   |         |         |         |
// +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
[_NAV] = LAYOUT_planck_grid(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_HOME, KC_PGUP, XXXXXXX, XXXXXXX,
    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, XXXXXXX, _______, _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_END,  KC_PGDN, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______, _______, _______
    ),
#endif

#ifdef OUTER_CLASSICAL
/* Nav
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |ScLck |Pause |      |      | Home |Pg Up |      |      |Mouse |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Caps |Again |      |      |      |      |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Undo | Cut  | Copy |Paste |      |      | End  |Pg Dn |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Ins  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SLCK, KC_PAUS, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
    KC_CAPS, KC_AGIN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, _______,
    NAV_ENC, _______, _______, _______, _______, _______, _______, KC_INS,  _______,  _______, _______, _______
    ),
#endif
