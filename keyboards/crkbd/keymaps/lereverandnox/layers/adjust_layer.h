/* Adjust
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------
 * |Mu Tog|Ck Tog|Au Tog| RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-| Make |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Mu Mod|Ck Rst|MidiTo|Ag Tog|NKRO T|      |      |      |      |      |Reset |EepRst|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Voice+|Ck P+ |      |      |      |      |      |      |      |      |      |Debug |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Voice-|Ck P- |      |      |      |      |      |      |Plover|Qwerty|Gaming|Dvorak|
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_MAKE,
    XXXXXXX, XXXXXXX,  XXXXXXX,  AG_TOGG, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   EEP_RST,
    XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG,
    DVORAK, QWERTY, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
    ),
