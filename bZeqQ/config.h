/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#undef TAPPING_TERM
#define TAPPING_TERM 175

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "bZeqQ/3KmKr"
#define LAYER_STATE_8BIT

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60



// Enable "hold on other key" per key (handle in "get_hold_on_other_key_press")
// Makes MT hold if another key is pressed (does *not* wait for release), even if T < TAPPING_TERM
// (a.k.a "hold as fast as possible")
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
