#if defined(__cplusplus)
extern "C" {
#endif

void LoadLanguage       ( char * RegLocation );
void CreateLangList     ( HMENU hMenu, int uPosition, int MenuID );
void SelectLangMenuItem ( HMENU hMenu, int LangMenuID );
char * GS               ( int StringID );

#if defined(__cplusplus)
}
#endif

/*********************************************************************************
* Meta Information                                                               *
*********************************************************************************/
#define LANGUAGE_NAME	                1
#define LANGUAGE_AUTHOR	                2
#define LANGUAGE_VERSION                3
#define LANGUAGE_DATE	                4
#define INI_CURRENT_LANG                5
#define INI_AUTHOR		        6
#define INI_VERSION		        7
#define INI_DATE		        8
#define INI_HOMEPAGE	                9
#define INI_CURRENT_RDB                 10
#define INI_CURRENT_CHT                 11
#define INI_CURRENT_RDX                 12

// Menu
#define MENU_FILE			13
	#define MENU_OPEN		14
	#define MENU_ROM_INFO		15
	#define MENU_START		16
	#define MENU_END		17
	#define MENU_CHOOSE_ROM		18
	#define MENU_REFRESH		19
	#define MENU_RECENT_ROM		20
	#define MENU_RECENT_DIR		21
	#define MENU_EXIT		22

	#define MENU_SYSTEM		23
	#define MENU_RESET		24
	#define MENU_PAUSE		25
        #define MENU_BITMAP             26
	#define MENU_LIMIT_FPS		27
	#define MENU_SAVE		28
	#define MENU_SAVE_AS		29
	#define MENU_RESTORE		30
	#define MENU_LOAD		31
	#define MENU_CURRENT_SAVE	32
	#define MENU_CHEAT		33
	#define MENU_GS_BUTTON		34
	#define MENU_RESUME		35

#define MENU_OPTIONS			36
	#define MENU_FULL_SCREEN	37
	#define MENU_ON_TOP		38
	#define MENU_CONFIG_GFX		39
	#define MENU_CONFIG_AUDIO	40
	#define MENU_CONFIG_CTRL	41
	#define MENU_CONFIG_RSP		42
	#define MENU_SETTINGS		43

#define MENU_LANGUAGE			44

#define MENU_HELP			45
	#define MENU_USER_GUIDE		46
	#define MENU_ABOUT_INI		47
	#define MENU_GITHUB		48
	#define MENU_UNINSTALL		49

// Menu Descriptions
#define MENUDES_OPEN			50
#define MENUDES_ROM_INFO		51
#define MENUDES_START			52
#define MENUDES_END			53
#define MENUDES_CHOOSE_ROM		54
#define MENUDES_REFRESH			55
#define MENUDES_EXIT			56
#define MENUDES_RESET			57
#define MENUDES_PAUSE			58
#define MENUDES_BITMAP                  59
#define MENUDES_LIMIT_FPS		60
#define MENUDES_SAVE			61
#define MENUDES_SAVE_AS			62
#define MENUDES_RESTORE			63
#define MENUDES_LOAD			64
#define MENUDES_CHEAT			65
#define MENUDES_GS_BUTTON		66
#define MENUDES_FULL_SCREEN		67
#define MENUDES_ON_TOP			68
#define MENUDES_CONFIG_GFX		69
#define MENUDES_CONFIG_AUDIO		70
#define MENUDES_CONFIG_CTRL		71
#define MENUDES_CONFIG_RSP		72
#define MENUDES_SETTINGS		73
#define MENUDES_USER_GUIDE		74
#define MENUDES_ABOUT_INI		75
#define MENUDES_RECENT_ROM		76
#define MENUDES_RECENT_DIR		77
#define MENUDES_LANGUAGES		78
#define MENUDES_GAME_SLOT		79
#define MENUDES_GAME_SETTINGS	        80
#define MENUDES_GAME_CHEATS		81
#define MENUDES_UNINSTALLAPP            82
#define MENUDES_GITHUB	                83

/*********************************************************************************
* Rom Browser                                                                    *
*********************************************************************************/
//Rom Browser Fields
#define RB_FILENAME			84
#define RB_INTERNALNAME			85
#define RB_GAMENAME			86
#define RB_STATUS			87
#define RB_ROMSIZE			88
#define RB_NOTES_CORE			89
#define RB_NOTES_PLUGIN			90
#define RB_CART_ID			91
#define RB_MANUFACTURER			92
#define RB_COUNTRY			93
#define RB_DEVELOPER			94
#define RB_CRC1				95
#define RB_CRC2				96
#define RB_CICCHIP			97
#define RB_RELEASE_DATE			98
#define RB_GENRE			99
#define RB_PLAYERS			100
#define RB_FORCE_FEEDBACK		101
#define SELECT_ROM_DIR			102

//Messages
#define RB_NOT_IN_RDB		        103
#define RB_HACK                         104

/*********************************************************************************
* Options                                                                        *
*********************************************************************************/
//Tabs
#define TAB_PLUGIN			105
#define TAB_DIRECTORY			106
#define TAB_ROMSELECTION		107
#define TAB_ADVANCED			108
#define TAB_ROMSETTINGS			109
#define TAB_SHELLINTERGATION	        110
#define TAB_ROMNOTES			111

//Plugin Dialog
#define PLUG_ABOUT			112
#define PLUG_RSP			113
#define PLUG_GFX			114
#define PLUG_AUDIO			115
#define PLUG_CTRL			116

//Directory Dialog
#define DIR_ROM				117
#define DIR_AUTO_SAVE			118
#define DIR_INSTANT_SAVE		119
#define DIR_SCREEN_SHOT                 120
#define DIR_ROM_DEFAULT			121
#define DIR_SELECT_ROM			122
#define DIR_SELECT_AUTO			123
#define DIR_SELECT_INSTANT		124
#define DIR_SELECT_SCREEN               125

//Options (general) Tab
#define OPTION_AUTO_SLEEP		126
#define OPTION_AUTO_FULLSCREEN	        127
#define OPTION_BASIC_MODE		128
#define OPTION_REMEMBER_CHEAT	        129

//Rom Browser Tab
#define RB_MAX_ROMS			130
#define RB_ROMS				131
#define RB_MAX_DIRS			132
#define RB_DIRS				133
#define RB_USE				134
#define RB_DIR_RECURSION		135
#define RB_AVAILABLE_FIELDS		136
#define RB_SHOW_FIELDS			137
#define RB_ADD				138
#define RB_REMOVE			139
#define RB_UP				140
#define RB_DOWN				141

//Advanced Options
#define ADVANCE_INFO			142
#define ADVANCE_DEFAULTS		143
#define ADVANCE_AUTO_START		144
#define ADVANCE_OVERWRITE		145

//Rom Options
#define ROM_CPU_STYLE			146
#define ROM_SMCM			147
#define ROM_MEM_SIZE			148
#define ROM_ABL				149
#define ROM_SAVE_TYPE			150
#define ROM_COUNTER_FACTOR		151
#define ROM_LARGE_BUFFER		152
#define ROM_USE_TLB			153
#define ROM_REG_CACHE			154
#define ROM_DELAY_SI			155
#define ROM_SP_HACK			156
#define ROM_DEFAULT			157
#define ROM_AUDIO_SIGNAL		158
#define ROM_DELAY_RDP			159
#define ROM_DELAY_RSP			160
#define ROM_EMULATE_AI                  161

//Core Styles
#define CORE_INTERPRETER		162
#define CORE_RECOMPILER			163

//RDRAM Size
#define RDRAM_4MB			164
#define RDRAM_8MB			165

//Core Styles
#define SMCM_NONE			166
#define SMCM_CACHE			167
#define SMCM_PROECTED			168
#define SMCM_CHECK_MEM			169
#define SMCM_CHANGE_MEM			170
#define SMCM_CHECK_ADV			171

//Advanced Block Linking
#define ABL_ON				172
#define ABL_OFF				173

//Save Type
#define SAVE_FIRST_USED			174
#define SAVE_4K_eepROM			175
#define SAVE_16K_eepROM			176
#define SAVE_SRAM			177
#define SAVE_FlashRAM			178

//Shell Intergration Tab
#define SHELL_TEXT			179

//Rom Notes
#define NOTE_STATUS			180
#define NOTE_CORE			181
#define NOTE_PLUGIN			182

/*********************************************************************************
* ROM Information                                                                *
*********************************************************************************/
//Rom Info Title Title
#define INFO_TITLE			183

//Rom Info Text
#define INFO_ROM_NAME_TEXT		184
#define INFO_FILE_NAME_TEXT		185
#define INFO_LOCATION_TEXT		186
#define INFO_SIZE_TEXT			187
#define INFO_CART_ID_TEXT		188
#define INFO_MANUFACTURER_TEXT	        189
#define INFO_COUNTRY_TEXT		190
#define INFO_CRC1_TEXT			191
#define INFO_CRC2_TEXT			192
#define INFO_CIC_CHIP_TEXT		193

/*********************************************************************************
* Cheats                                                                         *
*********************************************************************************/
//Cheat List
#define CHEAT_LIST_FRAME		194
#define CHEAT_NOTES_FRAME		195
#define CHEAT_MARK_NONE			196

//Add Cheat
#define CHEAT_ADDCHEAT_NAME		197
#define CHEAT_ADDCHEAT_CODE		198
#define CHEAT_ADDCHEAT_NOTES	        199
#define CHEAT_ADDCHEAT_ADD 		200
#define CHEAT_ADDCHEAT_NEW 		201
#define CHEAT_ADDCHEAT_CODEDES 	        202
#define CHEAT_ADDCHEAT_OPT 		203
#define CHEAT_ADDCHEAT_OPTDES 	        204

//Code extension
#define CHEAT_CODE_EXT_TITLE	        205
#define CHEAT_CODE_EXT_TXT		206

//Edit Cheat
#define CHEAT_EDITCHEAT_WINDOW	        207
#define CHEAT_EDITCHEAT_UPDATE	        208

//Cheat Popup Menu
#define CHEAT_ADDNEW			209
#define CHEAT_EDIT			210
#define CHEAT_DELETE			211

/*********************************************************************************
* Messages                                                                       *
*********************************************************************************/
#define MSG_CPU_PAUSED			212
#define MSG_CPU_RESUMED			213
#define MSG_PERM_LOOP                   214
#define MSG_MEM_ALLOC_ERROR             215
#define MSG_FAIL_INIT_GFX               216
#define MSG_FAIL_INIT_AUDIO             217
#define MSG_FAIL_INIT_RSP               218
#define MSG_FAIL_INIT_CONTROL           219
#define MSG_FAIL_LOAD_PLUGIN            220
#define MSG_FAIL_LOAD_WORD              221
#define MSG_FAIL_OPEN_SAVE              222
#define MSG_FAIL_OPEN_FLASH             223
#define MSG_FAIL_OPEN_MEMPAK            224
#define MSG_FAIL_OPEN_ZIP               225
#define MSG_FAIL_OPEN_IMAGE             226
#define MSG_FAIL_ZIP                    227
#define MSG_FAIL_IMAGE                  228
#define MSG_UNKNOWN_COUNTRY             229
#define MSG_UNKNOWN_FILE_FORMAT         230
#define MSG_UNKNOWN_MEM_ACTION          231
#define MSG_UNHANDLED_OP                232
#define MSG_UNHANDLED_OP_IDEAS          233
#define MSG_NONMAPPED_SPACE             234
#define MSG_MSGBOX_TITLE                235
#define MSG_PIF2_ERROR                  236
#define MSG_PIF2_TITLE                  237
#define MSG_EMULATION_STARTED           238
#define MSG_UNABLED_LOAD_STATE          239
#define MSG_EMULATION_ENDED             240
#define MSG_PLUGIN_NOT_INIT             241
#define MSG_CHEAT_NAME_IN_USE           242
#define MSG_MAX_CHEATS                  243
#define MSG_DELETE_SETTINGS_FAILED      244
#define MSG_CONFIRMATION_UNINSTALL      245
#define MSG_PLUGIN_HOT_SWAP             246
#define PLUG_HOT_SWAP_DOUBLE            247
#define HOT_SWAP_COMPLETE               248
#define FULLSCREEN_TOGGLE               249
#define GS_PRESS                        250
#define NUMBER_1		        251
#define NUMBER_2		        252
#define NUMBER_3		        253
#define NUMBER_4		        254
#define NUMBER_5		        255
#define NUMBER_6		        256