// clang-format off
/* Mouse
 * ,-----------------------------------------------------------------------------------
 * |      |      | Btn2 | Btn3 | Btn1 |      |      | Btn1 | Btn3 | Btn2 |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Btn4 | M Lt | M Dn | M Up | M Rt | Btn5 | Btn4 | M Lt | M Dn | M Up | M Rt | Btn5 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | W Lt | W Dn | W Up | W Rt |      |      | W Lt | W Dn | W Up | W Rt |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | Acc0 | Acc1 | Acc2 |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MOUSE] = LAYOUT(
    XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN3, KC_BTN1, XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX, XXXXXXX,
    KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5, KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN5,
    XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
                               _______, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX),
