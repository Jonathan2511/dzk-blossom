#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* VIA related config */
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 4

#define FORCE_NKRO

#define AUDIO_PIN GP0
#define AUDIO_PWM_DRIVER PWMD0
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_CLICKY
