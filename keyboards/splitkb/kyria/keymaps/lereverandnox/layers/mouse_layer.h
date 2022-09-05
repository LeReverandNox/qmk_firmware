// clang-format off
/*
 * Mouse
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |  Btn2  |  Btn3  |  Btn1  |        |                                      |        |  Btn1  |  Btn2  |  Btn3  |        |  Exit  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |  Btn4  |  M Lt  |  M Dn  |  M Up  |  M Rt  |  Btn5  |                                      |  Btn4  |  M Lt  |  M Dn  |  M Up  |  M Rt  |  Btn5  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |        |  W Lt  |  W Dn  |  W Up  |  W Rt  |        |        |        |  |        |        |        |  W Lt  |  W Dn  |  W Up  |  W Rt  |        |
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |MOU_EN1 |  Acc 0 |  Acc 1 |  Acc 2 |        |  |        |  Acc 2 |  Acc 1 |  Acc 0 |MOU_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_MOUSE] = LAYOUT(
    XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN3, KC_BTN1, XXXXXXX,                                        XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX, MOUSE_T,
    KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5,                                        KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5,
    XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
                               MOU_EN1, KC_ACL0, KC_ACL1, XXXXXXX, XXXXXXX,    XXXXXXX, KC_ACL2, KC_ACL1, KC_ACL0, MOU_EN2
),
