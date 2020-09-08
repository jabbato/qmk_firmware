/* A standard layout for the Dactyl Manuform 5x6 Keyboard */
#include QMK_KEYBOARD_H

#define _NORMAL_KEYBOARD      0
#define _RIGHT_FUNCTIONS      1
#define _LEFT_FUNCTIONS       2
#define _RGB_FUNCTIONS        3
#define _NUMPAD_FUNCTIONS     4
#define _MOUSE_FUNCTIONS      5
#define _NAVIGATION_FUNCTIONS 6

#define L_RGHT   MO(_RIGHT_FUNCTIONS)
#define L_LFT    MO(_LEFT_FUNCTIONS)
#define L_RGB    MO(_RGB_FUNCTIONS)
#define L_NUM    MO(_NUMPAD_FUNCTIONS)
#define L_MOUSE  MO(_MOUSE_FUNCTIONS)
#define L_NAV    MO(_NAVIGATION_FUNCTIONS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_NORMAL_KEYBOARD] = LAYOUT(
    KC_Q,         KC_W,              KC_E,            KC_R,    KC_T,                            KC_Y,            KC_U,    KC_I,            KC_O,    KC_P,
    LSFT_T(KC_A), LT(L_MOUSE, KC_S), LT(L_NAV, KC_D), KC_F,    KC_G,                            LT(L_RGB, KC_H), KC_J,    KC_K,            KC_L,    LSFT_T(KC_SCLN),
    LCTL_T(KC_Z), KC_X,              KC_C,            KC_V,    KC_B,                            KC_N,            KC_M,    LALT_T(KC_COMM), KC_DOT,  RCTL_T(KC_SLSH),
                  KC_NUBS,           KC_GRV,          KC_LALT,                                                   KC_RALT, KC_RBRC,         KC_NO,
                                                               KC_SPC,                          KC_ENTER,
                                                               KC_LSFT, KC_LGUI,          KC_NO, KC_RSFT
  ),

  [_RGB_FUNCTIONS] = LAYOUT(
    RGB_M_R, RGB_M_B, RGB_M_K, RGB_M_X , RGB_M_G,			    RGB_M_SW, RGB_M_SN, KC_NO  , KC_NO  , KC_NO,
    RGB_M_P, RGB_TOG, KC_NO  , RGB_RMOD, RGB_MOD  ,			    KC_NO   , KC_NO   , KC_NO  , KC_NO  , KC_NO,
    RGB_HUI, RGB_HUD, RGB_SPD, RGB_SAD , RGB_VAD,		            KC_NO   , KC_NO   , KC_NO  , KC_NO  , KC_NO,
	     RGB_SPI, RGB_SAI , RGB_VAI,			                      KC_NO   , KC_NO  , KC_NO  ,
                                         KC_NO  ,                           KC_NO   ,
                                         RESET  , KC_NO,           KC_NO  , KC_NO
  ),


  [_MOUSE_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS,
    KC_TRNS, KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS,                            KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),
  [_NAVIGATION_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS       , KC_TRNS,                     KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_LGUI, KC_NO  , LCTL(KC_LALT) , LCA(KC_LSFT),                KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS       , KC_TRNS,                     KC_TRNS, KC_HOME, KC_PGDN, KC_END , KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS       ,                                       KC_TRNS, KC_TRNS, KC_TRNS,
                                               KC_TRNS,                     KC_TRNS,
					       KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS
),
  [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS,
    KC_CIRC, KC_ASTR, KC_AMPR, KC_NO  , KC_TRNS,                            KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_MINS, KC_BSLS, KC_GRV , KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS       ,                                       KC_TRNS, KC_TRNS, KC_TRNS,
                                               KC_TRNS,                     KC_TRNS,
					       KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS
),
    /**     ["KC_TRNS"     , "KC_COLN"     , "KC_LT"          , "KC_GT"         , "KC_SCLN", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**  */
    /**      "KC_LCBR"     , "KC_RCBR"     , "KC_LPRN"        , "KC_RPRN"       , "KC_AT", */
    /**      "KC_TRNS"     , "KC_NO"       , "KC_EQL"         , "KC_PLUS"       , "KC_PERC", */
    /**  */
    /**      "KC_TRNS"     , "KC_EXLM"     , "KC_LBRC"        , "KC_RBRC"       , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**  */
    /**      "KC_VOLD"     , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_VOLU" */
    /**     ], */
    /**     ["KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_F7"       , "KC_F8"          , "KC_F9"         , "KC_F10", */
    /**  */
    /**      "KC_TRNS"     , "KC_NO"       , "LCTL(KC_LALT)"  , "KC_TRNS"       , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_F4"       , "KC_F5"          , "KC_F6"         , "KC_F11", */
    /**  */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_F1"       , "KC_F2"          , "KC_F3"         , "KC_F12", */
    /**  */
    /**      "KC_TRNS"     , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_TRNS" */
    /**     ], */
    /**     ["KC_PSLS"     , "KC_7"        , "KC_8"           , "KC_9"          , "KC_PPLS", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**  */
    /**      "KC_0"        , "KC_1"        , "KC_2"           , "KC_3"          , "KC_PMNS", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_NO"         , "KC_TRNS", */
    /**  */
    /**      "KC_PAST"     , "KC_4"        , "KC_5"           , "KC_6"          , "KC_PEQL", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**  */
    /**      "KC_TRNS"     , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_TRNS" */
    /**     ], */
    /**     ["KC_TRNS"     , "KC_TRNS"     , "KC_COLN"        , "KC_ESC"        , "KC_TRNS", */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_TRNS"       , "KC_DEL", */
    /**  */
    /**      "KC_TRNS"     , "KC_PERC"     , "KC_SLSH"        , "KC_ENT"        , "KC_TRNS", */
    /**      "DF(1)"       , "KC_LGUI"     , "KC_TRNS"        , "KC_TRNS"       , "KC_TRNS", */
    /**  */
    /**      "KC_TRNS"     , "KC_TRNS"     , "KC_TRNS"        , "KC_EXLM"       , "KC_TRNS", */
    /**      "DF(0)"       , "KC_TRNS"     , "RALT_T(KC_COMM)", "RCTL_T(KC_DOT)", "RESET", */
    /**  */
    /**      "KC_TRNS"     , "KC_TAB", */
    /**      "KC_NO"       , "KC_TRNS" */
    /**     ] */
    /** ], */
};
