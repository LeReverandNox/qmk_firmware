// clang-format off
/*
 * Colemak-DH
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |   ` ~  |    Q   |    W   |    F   |    P   |    B   |                                      |    J   |    L   |    U   |    Y   |   ; :  |   ' "  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    R   |    S   |    T   |    G   |                                      |    M   |    N   |    E   |    I   |    O   |  Enter |
 * |  Media |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |   Tab  |    Z   |    X   |    C   |    D   |    V   |        |        |  |        |        |    K   |    H   |   , <  |   . >  |   / ?  |  Shift |
 * |        |  Ctrl  |   GUI  |   Alt  |  Shift |        |        |        |  |        |        |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |BAS_EN1 |   Nav  |  Space |   Num  |        |  |        |   Sym  |  Bkspc |  RAlt  |BAS_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_COLEMAKDH] = LAYOUT(
    KC_GRV,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                           KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
    LT_ESCG, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                           KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
#ifdef TAP_DANCE_ENABLE
    KC_TAB,  CM_Z,    CM_X,    CM_C,    CM_D,    KC_V,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_K,    CM_H,    CM_COMM, CM_DOT,  CM_SLSH, TD_RSFT,
#else
    KC_TAB,  CM_Z,    CM_X,    CM_C,    CM_D,    KC_V,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_K,    CM_H,    CM_COMM, CM_DOT,  CM_SLSH, KC_RSFT,
#endif // TAP_DANCE_ENABLE
                               BAS_EN1, NAV,     KC_SPC,  NUM,     XXXXXXX,    XXXXXXX, SYM,     KC_BSPC, KC_RALT, BAS_EN2
),
