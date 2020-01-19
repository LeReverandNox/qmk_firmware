// clang-format off
/* Adjust
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------
 * |RGBTOG|RGBMO+| HUE+ | SAT+ | BRI+ | SPE+ |      |      |      |      |      | Make |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |RGBMO-| HUE- | SAT- | BRI- | SPE- |      |      |      |      |Reset |EepRst|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |Debug |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Dvorak|Qwerty|      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT(
    RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MAKE,
    XXXXXXX, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   EEP_RST,
    XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG,
	DVORAK,  QWERTY,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
