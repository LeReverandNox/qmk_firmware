// clang-format off
/*
 * Adjust
 *
 * v------------------------RGB CONTROL------------------v
 * ,-----------------------------------------------------------------------------------------------------------.
 * | ADJ_ENC|        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Toggle | Mode + | HUE +  | SAT +  | BRI +  | SPE +  |        |        |        |        |        |  Make  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | Mode - | HUE -  | SAT -  | BRI -  | SPE -  |        |        |        |        | Reset  | EepRst |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Mu +  | Voice+ | Ck Rst |  Ck P+ |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Mu Tog | Voice- | Ck Tog |  Ck P- | Au Tog |        |        |        | Gaming |        | Qwerty |Colemak |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 * ^------------------AUDIO CONTROL-------------^
 */
[_ADJUST] = LAYOUT_preonic_grid(
    ADJ_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, EE_CLR,
    MU_NEXT, AU_NEXT, CK_RST,  CK_UP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
#ifdef PLOVER_ENABLED
    MU_TOGG, AU_PREV, CK_TOGG, CK_DOWN, AU_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  XXXXXXX, QWERTY,  CLMKDH
#elseif GAMING_DVORAK
    MU_TOGG, AU_PREV, CK_TOGG, CK_DOWN, AU_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  XXXXXXX, QWERTY,  CLMKDH
#else
    MU_TOGG, AU_PREV, CK_TOGG, CK_DOWN, AU_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY,  CLMKDH
#endif // PLOVER_ENABLED || GAMING_DVORAK
),
