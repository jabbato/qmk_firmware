/* A standard layout for the Dactyl Manuform 5x6 Keyboard */
#include QMK_KEYBOARD_H


#define _NORMAL_KEYBOARD            0
#define _RIGHT_FUNCTIONS            1
#define _LEFT_FUNCTIONS             2
#define _RGB_FUNCTIONS              3
#define _NUMPAD_FUNCTIONS           4
#define _MOUSE_FUNCTIONS            5
#define _NAVIGATION_RIGHT_FUNCTIONS 6
#define _NAVIGATION_LEFT_FUNCTIONS  7
#define _SYMBOL_RIGHT_FUNCTIONS     8
#define _SYMBOL_LEFT_FUNCTIONS      9
#define _UMLAUT_LEFT_FUNCTIONS      10
#define _UMLAUT_RIGHT_FUNCTIONS     11
#define _NUMBER_ROW_RIGHT_FUNCTIONS 12
#define _NUMBER_ROW_LEFT_FUNCTIONS  13
#define _F_KEYS_LEFT_FUNCTIONS      14
#define _F_KEYS_RIGHT_FUNCTIONS     15
#define _STAR_FUNCTIONS             16
#define _LAYERS_FUNCTIONS           17

#define L_RGHT                      _RIGHT_FUNCTIONS
#define L_LFT                       _LEFT_FUNCTIONS
#define L_RGB                       _RGB_FUNCTIONS
#define L_NUM                       _NUMPAD_FUNCTIONS
#define L_MOUSE                     _MOUSE_FUNCTIONS
#define L_NAV_R                     _NAVIGATION_RIGHT_FUNCTIONS
#define L_NAV_L                     _NAVIGATION_LEFT_FUNCTIONS
#define L_SYMB_R                    _SYMBOL_RIGHT_FUNCTIONS
#define L_SYMB_L                    _SYMBOL_LEFT_FUNCTIONS
#define L_UML_L                     _UMLAUT_LEFT_FUNCTIONS
#define L_UML_R                     _UMLAUT_RIGHT_FUNCTIONS
#define L_NUM_R                     _NUMBER_ROW_RIGHT_FUNCTIONS
#define L_NUM_L                     _NUMBER_ROW_LEFT_FUNCTIONS
#define L_F_R                       _F_KEYS_RIGHT_FUNCTIONS
#define L_F_L                       _F_KEYS_LEFT_FUNCTIONS
#define L_STAR                      _STAR_FUNCTIONS
#define L_LAYERS                    _LAYERS_FUNCTIONS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_NORMAL_KEYBOARD] = LAYOUT(
    KC_Q,              KC_W,              KC_E,              KC_R,               KC_T,                            KC_Y,              KC_U,               KC_I,               KC_O,            KC_P,
    LT(L_NUM_R, KC_A), LT(L_MOUSE, KC_S), LT(L_NAV_R, KC_D), LT(L_SYMB_R, KC_F), LT(L_UML_R, KC_G),               LT(L_UML_L, KC_H), LT(L_SYMB_L, KC_J), LT(L_NAV_L, KC_K),  LT(L_NUM, KC_L), LT(L_NUM_L, KC_NUHS),
    LCTL_T(KC_Z),      KC_X,              KC_C,              KC_V,               LT(L_F_R, KC_B),                 LT(L_F_R, KC_N)  , KC_M,               LALT_T(KC_COMM),    KC_DOT,          RCTL_T(KC_SLSH),
                       KC_NUBS,           KC_GRV,            KC_LALT,                                                                RALT_T(KC_EQL), LT(L_RGB, KC_RBRC), KC_MINS,
                                                                                 KC_SPC,                          KC_ENTER,
                                                                                 KC_LSFT, KC_LGUI,     TG(L_LAYERS), KC_RSFT
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
                                        KC_TRNS,                            KC_BTN1,
					KC_TRNS, KC_TRNS,          KC_BTN2, KC_BTN3
  ),
  [_NAVIGATION_RIGHT_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS       , KC_TRNS,                     KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_BSPC,
    KC_TRNS, KC_LGUI, KC_NO  , LCTL(KC_LALT) , LCA(KC_LSFT),                KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS       , KC_TRNS,                     KC_TRNS, KC_HOME, KC_PGDN, KC_END , KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS       ,                                       KC_DEL , KC_TRNS, KC_TRNS,
                                               KC_TRNS,                     KC_BSPC,
					       KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS
),
  [_NAVIGATION_LEFT_FUNCTIONS] = LAYOUT(
    KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_NO  , KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_DEL , KC_TRNS, KC_TRNS,
                                        KC_TAB,                             KC_BSPC,
				        KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
),
  [_SYMBOL_RIGHT_FUNCTIONS] = LAYOUT(
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS   ,                              KC_CIRC   , KC_AMPR   , KC_ASTR   , KC_LPRN   , KC_RPRN   ,
    RALT(KC_1), RALT(KC_2), RALT(KC_3), KC_NO  , RALT(KC_5),                              RALT(KC_6), RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0),
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS, KC_TRNS   ,                              KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
                KC_TRNS   , KC_TRNS   , KC_TRNS            ,                                          KC_TRNS   , KC_TRNS   , KC_TRNS   ,
                                                 KC_TRNS   ,                     KC_TRNS,
					         KC_TRNS   , KC_TRNS,   KC_TRNS, KC_TRNS
),
  [_SYMBOL_LEFT_FUNCTIONS] = LAYOUT(
    KC_EXLM   , KC_AT     , KC_HASH   , KC_DLR    , KC_PERC   ,                     KC_CIRC   , KC_AMPR, KC_ASTR   , KC_LPRN   , KC_RPRN   ,
    RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_4), RALT(KC_5),                     RALT(KC_6), KC_NO  , RALT(KC_8), RALT(KC_9), RALT(KC_0),
    KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,                     KC_TRNS   , KC_TRNS, KC_TRNS   , KC_TRNS   , KC_TRNS   ,
                KC_TRNS   , KC_TRNS   , KC_TRNS   ,                                             KC_TRNS, KC_TRNS   , KC_TRNS   ,
                                                    KC_TRNS   ,                     KC_TRNS,
					            KC_TRNS   , KC_TRNS,   KC_TRNS, KC_TRNS
),

  [_UMLAUT_LEFT_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_LBRC, KC_TRNS, KC_SCLN, KC_TRNS,
    KC_QUOT, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),
  [_UMLAUT_RIGHT_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_LBRC, KC_TRNS, KC_SCLN, KC_TRNS,
    KC_QUOT, KC_MINS, KC_TRNS, KC_TRNS, KC_NO  ,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),

  [_NUMBER_ROW_LEFT_FUNCTIONS] = LAYOUT(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                            KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO  ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),

  [_NUMBER_ROW_RIGHT_FUNCTIONS] = LAYOUT(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                            KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),
  [_NUMPAD_FUNCTIONS] = LAYOUT(
    KC_TRNS, KC_7   , KC_8   , KC_9   , KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_4   , KC_5   , KC_6   , KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_1   , KC_2   , KC_3   , KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_0   , KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),

  [_F_KEYS_LEFT_FUNCTIONS] = LAYOUT(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                            KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
    KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                            KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),
  [_F_KEYS_RIGHT_FUNCTIONS] = LAYOUT(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                            KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
    KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                            KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS,                                              KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS,                            KC_TRNS,
					KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
  ),
  [_STAR_FUNCTIONS] = LAYOUT(
    SGUI(KC_1) , SGUI(KC_2) , SGUI(KC_3) , SGUI(KC_4) , SGUI(KC_5) ,                              SGUI(KC_6) , SGUI(KC_7) , SGUI(KC_8) , SGUI(KC_9) , SGUI(KC_0),
    SGUI(KC_F1), SGUI(KC_F2), SGUI(KC_F3), SGUI(KC_F4), SGUI(KC_F5),                              SGUI(KC_F6), SGUI(KC_F7), SGUI(KC_F8), SGUI(KC_F9), SGUI(KC_F10),
    KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    ,                              KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    ,
                 KC_TRNS    , KC_TRNS    , KC_TRNS    ,                                                        KC_TRNS    , KC_TRNS    , KC_TRNS    ,
                                           KC_ESC     ,                                                        KC_TRNS    ,
					   KC_ENTER   , KC_TRNS    ,                                   KC_NO,  KC_TRNS
  ),

  [_LAYERS_FUNCTIONS] = LAYOUT(
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        KC_NO,                    KC_NO,       KC_NO,        KC_NO,        KC_NO,     KC_NO,
    MO(L_NUM_R), MO(L_MOUSE), MO(L_NAV_R), MO(L_SYMB_R), MO(L_UML_R),              MO(L_UML_L), MO(L_SYMB_L), MO(L_NAV_L),  MO(L_NUM), MO(L_NUM_L),
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        MO(L_F_R),                MO(L_F_L),   KC_NO,        KC_NO,        KC_NO,     KC_NO,
                              KC_NO,       KC_NO,        KC_NO,                    KC_NO,       MO(L_RGB),    KC_NO,
                                                         KC_NO,                    KC_NO,
                                                         KC_NO, KC_NO,             TG(L_LAYERS), KC_NO
  ),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_SLSH):
            return TAPPING_TERM + TAPPING_TERM;
        default:
            return TAPPING_TERM;
    }
}

