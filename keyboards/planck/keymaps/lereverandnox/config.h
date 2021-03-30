#pragma once

#ifdef AUDIO_ENABLE
#    if __GNUC__ > 5
#        if __has_include("lrn_song_list.h")
#            include "lrn_song_list.h"
#        endif  // if file exists
#    endif      // __GNUC__

#    define STARTUP_SONG SONG(PLANCK_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(DVORAK_SOUND) }
#    define AUDIO_CLICKY

// Lower the volume
#    define AUDIO_DAC_SAMPLE_MAX 750U

#endif

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
// #define PERMISSIVE_HOLD

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
#define MOUSEKEY_WHEEL_DELAY    0

// From https://www.reddit.com/r/olkb/comments/c0y085/rotary_encoder_general_help_request/
// The default value of 100 doesn't work to handle VOLU/VOLD with an encoder
#define TAP_CODE_DELAY 10

// Enable or disable Plover layer (to save space, ~256)
// #define PLOVER_ENABLED
