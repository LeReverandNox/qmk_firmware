// clang-format off
/*
 * Media
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        |        |        |        |                                      |        |  Brig- |  Vol+  |  Brig+ |        | PrtScr |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                                      |        | Track- |  Play  | Track+ |        |        |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |        |        |        |  Mute  |  Vol-  |  Stop  |        |        |
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |MED_EN1 |        |        |        |        |  |        |        |        |        |MED_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_MEDIA] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        XXXXXXX, KC_BRID, KC_VOLU, KC_BRIU, XXXXXXX, KC_PSCR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_MSTP, XXXXXXX, XXXXXXX,
                               MED_EN1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MED_EN2
),
