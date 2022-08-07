// clang-format off
/* Adjust
 *                         v------------------------RGB CONTROL----------------------------v
 * ,-----------------------------------------------------------------------------------------------.
 * |ADJ_ENC|       |       |       |       |       |       |       |       |       |       |       |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |Mu Tog |Ck Tog |Au Tog | RGB   |RGBMOD | HUE+  | HUE-  | SAT+  | SAT-  |BRGTH+ |BRGTH- | Make  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |Mu Mod |Ck Rst |       |Ag Tog |NKRO T |Timbr1 |Timbr2 |Timbr3 |Timbr4 |       |Reset  |EepRst |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |Voice+ |Ck P+  |GUIOff |GUIOn  |       |TempUP |TempDN |TempDF |       |       |       |Debug  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |Voice- |Ck P-  |       |       |       |       |       |       |Plover |Gaming |Qwerty |Dvorak |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
    ADJ_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    MU_TOG,  CK_TOGG, AU_TOG,  RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_MAKE,
    MU_MOD,  CK_RST,  XXXXXXX, AG_TOGG, NKR_TOG, TIMBR_1, TIMBR_2, TIMBR_3, TIMBR_4, XXXXXXX, RESET,   EEP_RST,
    MUV_IN,  CK_UP,   GUI_OFF, GUI_ON,  XXXXXXX, TEMP_UP, TEMP_DN, TEMP_DF, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG,
#ifdef PLOVER_ENABLED
    MUV_DE,  CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, PLOVER,  GAMING,  QWERTY,  DVORAK
#else
    MUV_DE,  CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GAMING,  CLMKDH,  QWERTY,  DVORAK
#endif
),
