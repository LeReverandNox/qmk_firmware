// clang-format off
/* Adjust
 *                         v------------------------RGB CONTROL----------------------------v
 * ,-----------------------------------------------------------------------------------------------.
 * |       |       |       | RGB   |RGBMOD | HUE+  | HUE-  | SAT+  | SAT-  |BRGTH+ |BRGTH- | Make  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |       |Ag Tog |NKRO T |       |       |       |       |       |Reset  |EepRst |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |GUIOff |GUIOn  |       |       |       |       |       |       |       |Debug  |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |       |       |       |       |       |       |       |       |       |       |Qwerty |Dvorak |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
/* [_ADJUST] = LAYOUT( */
/*     XXXXXXX,  XXXXXXX, XXXXXXX, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_MAKE, */
/*     XXXXXXX,  XXXXXXX, XXXXXXX, AG_TOGG, NKR_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   EEP_RST, */
/*     XXXXXXX,  XXXXXXX, GUI_OFF, GUI_ON,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DEBUG, */
/*     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  QWERTY,  DVORAK */
/* ), */

/*
 * Adjust
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |  |        |        |        |        |        |        |        |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |ADJ_EN1 |        |        |        |        |  |        |        |        |        |ADJ_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_ADJUST] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               ADJ_EN1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, QWERTY,  DVORAK,  ADJ_EN2
),
