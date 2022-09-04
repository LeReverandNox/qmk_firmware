// clang-format off
/*
 * Navigation
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        | ScLck  | Pause  |        |                                      |        |  Home  | Pg Up  |        |        | Mouse  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |  Caps  |        |        |        |        |        |                                      |        |  Left  |  Down  |   Up   |  Right |        |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  | Sec #4 | Sec #3 |        |   End  | Pg Dn  |        |        |        |
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |NAV_EN1 |        |        |        |        |  | Sec #2 | Sec #1 |   Ins  |        |NAV_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_NAV] = LAYOUT(
#ifdef MOUSEKEY_ENABLE
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SLCK, KC_PAUS, XXXXXXX,                                        XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
#else
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SLCK, KC_PAUS, XXXXXXX,                                        XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, XXXXXXX,
#endif
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_SEC4, KC_SEC3, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, _______,
                               NAV_EN1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_SEC2, KC_SEC1, KC_INS,  XXXXXXX, NAV_EN2
),
