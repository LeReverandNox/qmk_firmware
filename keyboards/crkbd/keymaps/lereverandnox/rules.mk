# If you want to change the display of OLED, you need to change here
SRC +=  \
./lib/rgb_state_reader.c \
./lib/logo_reader.c \
./lib/keylogger.c \
./lib/glcdfont.c \
# ./lib/layer_state_reader.c \
# ./lib/mode_icon_reader.c \
# ./lib/timelogger.c \
# ./lib/host_led_state_reader.c \

# PERSO
TAP_DANCE_ENABLE = yes      # Tap dances (+1060)
MOUSEKEY_ENABLE = yes       # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight.(+1764)
RGB_MATRIX_ENABLE = WS2812
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
SRC += tapdances.c
SRC += tapdances_handlers.c

# Firmware size reduction
EXTRAFLAGS += -flto

# For RESET to work, thanks @Drashna (https://www.reddit.com/r/olkb/comments/agua1r/reset/eea8z3i)
BOOTLOADER = atmel-dfu
