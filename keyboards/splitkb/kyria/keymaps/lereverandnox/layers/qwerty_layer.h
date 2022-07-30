// clang-format off
/*
 * Qwerty
 *
 * ,-----------------------------------------------------.                                      ,-----------------------------------------------------.
 * |   ` ~  |    Q   |    W   |    E   |    R   |    T   |                                      |    Y   |    U   |    I   |    O   |    P   |   ' "  |
 * |        |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    S   |    D   |    F   |    G   |                                      |    H   |    J   |    K   |    L   |   ; :  |  Enter |
 * |  Media |        |        |        |        |        |                                      |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|-----------------.  ,-----------------|--------+--------+--------+--------+--------+--------|
 * |  Shift |    Z   |    X   |    C   |    V   |    B   |        |        |  |        |        |    N   |    M   |   , <  |   . >  |   / ?  |  Shift |
 * |        |  Ctrl  |   GUI  |   Alt  |  Shift |        |        |        |  |        |        |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * `--------+--------+--------+--------+--------+--------|--------|--------|  |--------|--------|--------+--------+--------+--------+--------+--------'
 *                            |BAS_EN1 |   Tab  |  Space |   Num  |        |  |        |   Sym  |  Bkspc |  RAlt  |BAS_EN2 |
 *                            |        |   Nav  |        |        |        |  |        |        |        |        |        |
 *                            `--------------------------------------------'  `--------------------------------------------'
 */
[_QWERTY] = LAYOUT(
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    LT_ESCG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
#ifdef TAP_DANCE_ENABLE
    TD_LSFT, QM_Z,    QM_X,    QM_C,    QM_V,    KC_B,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, TD_RSFT,
#endif
    KC_LSFT, QM_Z,    QM_X,    QM_C,    QM_V,    KC_B,    XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, KC_RSFT,
                               BAS_EN1, LT_TAB,  KC_SPC,  NUM,     XXXXXXX,    XXXXXXX, SYM,     KC_BSPC, KC_RALT, BAS_EN2
),
