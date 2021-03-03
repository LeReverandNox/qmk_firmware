#pragma once

#ifdef AUDIO_ENABLE
#    if __GNUC__ > 5
#        if __has_include("lrn_song_list.h")
#            include "lrn_song_list.h"
#        endif  // if file exists
#    endif      // __GNUC__

#    define STARTUP_SONG SONG(PREONIC_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(DVORAK_SOUND) }
#    define AUDIO_CLICKY
#endif

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
#define PERMISSIVE_HOLD
/* #undef IGNORE_MOD_TAP_INTERRUPT */
/* #undef PERMISSIVE_HOLD */

// Choose between OUTER_COLS (one additional column on each side filled with mods)
// or INNER_COLS (both columns in the middle)
// or OUTER_CLASSICAL (no mods column, everthing is used)
#define OUTER_CLASSICAL

// If you want to have hold modifiers on the home row. Love the idea, sooo convenient, but it's not easy to work with in reality...
// Either the TAPPING_TERM is too long, often getting "as" instead of "C-s"
// or is too short, causing to trigger unwanted mods while typing normally, quite dangerous.
// #define HOME_MODS

// This is an experiment, putting the mods one row below the home row.
// This is the less used row, especially in Dvorak, so it might work better, less prone to unwanted mods with shorter TAPPING_TERM
#define BELOW_HOME_MODS

// Choose the layout for the gaming layer. For now DVORAK is the only option ^^'
#define GAMING_DVORAK

// Force enable NKRO
#define FORCE_NKRO

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      3
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    40
// Mouse wheel
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY       0
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL    100
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

// From https://www.reddit.com/r/olkb/comments/c0y085/rotary_encoder_general_help_request/
// The default value of 100 doesn't work to handle VOLU/VOLD with an encoder
#define TAP_CODE_DELAY 10

// Enable or disable Plover layer (to save space, ~256)
// #define PLOVER_ENABLED
