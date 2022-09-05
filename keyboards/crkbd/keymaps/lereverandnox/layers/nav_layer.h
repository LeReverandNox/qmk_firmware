// clang-format off
/*
 * Nav
 *
 * ,-----------------------------------------------------.                    ,-----------------------------------------------------.
 * |        |        |        | ScLck  | Pause  |        |                    |        |  Home  | Pg Up  |        |        | Mouse  |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |  Caps  |        |        |        |        |        |                    |        |  Left  |  Down  |   Up   |  Right |        |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                    |        |   End  | Pg Dn  | Sec #3 | Sec #2 | Sec #1 |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------.  ,--------|--------|--------|--------+--------+--------+--------'
 *                                     |        | Sec #5 | Sec #4 |  |        |   Ins  |        |
 *                                     |        |        |        |  |        |        |        |
 *                                     `--------------------------'  `--------------------------'
 */
[_NAV] = LAYOUT(
#ifdef MOUSEKEY_ENABLE
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCRL, KC_PAUS, XXXXXXX,                      XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
#else
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCRL, KC_PAUS, XXXXXXX,                      XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, XXXXXXX,
#endif
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_END,  KC_PGDN,  KC_SEC3, KC_SEC2, KC_SEC1,
                                        _______, KC_SEC5, KC_SEC4,    XXXXXXX, KC_INS,  XXXXXXX
),
