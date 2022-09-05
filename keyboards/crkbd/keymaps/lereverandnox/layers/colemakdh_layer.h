// clang-format off
/*
 * Colemak-DH
 *
 * ,-----------------------------------------------------.                    ,-----------------------------------------------------.
 * |   ` ~  |    Q   |    W   |    F   |    P   |    B   |                    |    J   |    L   |    U   |    Y   |   ; :  |   ' "  |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    R   |    S   |    T   |    G   |                    |    M   |    N   |    E   |    I   |    O   |  Enter |
 * |  Media |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |  Tab   |    Z   |    X   |    C   |    D   |    V   |                    |    K   |    H   |   , <  |   . >  |   / ?  |  Shift |
 * |  Nav   |  Ctrl  |   GUI  |   Alt  |  Shift |        |                    |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * `--------+--------+--------+--------+--------+--------|--------.  ,--------|--------|--------|--------+--------+--------+--------'
 *                                     |   Nav  |  Space |   Num  |  |   Sym  |  Bkspc |  RAlt  |
 *                                     |        |        |        |  |        |        |        |
 *                                     `--------------------------'  `--------------------------'
 */
[_COLEMAKDH] = LAYOUT(
    KC_GRV,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
    LT_ESCG, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
#ifdef TAP_DANCE_ENABLE
    LT_TAB,  CM_Z,    CM_X,    CM_C,    CM_D,    KC_V,                         KC_K,    CM_H,    CM_COMM, CM_DOT,  CM_SLSH, TD_RSFT,
#else
    LT_TAB,  CM_Z,    CM_X,    CM_C,    CM_D,    KC_V,                         KC_K,    CM_H,    CM_COMM, CM_DOT,  CM_SLSH, KC_RSFT,
#endif // TAP_DANCE_ENABLE
                                        NAV,     KC_SPC,  NUM,        SYM,     KC_BSPC, KC_RALT
),
