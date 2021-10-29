// clang-format off
/* Adjust
 * ,-----------------------------------------------------------------------------------------------.
 * |RGBTOG |RGBMO+ | HUE+  | SAT+  | BRI+  | SPE+  |       |       |       |       |       | Make  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |RGBMO- | HUE-  | SAT-  | BRI-  | SPE-  |       |       |       |       |Reset  |EepRst |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |       |       |NKRO T |       |       |       |       |       |       |Debug  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |       |       |       |       |       |       |Plover |Gaming |Qwerty |Dvorak |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12(
    RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   EEP_RST,
    XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG,
#ifdef PLOVER_ENABLED
    MUV_DE,  CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  GAMING,  QWERTY,  DVORAK
#else
    MUV_DE,  CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  QWERTY,  DVORAK
#endif
),
