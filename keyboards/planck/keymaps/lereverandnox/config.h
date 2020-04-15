#pragma once

#ifdef AUDIO_ENABLE
#    if __GNUC__ > 5
#        if __has_include("lrn_song_list.h")
#            include "lrn_song_list.h"
#        endif  // if file exists
#    endif      // __GNUC__

    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
     #define AUDIO_CLICKY
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
// #define PERMISSIVE_HOLD

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

#define ALT_TAB_TRESHOLD 500

// Choose the layout for the gaming layer. For now DVORAK is the only option ^^'
#define GAMING_DVORAK
