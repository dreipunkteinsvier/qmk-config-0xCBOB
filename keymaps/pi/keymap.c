#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
    * ,---------------------------------------------------------------------.
    * |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |
    * |------+------+------+------+------+------+------+------+------+------|
    * |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |
    * |------+------+------+------+------+------+------+------+------+------|
    * |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |
    * |------+------+------+------+------+------+------+------+------+------|
    * | Ctrl | Gui  | Alt  |    Enter    |    Space    | AltGr| Gui  | TOGG |
    * `---------------------------------------------------------------------'
    */
    [0] = LAYOUT_ortho_4x10_2x2u(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_ENT,  KC_SPC,           KC_RALT, KC_LGUI, HF_TOGG
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code_delay(KC_VOLU, 10);
    } else {
        tap_code_delay(KC_VOLD, 10);
    }
    return false;
}

