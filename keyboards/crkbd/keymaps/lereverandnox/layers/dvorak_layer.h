// clang-format off
/*
 * Dvorak
 *
 * ,-----------------------------------------------------.                    ,-----------------------------------------------------.
 * |   ` ~  |   ' "  |   , <  |   . >  |    P   |    Y   |                    |    F   |    G   |    C   |    R   |    L   |   / ?  |
 * |        |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    O   |    E   |    U   |    I   |                    |    D   |    H   |    T   |    N   |    S   |  Enter |
 * |  Media |        |        |        |        |        |                    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |  Tab   |   ; :  |    Q   |    J   |    K   |    X   |                    |    B   |    M   |    W   |    V   |    Z   |  Shift |
 * |  Nav   |  Ctrl  |   GUI  |   Alt  |  Shift |        |                    |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * `--------+--------+--------+--------+--------+--------|--------.  ,--------|--------|--------|--------+--------+--------+--------'
 *                                     |   Nav  |  Space |   Num  |  |   Sym  |  Bkspc |  RAlt  |
 *                                     |        |        |        |  |        |        |        |
 *                                     `--------------------------'  `--------------------------'
*/
[_DVORAK] = LAYOUT(
    KC_GRV,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                         KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    LT_ESCG, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                         KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
#ifdef TAP_DANCE_ENABLE
    KC_TAB,  DM_SCLN, DM_Q,    DM_J,    DM_K,    KC_X,                         KC_B,    DM_M,    DM_W,    DM_V,    DM_Z,    TD_RSFT,
#else
    KC_TAB,  DM_SCLN, DM_Q,    DM_J,    DM_K,    KC_X,                         KC_B,    DM_M,    DM_W,    DM_V,    DM_Z,    KC_RSFT,
#endif // TAP_DANCE_ENABLE
                                        NAV,     KC_SPC,  NUM,        SYM,     KC_BSPC, KC_RALT
),
