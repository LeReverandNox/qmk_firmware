// clang-format off
/*
 * Nav
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * |        |        |        |  ScLck |  Pause |        |        |  Home  |  Pg Up |        |        |  Mouse |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Caps  |        |        |        |        |        |        |  Left  |  Down  |   Up   |  Right |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |   End  |  Pg Dn |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | NAV_ENC|        |        |        |        |        |        |   Ins  |        | Sec #3 | Sec #2 | Sec #1 |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT(
#ifdef MOUSEKEY_ENABLE
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCRL, KC_PAUS, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, MOUSE_T,
#else
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCRL, KC_PAUS, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP,  XXXXXXX, XXXXXXX, XXXXXXX,
#endif // MOUSEKEY_ENABLE
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,  XXXXXXX, XXXXXXX, XXXXXXX,
    NAV_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX,  KC_SEC3, KC_SEC2, KC_SEC1
),
