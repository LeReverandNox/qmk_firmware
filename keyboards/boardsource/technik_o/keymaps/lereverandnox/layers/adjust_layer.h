// clang-format off
/*
 * Adjust
 *
 * v------------------------RGB CONTROL------------------v
 * ,-----------------------------------------------------------------------------------------------------------.
 * | Toggle | Mode + | HUE +  | SAT +  | BRI +  | SPE +  |        |        |        |        |        |  Make  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | Mode - | HUE -  | SAT -  | BRI -  | SPE -  |        |        |        |        | Reset  | EepRst |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | NKRO T |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        | Gaming |        | Qwerty |Colemak |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, EE_CLR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
#ifdef PLOVER_ENABLED
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  XXXXXXX, QWERTY,  CLMKDH
#elif defined(GAMING_ENABLE)
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  XXXXXXX, QWERTY,  CLMKDH
#else
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY,  CLMKDH
#endif // PLOVER_ENABLED || GAMING_ENABLE
),
