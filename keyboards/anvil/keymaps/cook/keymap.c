#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_3x10(
            KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
            KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TT(1),
            KC_Z, KC_X, KC_C, KC_V, KC_SPC, KC_B, KC_N, KC_M, KC_NO, MO(2)),
	[1] = LAYOUT_ortho_3x10(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_ENT, KC_NO, KC_NO, KC_RSFT, MO(3), KC_TRNS, OSM(MOD_LSFT), KC_CAPS, OSM(MOD_LCTL), KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_ortho_3x10(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(10), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
	[3] = LAYOUT_ortho_3x10(KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_LGUI), KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_TRNS, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[10] = LAYOUT_ortho_3x10(KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, TO(0), KC_LSFT, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_NO, KC_NO, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
