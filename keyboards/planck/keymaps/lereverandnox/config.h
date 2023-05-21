#pragma once

#ifdef AUDIO_ENABLE
#    ifdef TEMPO_DEFAULT
#       undef TEMPO_DEFAULT
#       define TEMPO_DEFAULT 60
#    endif

#    define STARTUP_SONG SONG(PLANCK_SOUND)

#    define AUDIO_CLICKY

// Lower the volume (4095U = 100%)
#    define AUDIO_DAC_SAMPLE_MAX 1000U

#endif // AUDIO_ENABLE

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
// #define PERMISSIVE_HOLD

// Whether the gaming layer is enable or not
/* #define GAMING_ENABLE */
// Choose the layout for the gaming layer (default to QWERTY)
/* #define GAMING_DVORAK */
/* #define GAMING_COLEMAK */

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

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
