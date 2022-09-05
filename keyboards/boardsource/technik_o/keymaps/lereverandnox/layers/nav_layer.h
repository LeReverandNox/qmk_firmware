// clang-format off
/* Nav
 * ,-----------------------------------------------------------------------------------------------.
 * |       |       |       | ScLck | Pause |       |       | Home  | Pg Up |       |       | Mouse |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Caps  | Again |       |       |       |       |       | Left  | Down  |  Up   | Right |       |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       | Undo  |  Cut  | Copy  | Paste |       |       |  End  | Pg Dn |       |       | Shrug |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |       |       |       |       |       |  Ins  |       | Sec3  | Sec2  | Sec1  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT_ortho_4x12(
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCRL, KC_PAUS, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
    KC_CAPS, KC_AGIN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, XXXXXXX,
    _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, KC_SHRG,
    _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX,  KC_SEC3, KC_SEC2, KC_SEC1
),
