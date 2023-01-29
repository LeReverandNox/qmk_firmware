// clang-format off
/*
 * Adjust
 *
 * v----------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------.                    ,-----------------------------------------------------.
 * | Toggle | Mode + | HUE +  | SAT +  | BRI +  | SPE +  |                    |        |        |        |        |        |  Make  |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |        | Mode - | HUE -  | SAT -  | BRI -  | SPE -  |                    |        |        |        |        | Reset  | EepRst |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------.  ,--------|--------|--------|--------+--------+--------+--------'
 *                                     |        |Colemak |        |  |        | Qwerty | Dvorak |
 *                                     |        |        |        |  |        |        |        |
 *                                     `--------------------------'  `--------------------------'
 */
[_ADJUST] = LAYOUT(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,                      XXXXXXX, DT_UP,   XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,                      XXXXXXX, DT_PRNT, DT_DOWN, XXXXXXX, QK_BOOT, EE_CLR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NKR_TOG, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, CLMKDH,  XXXXXXX,    XXXXXXX, QWERTY,  DVORAK
),
