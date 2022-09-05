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
 * |        |        |        |        |        |        |        |        | Gaming |Colemak | Qwerty | Dvorak |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, EE_CLR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
#ifdef PLOVER_ENABLED
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  GAMING,  QWERTY,  DVORAK
#elseif GAMING_DVORAK
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  CLMKDH,  QWERTY,  DVORAK
#else
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CLMKDH,  QWERTY,  DVORAK
#endif // PLOVER_ENABLED || GAMING_DVORAK
),
