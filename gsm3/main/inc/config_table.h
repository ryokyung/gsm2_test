#ifndef CONFIG_TABLE_H
#define CONFIG_TABLE_H
/*==================================================================================================

    HEADER NAME : config_table.h

    GENERAL DESCRIPTION
        This header file contains all the software configuration ID tables.

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2003 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    01/02/2004   Anonymous        crxxxxx     Auto Generate

====================================================================================================
    INCLUDE FILES
==================================================================================================*/
/*
 * Model name and Manufacturer name string table index enumeration
 */
typedef enum {
    PRODUCT_ID_HERMES=0,
    PRODUCT_ID_CHANEL,
    PRODUCT_ID_TOPAZ,
    PRODUCT_ID_HERMES_KEJIAN,
    PRODUCT_ID_CHANEL_NEC,
    PRODUCT_ID_HERMES_DPC,
    PRODUCT_ID_HERMES_HYELCD,
    PRODUCT_ID_HERMES_REF1_DAXIAN,
    PRODUCT_ID_HERMES_REF1_GEO,
    PRODUCT_ID_OBELISK_CECT,
    PRODUCT_ID_HERMES_REF2_TOP,
    NUM_OF_PRODUCT_ID
} PRODUCT_ID_ENUM_TYPE;
/*==================================================================================================
    CONSTANTS
==================================================================================================*/
/*
 * Start value of each table
 */
#define CONFIG_MGR_FLAG_START          0
#define CONFIG_MGR_WORD_START          0x1000
#define CONFIG_MGR_DWORD_START         0x2000

/*==================================================================================================
    MACROS
==================================================================================================*/

/*==================================================================================================
    ENUMERATIONS
==================================================================================================*/
/*
 * Following table is for TRUE/FALSE type of flags.
 */
typedef enum {
    /*dummy*/
    CONFIG_ID_BEGIN=CONFIG_MGR_FLAG_START,
    /*Master flag for Hermes*/
    CONFIG_ID_HERMES,
    /*Master flag for Obelisk*/
    CONFIG_ID_OBELISK,
    /*Master flag for Rose*/
    CONFIG_ID_ROSE,
    /*Master flag for Chanel*/
    CONFIG_ID_CHANEL,
    /*Master flag for Topaz*/
    CONFIG_ID_TOPAZ,
    /*Master flag for Hermes Refresh1*/
    CONFIG_ID_HERMES_REF1,
    /*Master flag for Hermes Refresh 2*/
    CONFIG_ID_HERMES_REF2,
    CONFIG_ID_8,
    CONFIG_ID_9,
    CONFIG_ID_10,
    CONFIG_ID_11,
    CONFIG_ID_12,
    CONFIG_ID_13,
    CONFIG_ID_14,
    CONFIG_ID_15,
    CONFIG_ID_16,
    CONFIG_ID_17,
    CONFIG_ID_18,
    CONFIG_ID_19,
    CONFIG_ID_20,
    CONFIG_ID_21,
    CONFIG_ID_22,
    CONFIG_ID_23,
    CONFIG_ID_24,
    CONFIG_ID_25,
    CONFIG_ID_26,
    CONFIG_ID_27,
    CONFIG_ID_28,
    /*Enable Engineering/Test Mode - This will display system error on screen*/
    CONFIG_ID_ENABLE_ENGINEERING_MODE,
    /*ON: Send SS quary at power-up sequence, OFF: Doesn't send SS quary at power-up*/
    CONFIG_ID_SS_QUERY_AT_POWER_UP,
    /*ON: Enable GPRS FTA test menu in testmode, OFF: Hide FTA test menu in testmode*/
    CONFIG_ID_GPRS_FTA_TEST_MENU,
    /*ON: Does not read abbreviate dialed number in idle, OFF: Read phone number from SIM in idle*/
    CONFIG_ID_DISABLE_IDLE_ADN_READ,
    /*ON: Service lamp(status LED) will be blinking while in service, OFF: Service lamp will be off*/
    CONFIG_ID_ENABLE_SERVICE_LAMP,
    /*ON: Upon SIM change, call history will be cleared at power-up, OFF: Call history will be preserved over power cycle*/
    CONFIG_ID_CLEAR_CALL_HISTORY_BY_SIM,
    /*ON: Enable all games, OFF: only first two games are available*/
    CONFIG_ID_ENABLE_ALL_GAMES,
    /*ON: Contrast change with hex value, OFF: Contrast change with bar*/
    CONFIG_ID_DISPLAY_CONTRAST_FULL_RANGE,
    /*ON: Disable EL light on for MT call, OFF: Enable EL light on for MT call*/
    CONFIG_ID_DISABLE_EL_INCOMING_CALL,
    /*Disable POWERUP after an ALARM expiration*/
    CONFIG_ID_DISABLE_POWERUP_AFTER_ALARM,
    /*Enable Manual Triband Selection ( 900/1800 vs 1900 )*/
    CONFIG_ID_ENABLE_TRIBAND_SELECTION,
    /*Enable Keypad backlight off after 5 sec*/
    CONFIG_ID_ENABLE_KEYPAD_BACKLIGHT_OFF,
    /*ON: Enable auto-answer*/
    CONFIG_ID_ENABLE_ALWAYS_AUTOANSWER,
    /*ON: Traditional Chinese HongKong OFF:Traditional Chinese Taiwan*/
    CONFIG_ID_LANGUAGE_TCHN_HK,
    /*ON: Smart Eng. As a default Eng. Edit    OFF: Normal Eng. As a default*/
    CONFIG_ID_EDIT_ENG_DEFAULT_SMART,
    /*ON: Bopomofo as a default Trad. Chinese  OFF: Pinyin as a default.*/
    CONFIG_ID_EDIT_TCHN_DEFAULT_ZHUYIN,
    CONFIG_ID_45,
    CONFIG_ID_46,
    CONFIG_ID_47,
    CONFIG_ID_48,
    CONFIG_ID_49,
    /*ON: Disable GPRS power-on attach, OFF: Enable GPRS power-on attach*/
    CONFIG_ID_DISABLE_POWERON_ATTACH,
    /*ON: Disable GPRS icon display on attach confirm, OFF: Enable GPRS icon display on attach confirm*/
    CONFIG_ID_DISABLE_GPRS_ICON_ON_ATTACH,
    /*ON: Enable GPRS auto/manual selection menu support. OFF: no setting menu */
    CONFIG_ID_ENABLE_GPRSMODE_SELECTION,
    /*ON: Support Java OFF: no support */
    CONFIG_ID_SUPPORT_JAVA,
    CONFIG_ID_54,
    CONFIG_ID_55,
    CONFIG_ID_56,
    CONFIG_ID_57,
    CONFIG_ID_58,
    CONFIG_ID_59,
    /*ON: there is no hard key for clear. OFF: there is a clear key*/
    CONFIG_ID_NO_SEPARATED_CLEAR_KEY,
    /*ON: there is no hard key for camera. OFF: there is a camera key*/
    CONFIG_ID_NO_SEPARATED_CAMERA_KEY,
    /*ON: there is no camera flash device*/
    CONFIG_ID_NO_FLASH,
    /*ON: there is no light sensor*/
    CONFIG_ID_NO_LIGHTSENSOR,
    /*ON: there is no 7-color LED*/
    CONFIG_ID_NO_7_COLOR_LED,
    /*ON: there is O-LED*/
    CONFIG_ID_O_LED,
    CONFIG_ID_66,
    CONFIG_ID_67,
    /*ON:Enalbe GIF Decoder*/
    CONFIG_ID_ENABLE_GIF_LICENSE,
    CONFIG_ID_69,
    /*ON: Don't show auto-hyphen of dialed number.*/
    CONFIG_ID_DISABLE_AUTO_HYPHEN,
    /*ON: Turn On LCD upon key press when phone is locked state*/
    CONFIG_ID_TURNON_LCD_LOCKED,
    CONFIG_ID_72,
    CONFIG_ID_73,
    CONFIG_ID_74,
    CONFIG_ID_75,
    CONFIG_ID_76,
    CONFIG_ID_77,
    CONFIG_ID_78,
    CONFIG_ID_79,
    CONFIG_ID_80,
    CONFIG_ID_81,
    CONFIG_ID_82,
    CONFIG_ID_83,
    CONFIG_ID_84,
    CONFIG_ID_85,
    CONFIG_ID_86,
    CONFIG_ID_87,
    CONFIG_ID_88,
    CONFIG_ID_89,
    CONFIG_ID_90,
    CONFIG_ID_91,
    CONFIG_ID_92,
    CONFIG_ID_93,
    CONFIG_ID_94,
    CONFIG_ID_95,
    CONFIG_ID_96,
    CONFIG_ID_97,
    CONFIG_ID_98,
    CONFIG_ID_99,
    CONFIG_ID_100,
    CONFIG_ID_101,
    CONFIG_ID_102,
    CONFIG_ID_103,
    CONFIG_ID_104,
    CONFIG_ID_105,
    CONFIG_ID_106,
    CONFIG_ID_107,
    CONFIG_ID_108,
    CONFIG_ID_109,
    CONFIG_ID_110,
    CONFIG_ID_111,
    CONFIG_ID_112,
    CONFIG_ID_113,
    CONFIG_ID_114,
    CONFIG_ID_115,
    CONFIG_ID_116,
    CONFIG_ID_117,
    CONFIG_ID_118,
    CONFIG_ID_119,
    CONFIG_ID_120,
    CONFIG_ID_121,
    CONFIG_ID_122,
    CONFIG_ID_123,
    CONFIG_ID_124,
    CONFIG_ID_125,
    CONFIG_ID_126,
    CONFIG_ID_127,
    CONFIG_ID_128,
    CONFIG_ID_129,
    CONFIG_ID_130,
    CONFIG_ID_131,
    CONFIG_ID_132,
    CONFIG_ID_133,
    CONFIG_ID_134,
    CONFIG_ID_135,
    CONFIG_ID_136,
    CONFIG_ID_137,
    CONFIG_ID_138,
    CONFIG_ID_139,
    CONFIG_ID_140,
    CONFIG_ID_141,
    CONFIG_ID_142,
    CONFIG_ID_143,
    CONFIG_ID_144,
    CONFIG_ID_145,
    CONFIG_ID_146,
    CONFIG_ID_147,
    CONFIG_ID_148,
    CONFIG_ID_149,
    /*Number of Market Supported*/
    CONFIG_ID_NUM_OF_COUNTRY,
    /*ON: China Market Support*/
    CONFIG_ID_COUNTRY_CHINA,
    /*ON: Middle East Market Support*/
    CONFIG_ID_COUNTRY_MIDDLE_EAST,
    /*ON: Thailand Market Support*/
    CONFIG_ID_COUNTRY_THAI,
    /*ON: Hongkong Market Support*/
    CONFIG_ID_COUNTRY_HONGKONG,
    /*ON: Malaysia Market Support*/
    CONFIG_ID_COUNTRY_MALAYSIA,
    /*ON: Singapore Market Support*/
    CONFIG_ID_COUNTRY_SINGAPORE,
    /*ON: India Market Support*/
    CONFIG_ID_COUNTRY_INDIA,
    /*ON: Indonesia Market Support*/
    CONFIG_ID_COUNTRY_INDONESIA,
    /*ON: Taiwan Market Support*/
    CONFIG_ID_COUNTRY_TAIWAN,
    /*ON: Philippines Market Support*/
    CONFIG_ID_COUNTRY_PHILIPPINES,
    CONFIG_ID_161,
    CONFIG_ID_162,
    CONFIG_ID_163,
    CONFIG_ID_164,
    CONFIG_ID_165,
    CONFIG_ID_166,
    CONFIG_ID_167,
    CONFIG_ID_168,
    CONFIG_ID_169,
    CONFIG_ID_170,
    CONFIG_ID_171,
    CONFIG_ID_172,
    CONFIG_ID_173,
    CONFIG_ID_174,
    CONFIG_ID_175,
    CONFIG_ID_176,
    CONFIG_ID_177,
    CONFIG_ID_178,
    CONFIG_ID_179,
    CONFIG_ID_180,
    CONFIG_ID_181,
    CONFIG_ID_182,
    CONFIG_ID_183,
    CONFIG_ID_184,
    CONFIG_ID_185,
    CONFIG_ID_186,
    CONFIG_ID_187,
    CONFIG_ID_188,
    CONFIG_ID_189,
    CONFIG_ID_190,
    CONFIG_ID_191,
    CONFIG_ID_192,
    CONFIG_ID_193,
    CONFIG_ID_194,
    CONFIG_ID_195,
    CONFIG_ID_196,
    CONFIG_ID_197,
    CONFIG_ID_198,
    CONFIG_ID_199,
    /*Default dis/connection tone melody volume level*/
    CONFIG_ID_CALL_TONE_VOLUME,
    /*Anti-Banding Frequency*/
    CONFIG_ID_CAM_ANTI_BANDING_FREQ,
    /*Default camera shutter volume level*/
    CONFIG_ID_CAMERA_SHUTTER_VOLUME,
    CONFIG_ID_203,
    CONFIG_ID_204,
    CONFIG_ID_205,
    CONFIG_ID_206,
    CONFIG_ID_207,
    CONFIG_ID_208,
    CONFIG_ID_209,
    CONFIG_ID_210,
    CONFIG_ID_211,
    CONFIG_ID_212,
    CONFIG_ID_213,
    CONFIG_ID_214,
    CONFIG_ID_215,
    CONFIG_ID_216,
    CONFIG_ID_217,
    CONFIG_ID_218,
    CONFIG_ID_219,
    CONFIG_ID_220,
    CONFIG_ID_221,
    CONFIG_ID_222,
    CONFIG_ID_223,
    CONFIG_ID_224,
    CONFIG_ID_225,
    CONFIG_ID_226,
    CONFIG_ID_227,
    CONFIG_ID_228,
    CONFIG_ID_229,
    CONFIG_ID_230,
    CONFIG_ID_231,
    CONFIG_ID_232,
    CONFIG_ID_233,
    /*ON: Turkish is supported*/
    CONFIG_ID_LANG_TURKISH ,
    /*ON: Greek is supported*/
    CONFIG_ID_LANG_GREEK ,
    /*ON: Norwegian supported*/
    CONFIG_ID_LANG_NORWEGIAN ,
    /*ON: Finnish supported*/
    CONFIG_ID_LANG_FINNISH ,
    /*ON: Danish supported*/
    CONFIG_ID_LANG_DANISH ,
    /*ON: Swedish supported*/
    CONFIG_ID_LANG_SWEDISH ,
    /*ON: Dutch supported*/
    CONFIG_ID_LANG_DUTCH ,
    /*ON: Hungarian supported*/
    CONFIG_ID_LANG_HUNGARIAN ,
    /*ON: Polish supported*/
    CONFIG_ID_LANG_POLISH,
    /*ON: Spanish supported*/
    CONFIG_ID_LANG_SPANISH,
    /*ON: Portuguese supported*/
    CONFIG_ID_LANG_PORTUGUESE,
    /*ON: Italian supported*/
    CONFIG_ID_LANG_ITALIAN,
    /*ON: French supported*/
    CONFIG_ID_LANG_FRENCH,
    /*ON: German supported*/
    CONFIG_ID_LANG_GERMAN,
    /*ON: Russian supported*/
    CONFIG_ID_LANG_RUSSIAN,
    /*ON: Arabic supported*/
    CONFIG_ID_LANG_ARABIC,
    /*ON: Vietnam supported*/
    CONFIG_ID_LANG_VIETNAM,
    /*ON: Thai supported*/
    CONFIG_ID_LANG_THAI,
    /*ON: Traditional Chinese Supported*/
    CONFIG_ID_LANG_TCHN,
    /*ON: Chinese supported*/
    CONFIG_ID_LANG_CHN,
    /*ON: English supported*/
    CONFIG_ID_LANG_ENGLISH,
    /*Number of Language*/
    CONFIG_ID_NUM_OF_LANGUAGE,
    /*dummy*/
    CONFIG_ID_END
} CONFIG_ID_ENUM_T;

/*
 * Following table is for 2 byte data type. 0xFFFF is not allowed
 */
typedef enum {
    /*dummy*/
    CONFIG_ID_WORD_BEGIN=CONFIG_MGR_WORD_START,
    /*MA sound play polling timer interval*/
    CONFIG_ID_MA_CALLBACK_TIMER,
    /*LCD VR Contrast setting register value*/
    CONFIG_ID_LCD_VR_CONTRAST,
    /*LCD DP Power control2 register value*/
    CONFIG_ID_LCD_DP_PWR_CTRL2,
    /*SMS class type define when sending SMS class 0,1,2,3 = 0,1,2,3 : unknown = 4, default = 1 */
    CONFIG_ID_SMS_CLASS_TYPE_ID,
    /*Comparison digit size of phone book number searching*/
    CONFIG_ID_PBOOK_NUMBER_MATCH_SIZE,
    CONFIG_ID_WORD_6,
    CONFIG_ID_WORD_7,
    CONFIG_ID_WORD_8,
    CONFIG_ID_WORD_9,
    CONFIG_ID_WORD_10,
    CONFIG_ID_WORD_11,
    CONFIG_ID_WORD_12,
    CONFIG_ID_WORD_13,
    CONFIG_ID_WORD_14,
    CONFIG_ID_WORD_15,
    CONFIG_ID_WORD_16,
    CONFIG_ID_WORD_17,
    CONFIG_ID_WORD_18,
    CONFIG_ID_WORD_19,
    CONFIG_ID_WORD_20,
    CONFIG_ID_WORD_21,
    CONFIG_ID_WORD_22,
    CONFIG_ID_WORD_23,
    CONFIG_ID_WORD_24,
    CONFIG_ID_WORD_25,
    CONFIG_ID_WORD_26,
    CONFIG_ID_WORD_27,
    CONFIG_ID_WORD_28,
    CONFIG_ID_WORD_29,
    CONFIG_ID_WORD_30,
    CONFIG_ID_WORD_31,
    CONFIG_ID_WORD_32,
    CONFIG_ID_WORD_33,
    CONFIG_ID_WORD_34,
    CONFIG_ID_WORD_35,
    CONFIG_ID_WORD_36,
    CONFIG_ID_WORD_37,
    CONFIG_ID_WORD_38,
    CONFIG_ID_WORD_39,
    CONFIG_ID_WORD_40,
    CONFIG_ID_WORD_41,
    CONFIG_ID_WORD_42,
    CONFIG_ID_WORD_43,
    CONFIG_ID_WORD_44,
    CONFIG_ID_WORD_45,
    CONFIG_ID_WORD_46,
    CONFIG_ID_WORD_47,
    CONFIG_ID_WORD_48,
    CONFIG_ID_WORD_49,
    CONFIG_ID_WORD_50,
    CONFIG_ID_WORD_51,
    CONFIG_ID_WORD_52,
    CONFIG_ID_WORD_53,
    CONFIG_ID_WORD_54,
    CONFIG_ID_WORD_55,
    CONFIG_ID_WORD_56,
    CONFIG_ID_WORD_57,
    CONFIG_ID_WORD_58,
    CONFIG_ID_WORD_59,
    CONFIG_ID_WORD_60,
    CONFIG_ID_WORD_61,
    CONFIG_ID_WORD_62,
    CONFIG_ID_WORD_63,
    CONFIG_ID_WORD_64,
    CONFIG_ID_WORD_65,
    CONFIG_ID_WORD_66,
    CONFIG_ID_WORD_67,
    CONFIG_ID_WORD_68,
    CONFIG_ID_WORD_69,
    CONFIG_ID_WORD_70,
    CONFIG_ID_WORD_71,
    CONFIG_ID_WORD_72,
    CONFIG_ID_WORD_73,
    CONFIG_ID_WORD_74,
    CONFIG_ID_WORD_75,
    CONFIG_ID_WORD_76,
    CONFIG_ID_WORD_77,
    CONFIG_ID_WORD_78,
    CONFIG_ID_WORD_79,
    CONFIG_ID_WORD_80,
    CONFIG_ID_WORD_81,
    CONFIG_ID_WORD_82,
    CONFIG_ID_WORD_83,
    CONFIG_ID_WORD_84,
    CONFIG_ID_WORD_85,
    CONFIG_ID_WORD_86,
    CONFIG_ID_WORD_87,
    CONFIG_ID_WORD_88,
    CONFIG_ID_WORD_89,
    CONFIG_ID_WORD_90,
    CONFIG_ID_WORD_91,
    CONFIG_ID_WORD_92,
    CONFIG_ID_WORD_93,
    CONFIG_ID_WORD_94,
    CONFIG_ID_WORD_95,
    CONFIG_ID_WORD_96,
    CONFIG_ID_WORD_97,
    CONFIG_ID_WORD_98,
    CONFIG_ID_WORD_99,
    CONFIG_ID_WORD_100,
    CONFIG_ID_WORD_101,
    CONFIG_ID_WORD_102,
    CONFIG_ID_WORD_103,
    CONFIG_ID_WORD_104,
    CONFIG_ID_WORD_105,
    CONFIG_ID_WORD_106,
    CONFIG_ID_WORD_107,
    CONFIG_ID_WORD_108,
    CONFIG_ID_WORD_109,
    CONFIG_ID_WORD_110,
    CONFIG_ID_WORD_111,
    CONFIG_ID_WORD_112,
    CONFIG_ID_WORD_113,
    CONFIG_ID_WORD_114,
    CONFIG_ID_WORD_115,
    CONFIG_ID_WORD_116,
    CONFIG_ID_WORD_117,
    CONFIG_ID_WORD_118,
    CONFIG_ID_WORD_119,
    CONFIG_ID_WORD_120,
    CONFIG_ID_WORD_121,
    CONFIG_ID_WORD_122,
    CONFIG_ID_WORD_123,
    CONFIG_ID_WORD_124,
    CONFIG_ID_WORD_125,
    CONFIG_ID_WORD_126,
    CONFIG_ID_WORD_127,
    /*dummy*/
    CONFIG_ID_WORD_END
} CONFIG_ID_WORD_ENUM_T;

/*
 * Following table is for 4 byte data type. 0xFFFFFFFF is not allowed
 */
typedef enum {
    /*dummy*/
    CONFIG_ID_DWORD_BEGIN=CONFIG_MGR_DWORD_START,
    CONFIG_ID_DWORD_1,
    CONFIG_ID_DWORD_2,
    CONFIG_ID_DWORD_3,
    CONFIG_ID_DWORD_4,
    CONFIG_ID_DWORD_5,
    CONFIG_ID_DWORD_6,
    CONFIG_ID_DWORD_7,
    CONFIG_ID_DWORD_8,
    CONFIG_ID_DWORD_9,
    CONFIG_ID_DWORD_10,
    CONFIG_ID_DWORD_11,
    CONFIG_ID_DWORD_12,
    CONFIG_ID_DWORD_13,
    CONFIG_ID_DWORD_14,
    CONFIG_ID_DWORD_15,
    CONFIG_ID_DWORD_16,
    CONFIG_ID_DWORD_17,
    CONFIG_ID_DWORD_18,
    CONFIG_ID_DWORD_19,
    CONFIG_ID_DWORD_20,
    CONFIG_ID_DWORD_21,
    CONFIG_ID_DWORD_22,
    CONFIG_ID_DWORD_23,
    CONFIG_ID_DWORD_24,
    CONFIG_ID_DWORD_25,
    CONFIG_ID_DWORD_26,
    CONFIG_ID_DWORD_27,
    CONFIG_ID_DWORD_28,
    CONFIG_ID_DWORD_29,
    CONFIG_ID_DWORD_30,
    CONFIG_ID_DWORD_31,
    CONFIG_ID_DWORD_32,
    CONFIG_ID_DWORD_33,
    CONFIG_ID_DWORD_34,
    CONFIG_ID_DWORD_35,
    CONFIG_ID_DWORD_36,
    CONFIG_ID_DWORD_37,
    CONFIG_ID_DWORD_38,
    CONFIG_ID_DWORD_39,
    CONFIG_ID_DWORD_40,
    CONFIG_ID_DWORD_41,
    CONFIG_ID_DWORD_42,
    CONFIG_ID_DWORD_43,
    CONFIG_ID_DWORD_44,
    CONFIG_ID_DWORD_45,
    CONFIG_ID_DWORD_46,
    CONFIG_ID_DWORD_47,
    CONFIG_ID_DWORD_48,
    CONFIG_ID_DWORD_49,
    CONFIG_ID_DWORD_50,
    CONFIG_ID_DWORD_51,
    CONFIG_ID_DWORD_52,
    CONFIG_ID_DWORD_53,
    CONFIG_ID_DWORD_54,
    CONFIG_ID_DWORD_55,
    CONFIG_ID_DWORD_56,
    CONFIG_ID_DWORD_57,
    CONFIG_ID_DWORD_58,
    CONFIG_ID_DWORD_59,
    CONFIG_ID_DWORD_60,
    CONFIG_ID_DWORD_61,
    CONFIG_ID_DWORD_62,
    CONFIG_ID_DWORD_63,
    /*dummy*/
    CONFIG_ID_DWORD_END
} CONFIG_ID_DWORD_ENUM_T;

/*==================================================================================================
    DATA STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
    GLOBAL VARIABLES DECLARATIONS
==================================================================================================*/

/*==================================================================================================
    FUNCTION PROTOTYPES
==================================================================================================*/

/*================================================================================================*/
#endif /* end of CONFIG_TABLE_H */
