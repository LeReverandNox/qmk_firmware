// clang-format off
/*
 * Symbols
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | SYM_ENC|        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |    ~   |    "   |        |    *   |    &   |    (   |    )   |    +   |    _   |    |   |    ?   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------|
 * |        |        |   ^    |    %   |    $   |    [   |    ]   |    =   |    -   |    \   |    /   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------|
 * |        |    :   |    #   |    @   |    !   |    {   |    }   |    <   |    >   |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |   Del  |        |        |   Del  |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT_preonic_grid(
    SYM_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TILD, KC_DQUO, XXXXXXX, KC_ASTR, KC_AMPR, KC_LPRN, KC_RPRN, KC_PLUS, KC_UNDS, KC_PIPE, KC_QUES, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_CIRC, KC_PERC, KC_DLR,  KC_LBRC, KC_RBRC, KC_EQL,  KC_MINS, KC_BSLS, KC_SLSH, XXXXXXX,
    XXXXXXX, KC_COLN, KC_HASH, KC_AT,   KC_EXLM, KC_LCBR, KC_RCBR, KC_LABK, KC_RABK, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  _______, _______, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
