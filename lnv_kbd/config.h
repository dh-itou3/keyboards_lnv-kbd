// Copyright 2023 DesignHouseIto (@DH_itou3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B4, D4, D0, D7, D5, C6, D2, D1 }
#define MATRIX_COL_PINS { D6, C7, B6, B7, B5, B0, B3, B1, F0, F4, F1, F5, E6, F7, D3, F6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* RGB-LED */
#define RGB_DI_PIN B2
#define RGBLED_NUM 3
#define RGBLIGHT_LIMIT_VAL 100 /* The maximum brightness level */
#define RGBLIGHT_DEFAULT_VAL 0
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_LAYERS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

// hold & tapping delay setting
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
