// clang-format off
/*
 * Dvorak
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |   ` ~  |   ' "  |   , <  |   . >  |    P   |    Y   |                                      |    F   |    G   |    C   |    R   |    L   |   / ?  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    O   |    E   |    U   |    I   |                                      |    D   |    H   |    T   |    N   |    S   |  Enter |
 * |  Media |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |   Tab  |   ; :  |    Q   |    J   |    K   |    X   |        |        |  |        |        |    B   |    M   |    W   |    V   |    Z   |  Shift |
 * |        |  Ctrl  |   GUI  |   Alt  |  Shift |        |        |        |  |        |        |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |BAS_EN1 |   Nav  |  Space |   Num  |        |  |        |   Sym  |  Bkspc |  RAlt  |BAS_EN2 |
 *                            |        |        |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_DVORAK] = LAYOUT(
    KC_GRV,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                                           KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    LT_ESCG, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                                           KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
#ifdef TAP_DANCE_ENABLE
    LT_TAB,  DM_SCLN, DM_Q,    DM_J,    DM_K,    KC_X,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_B,    DM_M,    DM_W,    DM_V,    DM_Z,    TD_RSFT,
#else
    LT_TAB,  DM_SCLN, DM_Q,    DM_J,    DM_K,    KC_X,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_B,    DM_M,    DM_W,    DM_V,    DM_Z,    KC_RSFT,
#endif // TAP_DANCE_ENABLE
                               BAS_EN1, NAV,     KC_SPC,  NUM,     XXXXXXX,    XXXXXXX, SYM,     KC_BSPC, KC_RALT, BAS_EN2
),
