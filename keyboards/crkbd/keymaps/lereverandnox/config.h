#pragma once

/* Select hand configuration */

// #    define MASTER_LEFT
// #    define MASTER_RIGHT
#    define EE_HANDS

#ifdef RGBLIGHT_ENABLE
#undef RGBLED_NUM
#    define RGBLED_NUM 6
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_SPLIT

/* #    define RGBLIGHT_ANIMATIONS  // (+5608) */
/* #    define RGBLIGHT_EFFECT_ALTERNATING */
/* #    define RGBLIGHT_EFFECT_BREATHING */
/* #    define RGBLIGHT_EFFECT_CHRISTMAS */
/* #    define RGBLIGHT_EFFECT_KNIGHT */
/* #    define RGBLIGHT_EFFECT_RAINBOW_MOOD */
/* #    define RGBLIGHT_EFFECT_RAINBOW_SWIRL */
/* #    define RGBLIGHT_EFFECT_RGB_TEST */
/* #    define RGBLIGHT_EFFECT_SNAKE */
/* #    define RGBLIGHT_EFFECT_STATIC_GRADIENT */
#endif // RGBLIGHT_ENABLE

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

/* Limits maximum brightness of LEDs. */
/* If not defined maximum brightness is set to 255. */
/* Higher value might cause the controller to crash if you have a lot of LEDs */
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 152
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR  // Sets the default mode, if none has been set

// #    define ENABLE_RGB_MATRIX_ALPHAS_MODS                // Static dual hue, speed is hue for secondary hue
// #    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN           // Static gradient top to bottom, speed controls how much gradient changes
// #    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT        // Static gradient left to right, speed controls how much gradient changes
// #    define ENABLE_RGB_MATRIX_BREATHING                  // Single hue brightness cycling animation
// #    define ENABLE_RGB_MATRIX_BAND_SAT                   // Single hue band fading saturation scrolling left to right
// #    define ENABLE_RGB_MATRIX_BAND_VAL                   // Single hue band fading brightness scrolling left to right
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT          // Single hue 3 blade spinning pinwheel fades saturation
// #    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL          // Single hue 3 blade spinning pinwheel fades brightness
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT            // Single hue spinning spiral fades saturation
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL            // Single hue spinning spiral fades brightness
// #    define ENABLE_RGB_MATRIX_CYCLE_ALL                  // Full keyboard solid hue cycling through full gradient
// #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT           // Full gradient scrolling left to right
// #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN              // Full gradient scrolling top to bottom
// #    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON     // Full gradient scrolling out to in
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN               // Full dual gradients scrolling out to in
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL          // Full gradent Chevron shapped scrolling left to right
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL             // Full gradient spinning pinwheel around center of keyboard
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL               // Full gradient spinning spiral around center of keyboard
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON                // Full gradient spinning around center of keyboard
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON             // Full tighter gradient spinning around center of keyboard
// #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS          // Full dual gradients spinning two halfs of keyboard
// #    define ENABLE_RGB_MATRIX_RAINDROPS                  // Randomly changes a single key's hue
// #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS        // Randomly changes a single key's hue and saturation
// #    define ENABLE_RGB_MATRIX_HUE_BREATHING              // Hue shifts up a slight ammount at the same time, then shifts back
// #    define ENABLE_RGB_MATRIX_HUE_PENDULUM               // Hue shifts up a slight ammount in a wave to the right, then back to the left
// #    define ENABLE_RGB_MATRIX_HUE_WAVE                   // Hue shifts up a slight ammount and then back down in a wave to the right
// #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL              // Single hue fractal filled keys pulsing horizontally out to edges
// #    define ENABLE_RGB_MATRIX_PIXEL_FLOW                 // Pulsing RGB flow along LED wiring with random hues
// #    define ENABLE_RGB_MATRIX_PIXEL_RAIN                 // Randomly light keys with random hues
// =================================================== Requires RGB_MATRIX_FRAMEBUFFER_EFFECTS =============================================================
// #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP             // How hot is your WPM!
// #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN               // That famous computer simulation
// =================================================== RGB_MATRIX_KEYPRESSES OR RGB_MATRIX_KEYRELEASES =====================================================
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE       // Pulses keys hit to hue & value then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE              // Static single hue, pulses keys hit to shifted hue then fades to current hue
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE         // Hue & value pulse near a single key hit then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE    // Hue & value pulse near multiple key hits then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS        // Hue & value pulse the same column and row of a single key hit then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS   // Hue & value pulse the same column and row of multiple key hits then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS        // Hue & value pulse away on the same column and row of a single key hit then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS   // Hue & value pulse away on the same column and row of multiple key hits then fades value out
// #    define ENABLE_RGB_MATRIX_SPLASH                      // Full gradient & value pulse away from a single key hit then fades value out
// #    define ENABLE_RGB_MATRIX_MULTISPLASH                 // Full gradient & value pulse away from multiple key hits then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_SPLASH                // Hue & value pulse away from a single key hit then fades value out
// #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH           // Hue & value pulse away from multiple key hits then fades value out
#endif // RGB_MATRIX_ENABLE

// PERSO
#    define IGNORE_MOD_TAP_INTERRUPT  // (-12)
#    define TAPPING_TERM 200
#    define TAPPING_TERM_PER_KEY
// #    define RETRO_TAPPING
// #    define PERMISSIVE_HOLD

// Force enable NKRO
#define FORCE_NKRO

// Mouse key speed and acceleration.
#ifdef MOUSEKEY_ENABLE
#    undef MOUSEKEY_DELAY
#    define MOUSEKEY_DELAY          0
#    undef MOUSEKEY_INTERVAL
#    define MOUSEKEY_INTERVAL       16
#    undef MOUSEKEY_MAX_SPEED
#    define MOUSEKEY_MAX_SPEED      3
#    undef MOUSEKEY_TIME_TO_MAX
#    define MOUSEKEY_TIME_TO_MAX    40
// Mouse wheel
#    undef MOUSEKEY_WHEEL_DELAY
#    define MOUSEKEY_WHEEL_DELAY    0
#endif // MOUSEKEY_ENABLE

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

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
/* #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD */
