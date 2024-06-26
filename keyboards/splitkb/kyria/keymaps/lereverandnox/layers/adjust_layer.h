// clang-format off
/*
 * Adjust
 *
 * v----------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * | Toggle | Mode + | HUE +  | SAT +  | BRI +  | SPE +  |                                      |        |        |        |        |        |  Make  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        | Mode - | HUE -  | SAT -  | BRI -  | SPE -  |                                      |        |        |        |        | Reset  | EepRst |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | NKRO T |        |        |        |  |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |ADJ_EN1 |        |        |        |        |  |        |        | Qwerty |Colemak |ADJ_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_ADJUST] = LAYOUT(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, EE_CLR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               ADJ_EN1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, QWERTY,  CLMKDH,  ADJ_EN2
),
