/* Copyright 2019-present Tomek Wójcik <contact@bthlabs.pl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum {
    TD_E_ENT,
    TD_Q_BSPC,
    TD_1_J,
    TD_3_L
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
        [TD_E_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_PENT),
        [TD_Q_BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_BSPC),
        [TD_1_J] = ACTION_TAP_DANCE_DOUBLE(KC_J, KC_1),
        [TD_3_L] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_3)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT (/* Base */
    LT(1, KC_SPC), TD(TD_Q_BSPC), TD(TD_E_ENT),
    TD(TD_1_J), KC_UP, TD(TD_3_L),
    KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT( /* Layer 2 */
    KC_TRNS, TG(2), KC_F5,
    KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,
    KC_AUDIO_VOL_DOWN, KC_AUDIO_MUTE, KC_AUDIO_VOL_UP
  ),
  [2] = LAYOUT(/* Base */
    KC_TRNS, KC_TRNS, TO(0),
    KC_Q, KC_W, KC_E,
    KC_A, KC_S, KC_D
  )
};

/* Keyboard Layout
  [0] = LAYOUT ( Base
    KC_TRNS, KC_TRNS, KC_TRNS
    KC_TRNS, KC_TRNS, KC_TRNS
    KC_TRNS, KC_TRNS, KC_TRNS
  ),
*/
