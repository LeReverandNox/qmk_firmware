#pragma once

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

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* #    define RGB_MATRIX_FRAMEBUFFER_EFFECT // enable TYPING_HEATMAP and DIGITAL_RAIN */
/* #    define RGB_MATRIX_KEYPRESSES  // reacts to keypresses */
/* #    define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses) */
/* #    define RGB_DISABLE_AFTER_TIMEOUT 10 // number of ticks to wait until disabling effects */
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended

/* limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness) */
#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5

/* Limits in milliseconds how frequently an animation will update the LEDs. */
/* 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness) */
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16

#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR  // Sets the default mode, if none has been set

/* #    define DISABLE_RGB_MATRIX_SOLID_COLOR                   // Static single hue, no speed support */
/* #    define DISABLE_RGB_MATRIX_ALPHAS_MODS                   // Static dual hue, speed is hue for secondary hue */
/* #    define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN              // Static gradient top to bottom, speed controls how much gradient changes */
/* #    define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT           // Static gradient top to bottom, speed controls how much gradient changes */
/* #    define DISABLE_RGB_MATRIX_BREATHING                     // Single hue brightness cycling animation */
/* #    define DISABLE_RGB_MATRIX_BAND_SAT                      // Single hue band fading saturation scrolling left to right */
/* #    define DISABLE_RGB_MATRIX_BAND_VAL                      // Single hue band fading brightness scrolling left to right */
/* #    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT             // Single hue 3 blade spinning pinwheel fades saturation */
/* #    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL             // Single hue 3 blade spinning pinwheel fades brightness */
/* #    define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT               // Single hue spinning spiral fades saturation */
/* #    define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL               // Single hue spinning spiral fades brightness */
/* #    define DISABLE_RGB_MATRIX_CYCLE_ALL                     // Full keyboard solid hue cycling through full gradient */
/* #    define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT              // Full gradient scrolling left to right */
/* #    define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN                 // Full gradient scrolling top to bottom */
/* #    define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON        // Full gradent Chevron shapped scrolling left to right */
/* #    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN                  // Full gradient scrolling out to in */
/* #    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL             // Full dual gradients scrolling out to in */
/* #    define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL                // Full gradient spinning pinwheel around center of keyboard */
/* #    define DISABLE_RGB_MATRIX_CYCLE_SPIRAL                  // Full gradient spinning spiral around center of keyboard */
/* #    define DISABLE_RGB_MATRIX_DUAL_BEACON                   // Full gradient spinning around center of keyboard */
/* #    define DISABLE_RGB_MATRIX_RAINBOW_BEACON                // Full tighter gradient spinning around center of keyboard */
/* #    define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS             // Full dual gradients spinning two halfs of keyboard */
/* #    define DISABLE_RGB_MATRIX_RAINDROPS                     // Randomly changes a single key's hue */
/* #    define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS           // Randomly changes a single key's hue and saturation */
/* #    define DISABLE_RGB_MATRIX_HUE_BREATHING                 // Hue shifts up a slight ammount at the same time, then shifts back */
/* #    define DISABLE_RGB_MATRIX_HUE_PENDULUM                  // Hue shifts up a slight ammount in a wave to the right, then back to the left */
/* #    define DISABLE_RGB_MATRIX_HUE_WAVE                      // Hue shifts up a slight ammount and then back down in a wave to the right */
// =================================================== Requires RGB_MATRIX_FRAMEBUFFER_EFFECTS =============================================================
#    define DISABLE_RGB_MATRIX_TYPING_HEATMAP                // How hot is your WPM!
#    define DISABLE_RGB_MATRIX_DIGITAL_RAIN                  // That famous computer simulation
// =================================================== RGB_MATRIX_KEYPRESSES OR RGB_MATRIX_KEYRELEASES =====================================================
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE         // Pulses keys hit to hue & value then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE                // Static single hue, pulses keys hit to shifted hue then fades to current hue */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE           // Hue & value pulse near a single key hit then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE      // Hue & value pulse near multiple key hits then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS          // Hue & value pulse the same column and row of a single key hit then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS     // Hue & value pulse the same column and row of multiple key hits then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS          // Hue & value pulse away on the same column and row of a single key hit then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS     // Hue & value pulse away on the same column and row of multiple key hits then fades value out */
/* #    define DISABLE_RGB_MATRIX_SPLASH                        // Full gradient & value pulse away from a single key hit then fades value out */
/* #    define DISABLE_RGB_MATRIX_MULTISPLASH                   // Full gradient & value pulse away from multiple key hits then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_SPLASH                  // Hue & value pulse away from a single key hit then fades value out */
/* #    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH             // Hue & value pulse away from multiple key hits then fades value out */
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
/* #    define NO_ACTION_LAYER	// (-1368) */
/* #    define NO_ACTION_ONESHOT // (-382) */
/* #    define NO_ACTION_TAPPING // (-2186) */

#define UNICODE_SELECTED_MODES UC_LNX
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
