#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _MA, //Main layer
    _FN  //Function layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_MA] = LAYOUT_all(
    KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,     KC_F11, KC_F12,     KC_HOME,    KC_END, KC_INS, KC_DEL,
    JP_ZKHK,        JP_1,   JP_2,   JP_3,   JP_4,   JP_5,   JP_6,   JP_7,   JP_8,   JP_9,       JP_0,   JP_MINS,    JP_CIRC,    JP_YEN,         KC_BSPC,
    KC_TAB,                 KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,       KC_O,   KC_P,       JP_AT,      JP_LBRC,        KC_ENT,
    JP_EISU,                KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,       KC_L,   JP_SCLN,    JP_COLN,    JP_RBRC,
    KC_LSFT,                KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   JP_COMM,    JP_DOT, JP_SLSH,    JP_BSLS,                    KC_RSFT,
    KC_RCTL,    TT(_FN),    KC_LWIN,    KC_LALT,    JP_MHEN,    KC_SPC, JP_HENK,    JP_KANA,    KC_RALT,    KC_PSCR,    KC_RCTL,    KC_PGUP,    KC_UP,   KC_PGDN,
                                                                                                                                    KC_LEFT,    KC_DOWN,    KC_RIGHT),
[_FN] = LAYOUT_all(
    _______,    KC_MUTE,  KC_VOLD,  KC_VOLU,    RCS(KC_M),  KC_BRID,    KC_BRIU,    LWIN(KC_P), LWIN(KC_A), LWIN(KC_I), LWIN(KC_S), LWIN(KC_TAB),   KC_CALC, _______,    _______,    _______,    _______,
    _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,       _______,   _______,    _______,    _______,         _______,
    _______,                _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,       _______,   _______,       _______,      _______,        _______,
    _______,                _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,       _______,   _______,    _______,    _______,
    _______,                _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______,    _______,                    _______,
    _______,    _______,    _______,    _______,    _______,    _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,
                                                                                                                                    _______,    _______,    _______),
};

const rgblight_segment_t PROGMEM rgb_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 21,255,100}   //HSV_ORANGE 21, 255, 255
);
const rgblight_segment_t PROGMEM rgb_caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, 85,255,100}   //HSV_GREEN 85, 255, 255
);
const rgblight_segment_t PROGMEM rgb_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_OFF}
);
const rgblight_segment_t PROGMEM rgb_ma_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, 85,255,100}   //HSV_GREEN 85, 255, 255
);
const rgblight_segment_t PROGMEM rgb_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, 191,255,150}  //HSV_PURPLE 191, 255, 255
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_capslock_layer,
    rgb_caps_layer,
    rgb_numlock_layer,
    rgb_num_layer,
    rgb_ma_layer,
    rgb_fn_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, IS_HOST_LED_ON(USB_LED_CAPS_LOCK));
    rgblight_set_layer_state(1, IS_HOST_LED_OFF(USB_LED_CAPS_LOCK));
    rgblight_set_layer_state(2, IS_HOST_LED_ON(USB_LED_NUM_LOCK));
    rgblight_set_layer_state(3, IS_HOST_LED_OFF(USB_LED_NUM_LOCK));
    return true;
}
layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(4, layer_state_cmp(state, _MA));
    rgblight_set_layer_state(5, layer_state_cmp(state, _FN));
    return state;
}
