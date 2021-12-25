#include QMK_KEYBOARD_H
#include "keymap.h"

enum ctrl_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
    LODAP,                 //ಠ_ಠ
    CRZRUN,                //ᕕ( ᐛ )ᕗ
    TABFLP,                //(╯°□°)╯︵ ┻━┻
    DUNNO,                 //¯\_(ツ)_/¯
    LENNY,                 //( ͡° ͜ʖ ͡°)
    BEAR,                  //ʕ•ᴥ•ʔ
    AMENO,                 //༼ つ ◕_◕ ༽つ
    HUGS,                  //(づ｡◕‿‿◕｡)づ
    REPTBL                 //┬─┬ノ( º _ ºノ)
};

enum unicode_names {
   // Shift pairs go at the beginning. They must be the first 127 codes.
   IBANG,    PRIME,
   CURRENCY, GBP,
   JPY,      EMDASH,
   MLTPLY,   DIVIDE,
   UADIA,    LADIA,
   UARNG,    LARNG,
   UEACT,    LEACT,
   UTHRN,    LTHRN,
   UUDIA,    LUDIA,
   UUACT,    LUACT,
   UIACT,    LIACT,
   UOACT,    LOACT,
   UODIA,    LODIA,
   UIDIA,    LIDIA,
   NOTSIN,   BRKNB,
   UAACT,    LAACT,
   SCTSIN,   SSHRPS,
   UEDIA,    LEDIA,
   UOSTR,    LOSTR,
   DEGREE,   PILCRW,
   CGRV,     CTLD,
   CCRT,     QUARTER,
   CDIA,     CACT,
   UAE,      LAE,
   CENT,     COPYR,
   UENE,     LENE,
   UCCED,    LCCED,
   INTBNG,   IINTBNG,
   LCB, LWCB,
   RCB, RWCB,

   INVQ, 
   SQUARE,
   CUBE,
   EURO,
   HALF,
   THRQU,
   LSQM,
   RSQM,
   REGTR,
   LDAQ,
   RDAQ,
   LMU,
   SKULL,
   NUKE,
   BIOH,
   RLAXD,
   SMILEY,
   JOY,
   GRIN,
   WINK,
   SAD,
   CRY,
   ANGRY,
   NEUTRAL,
   CRAZY,
   MEH,
   TIRED,
   SILENT,
   FIST,
   ARRU,
   ARRD,
   ARRL,
   ARRR,
   EGGPL,
   POOP
};

const uint32_t PROGMEM unicode_map[] = {
   // Listing pairs first for consistency, but the enum already did it.
   [IBANG]   = 0x00A1, [PRIME]   = 0x00B9,
   [CURRENCY]= 0x00A4, [GBP]     = 0x00A3,
   [JPY]     = 0x00A5, [EMDASH]  = 0x2014,
   [MLTPLY]  = 0x00D7, [DIVIDE]  = 0x00F7,
   [UADIA]   = 0x00C4, [LADIA]   = 0x00E4,
   [UARNG]   = 0x00C5, [LARNG]   = 0x00E5,
   [UEACT]   = 0x00C9, [LEACT]   = 0x00E9,
   [UTHRN]   = 0x00DE, [LTHRN]   = 0x00FE,
   [UUDIA]   = 0x00DC, [LUDIA]   = 0x00FC,
   [UUACT]   = 0x00DA, [LUACT]   = 0x00FA,
   [UIACT]   = 0x00CD, [LIACT]   = 0x00ED,
   [UOACT]   = 0x00D3, [LOACT]   = 0x00F3,
   [UODIA]   = 0x00D6, [LODIA]   = 0x00F6,
   [UIDIA]   = 0x00CF, [LIDIA]   = 0x00EF,
   [NOTSIN]  = 0x00AC, [BRKNB]   = 0x00A6,
   [UAACT]   = 0x00C1, [LAACT]   = 0x00E1,
   [SCTSIN]  = 0x00A7, [SSHRPS]  = 0x00DF,
   [UEDIA]   = 0x00CB, [LEDIA]   = 0x00EB,
   [UOSTR]   = 0x00D8, [LOSTR]   = 0x00F8,
   [DEGREE]  = 0x00B0, [PILCRW]  = 0x00B6,
   [QUARTER] = 0x00BC, [CCRT]    = 0x0302,
   [CGRV]    = 0x0300, [CTLD]    = 0x0303,
   [CDIA]    = 0x0308, [CACT]    = 0x0301,
   [UAE]     = 0x00C6, [LAE]     = 0x00E6,
   [CENT]    = 0x00A2, [COPYR]   = 0x00A9,
   [UENE]    = 0x00D1, [LENE]    = 0x00F1,
   [UCCED]   = 0x00C7, [LCCED]   = 0x00E7,
   [INTBNG]  = 0x203D, [IINTBNG] = 0x2e18,
   [LCB]     = 0x300C, [LWCB]    = 0x300E,
   [RCB]     = 0x300D, [RWCB]    = 0x300F,

   [INVQ]    = 0x00BF, 
   [SQUARE]  = 0x00B2,
   [CUBE]    = 0x00B3,
   [EURO]    = 0x20AC,
   [HALF]    = 0x00BD,
   [THRQU]   = 0x00BE,
   [LSQM]    = 0x2018,
   [RSQM]    = 0x2019,
   [REGTR]   = 0x00AE,
   [LDAQ]    = 0x00AB,
   [RDAQ]    = 0x00BB,
   [LMU]     = 0x03BC,
   [SKULL]   = 0x2620,
   [NUKE]    = 0x2622,
   [BIOH]    = 0x2623,
   [RLAXD]   = 0x263A,
   [SMILEY]  = 0x1F603,
   [JOY]     = 0x1F602,
   [GRIN]    = 0x1F601,
   [WINK]    = 0x1F609,
   [SAD]     = 0x2639,
   [CRY]     = 0x1F622,
   [ANGRY]   = 0x1F620,
   [NEUTRAL] = 0x1F610,
   [CRAZY]   = 0x1F61C,
   [MEH]     = 0x1F612,
   [TIRED]   = 0x1F62B,
   [SILENT]  = 0x1F636,
   [FIST]    = 0x270A,
   [ARRU]    = 0x2B06,
   [ARRD]    = 0x2B07,
   [ARRL]    = 0x2B05,
   [ARRR]    = 0x27A1,
   [EGGPL]   = 0x1F346,
   [POOP]    = 0x1F4A9
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_CALC, X(EMDASH), \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(1),   KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT \
    ),
    [1] = LAYOUT(
        UC_MOD , KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_F21 , KC_F22 , KC_F23 , KC_F24 ,            KC_MUTE, KC_SLCK, KC_PAUS, \
        XXXXXXX, UC_M_WC, UC_M_WI, UC_M_LN, UC_M_MA, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_MPLY, KC_MSTP, KC_VOLU, \
        XXXXXXX, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, XXXXXXX, U_T_AUTO,U_T_AGCR,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_MPRV, KC_MNXT, KC_VOLD, \
        KC_CAPS, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        _______, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, MD_BOOT, NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, \
        _______, _______, _______,                   XXXXXXX,                            _______, _______, _______, _______,            XXXXXXX, XXXXXXX, XXXXXXX \
    ),
    [2] = LAYOUT(
        XXXXXXX, X(RLAXD),X(SMILEY),X(GRIN), X(JOY), X(WINK),X(CRAZY),X(NEUTRAL),X(SILENT),X(MEH), X(SAD),  X(CRY),X(ANGRY),            LENNY  , BEAR   , LODAP  , \
        XP(CGRV,CTLD),XP(IBANG,PRIME),X(SQUARE),X(CUBE),XP(CURRENCY,GBP),X(EURO),XP(QUARTER,CCRT),X(HALF),X(THRQU),X(LSQM),X(RSQM),XP(JPY,EMDASH),XP(MLTPLY,DIVIDE), XXXXXXX,   AMENO  , DUNNO   , TABFLP , \
        XXXXXXX,XP(LADIA,UADIA),XP(LARNG,UARNG),XP(LEACT,UEACT),X(REGTR),XP(LTHRN,UTHRN),XP(LUDIA,UUDIA),XP(LUACT,UUACT),XP(LIACT,UIACT),XP(LOACT,UOACT),XP(LODIA,UODIA),X(LDAQ),X(RDAQ),XP(NOTSIN,BRKNB),   HUGS   , CRZRUN , REPTBL , \
        _______,XP(LAACT,UAACT),XP(SSHRPS,SCTSIN),XP(LEDIA,UEDIA),X(SKULL),X(FIST), XP(LCB,LWCB), XP(RCB,RWCB), XP(LIDIA,UIDIA),XP(LOSTR,UOSTR),XP(PILCRW,DEGREE),XP(CACT,CDIA), XXXXXXX, \
        _______,XP(LAE,UAE),X(POOP),XP(COPYR,CENT),X(NUKE),X(BIOH),XP(LENE,UENE),X(LMU),XP(LCCED,UCCED),XP(INTBNG,IINTBNG),X(INVQ), _______,                              X(ARRU), \
        _______, _______, _______,                   X(EGGPL),                           _______, _______, _______, _______,            X(ARRL), X(ARRD), X(ARRR) \
    ),
};

#ifdef _______
#undef _______
#define _______ {0, 0, 0}
#endif

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = {
        GREEN  , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE , PURPLE ,            CHART  , WHITE  , WHITE  , \
        _______, GREEN  , GREEN  , GREEN  , GREEN  , _______, _______, _______, _______, _______, _______, _______, _______, _______,   CHART  , CHART  , CHART  , \
        _______, BLUE   , CYAN   , BLUE   , YELLOW , MAGENTA, _______, GOLDEN , GOLDEN , _______, _______, _______, _______, _______,   CHART  , CHART  , CHART  , \
        _______, PINK   , CYAN   , PINK   , YELLOW , MAGENTA, _______, _______, _______, _______, _______, _______, _______, \
        _______, BLUE   , _______, _______, _______, RED    , SPRING , _______, _______, _______, _______, _______,                              _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______ \
    },
    // SPRING = Macro, GREEN = Emoji/symbol, BLUE = US Int, RED = US Int combining chars.
    [2] = {
        _______, GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  , GREEN  ,            SPRING , SPRING , SPRING , \
        RED    , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , _______,   SPRING , SPRING , SPRING , \
        _______, BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   , BLUE   ,   SPRING , SPRING , SPRING , \
        _______, BLUE   , BLUE   , BLUE   , GREEN  , GREEN  , PINK   , PINK   , BLUE   , BLUE   , BLUE   , RED    , _______, \
        _______, BLUE   , GREEN  , BLUE   , GREEN  , GREEN  , BLUE   , GREEN  , BLUE   , GREEN  , BLUE   , _______,                              GREEN  , \
        _______, _______, _______,                   GREEN  ,                            _______, _______, _______, _______,            GREEN  , GREEN  , GREEN   \
    },
};

#undef _______
#define _______ KC_TRNS

#define MODS_SHIFT  (get_mods() & MOD_MASK_SHIFT)
#define MODS_CTRL   (get_mods() & MOD_MASK_CTRL)
#define MODS_ALT    (get_mods() & MOD_MASK_ALT)

static uint16_t rgbtimer;
bool rgbkey = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case RGB_MOD:
        case RGB_RMOD:
        case RGB_SPI:
        case RGB_SPD:
        case RGB_VAI:
        case RGB_VAD:
        case RGB_HUI:
        case RGB_HUD:
        case RGB_SAI:
        case RGB_SAD:
            rgbtimer = timer_read();
            rgbkey = true;
            return true;
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            rgbtimer = timer_read();
            rgbkey = true;
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR): {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        case LODAP:
            if (record->event.pressed) {
                send_unicode_string("ಠ_ಠ");
            }
            return false;
        case TABFLP:
            if (record->event.pressed) {
                send_unicode_string("(╯°□°）╯︵ ┻━┻");
            }
            return false;
        case CRZRUN:
            if (record->event.pressed) {
                send_unicode_string("ᕕ( ᐛ )ᕗ");
            }
            return false;
        case DUNNO:
            if (record->event.pressed) {
                send_unicode_string("¯\\_(ツ)_/¯");
            }
            return false;
        case LENNY:
            if (record->event.pressed) {
                send_unicode_string("( ͡° ͜ʖ ͡°)");
            }
            return false;
        case BEAR:
            if (record->event.pressed) {
                send_unicode_string("ʕ•ᴥ•ʔ");
            }
            return false;
        case AMENO:
            if (record->event.pressed) {
                send_unicode_string("༼ つ ◕_◕ ༽つ");
            }
            return false;
        case HUGS:
            if (record->event.pressed) {
                send_unicode_string("(づ｡◕‿‿◕｡)づ");
            }
            return false;
        case REPTBL:
            if (record->event.pressed) {
                send_unicode_string("┬─┬ノ(°_°ノ)");
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

void set_layer_color(int layer) {
    if (layer == 0 || (rgbkey && timer_elapsed(rgbtimer) < 1000)) return;
    rgbkey = false;
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        rgb_matrix_set_color(i,ledmap[layer][i][0],ledmap[layer][i][1],ledmap[layer][i][2]);
    }
}

void rgb_matrix_indicators_user(void) {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE ||
        rgb_matrix_get_flags() == LED_FLAG_UNDERGLOW) {
            return;
        }
    set_layer_color(get_highest_layer(layer_state));
}