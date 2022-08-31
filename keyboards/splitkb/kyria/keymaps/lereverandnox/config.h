#pragma once

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
// #define PERMISSIVE_HOLD

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
#define ENCODER_RESOLUTION 2

#ifdef RGBLIGHT_ENABLE
/* #    define RGBLIGHT_ANIMATIONS             // Enable all additional animation modes. */
/* #    define RGBLIGHT_EFFECT_ALTERNATING     // Enable alternating animation mode. */
/* #    define RGBLIGHT_EFFECT_BREATHING       // Enable breathing animation mode. */
/* #    define RGBLIGHT_EFFECT_CHRISTMAS       // Enable christmas animation mode. */
/* #    define RGBLIGHT_EFFECT_KNIGHT          // Enable knight animation mode. */
/* #    define RGBLIGHT_EFFECT_RAINBOW_MOOD    // Enable rainbow mood animation mode. */
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL   // Enable rainbow swirl animation mode.
/* #    define RGBLIGHT_EFFECT_RGB_TEST        // Enable RGB test animation mode. */
/* #    define RGBLIGHT_EFFECT_SNAKE           // Enable snake animation mode. */
/* #    define RGBLIGHT_EFFECT_STATIC_GRADIENT // Enable static gradient mode. */
/* #    define RGBLIGHT_EFFECT_TWINKLE         // Enable twinkle animation mode. */
#endif

// Firmware size reduction (https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/)
#ifndef NO_DEBUG
#    define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif // !NO_PRINT


#    define NO_ACTION_MACRO
#    define NO_ACTION_FUNCTION
/* #    define NO_ACTION_LAYER   // (-1368) */
/* #    define NO_ACTION_ONESHOT // (-382) */
/* #    define NO_ACTION_TAPPING // (-2186) */
