#pragma once

#include <cstdint>



enum AnimCamAmountChangeReson {
	AnimCamChangeReasonUndefined,
	AnimCamChangeReasonInCutScene,
	AnimCamChangeReasonWeaponFiring,
	AnimCamChangeReasonInWheelChair, //! we need that to prevent issues reported on nexus comment
	AnimCamChangeReasonMIDNIGHT_LIMITVIEW_NARROW,
	AnimCamChangeReasonHeadbobVal
};


enum weaponAmmoFlags_t : __int32{
	WEAPONAMMO_NONE = 0,
	WEAPONAMMO_VISIBLE = 1,
	WEAPONAMMO_LOWCLIP = 2,
	WEAPONAMMO_LOWPOCKET = 4,
	WEAPONAMMO_HASNOWPNRES = 8,
	WEAPONAMMO_INSUFFAMMO = 16,
	WEAPONAMMO_BARAMMOLKW = 32,
	WEAPONAMMO_BARAMMODKW = 64,
	WEAPONAMMO_DUALAMMO = 128,
	WEAPONAMMO_ONLYSHOWCLIP = 256,
	WEAPONAMMO_CHANGEAMMO = 512,
	WEAPONAMMO_SECFIREPOPULATELEFT = 1024,
};






enum usercmdButton_t {
	BUTTON_ATTACK1 = 1,
	BUTTON_ZOOM = 2,
	BUTTON_MELEE = 4,
	BUTTON_USE = 8,
	BUTTON_RELOAD = 16,
	BUTTON_USE_AND_RELOAD = 32,
	BUTTON_QGRENADE = 128,
	BUTTON_WPNSEL = 256,
	BUTTON_QGRENADE_AND_WPNSEL = 512,
	BUTTON_SPRINT = 64,
	BUTTON_WEAP_PREV_EQUIP = 1024,
	BUTTON_WEAP_NEXT = 2048,
	BUTTON_WEAP_PREV = 4096,
	BUTTON_WEAP_FUNC_LEFT = 8192,
	BUTTON_WEAP_0 = 16384,
	BUTTON_WEAP_1 = 32768,
	BUTTON_WEAP_2 = 65536,
	BUTTON_WEAP_3 = 131072,
	BUTTON_WEAP_4 = 262144,
	BUTTON_WEAP_5 = 524288,
	BUTTON_WEAP_TOGGLE_UPGRADE_LEFT = 1048576,
	BUTTON_WEAP_TOGGLE_UPGRADE_RIGHT = 2097152,
	BUTTON_COVERMODE = 4194304,
	BUTTON_WALK = 8388608,
	BUTTON_TOGGLEDW = 16777216,
	BUTTON_INVENTORY = 33554432,
	BUTTON_MOVEUP = 67108864,
	BUTTON_MOVEDOWN = 134217728,
	BUTTON_HINT = 268435456,
	BUTTON_ANY = -1
};





enum lightType_t : int32_t {
	LIGHT_POINT = 0,
	LIGHT_SPOT = 1,
	LIGHT_PARALLEL = 2,
	LIGHT_PROBE = 3,
	LIGHT_AREA = 4,
	LIGHT_SCATTERING = 5,
	LIGHT_MAX_TYPES = 6
};



enum crosshairInfoIconState_t : __int32 {
	//CROSSHAIRINFOICON_K_UNDEFINED = -1,
	CROSSHAIRINFOICON_NONE = 0,
	CROSSHAIRINFOICON_SHOW = 1,
	CROSSHAIRINFOICON_NORMALCOLOR = 2,
	CROSSHAIRINFOICON_NEGATIVECOLOR = 4,
	CROSSHAIRINFOICON_SUBDUEDTEXTCOLOR = 8,
	CROSSHAIRINFOICON_CANTUSE = 16,
	CROSSHAIRINFOICON_TEXT = 32,
	CROSSHAIRINFOICON_HEALTH = 64,
	CROSSHAIRINFOICON_AMMO = 128,
	CROSSHAIRINFOICON_ARMOR = 256,
	CROSSHAIRINFOICON_BATTERY = 512,
	CROSSHAIRINFOICON_WEAPON = 1024,
	CROSSHAIRINFOICON_SINGLE = 2048, // the lever interact btn is 2048 but so is the nade box.
	CROSSHAIRINFOICON_CONT = 4096,
	CROSSHAIRINFOICON_MAXED = 8192,
	CROSSHAIRINFOICON_NOTMAXED = 16384,
	CROSSHAIRINFOICON_ONEVALID = 32768,
};


enum spriteAlignmentType_t: __int32 {
	ALIGNMENTTYPE_FULLSCREEN = 0,
	ALIGNMENTTYPE_TOP_LEFT = 1,
	ALIGNMENTTYPE_TOP = 2,
	ALIGNMENTTYPE_TOP_RIGHT = 3,
	ALIGNMENTTYPE_LEFT = 4,
	ALIGNMENTTYPE_CENTER = 5,
	ALIGNMENTTYPE_RIGHT = 6,
	ALIGNMENTTYPE_BOTTOM_LEFT = 7,
	ALIGNMENTTYPE_BOTTOM = 8,
	ALIGNMENTTYPE_BOTTOM_RIGHT = 9,
	ALIGNMENTTYPE_ABS_TOP_LEFT = 10,
	ALIGNMENTTYPE_ABS_TOP = 11,
	ALIGNMENTTYPE_ABS_TOP_RIGHT = 12,
	ALIGNMENTTYPE_ABS_LEFT = 13,
	ALIGNMENTTYPE_ABS_RIGHT = 14,
	ALIGNMENTTYPE_ABS_BOTTOM_LEFT = 15,
	ALIGNMENTTYPE_ABS_BOTTOM = 16,
	ALIGNMENTTYPE_ABS_BOTTOM_RIGHT = 17,
	ALIGNMENTTYPE_ABS_CENTER = 18,
	ALIGNMENTTYPE_COUNT = 19,
};


enum swfDictType_t : __int32 {
	SWF_DICT_NULL = 0,
	SWF_DICT_IMAGE = 1,
	SWF_DICT_SHAPE = 2,
	SWF_DICT_MORPH = 3,
	SWF_DICT_SPRITE = 4,
	SWF_DICT_FONT = 5,
	SWF_DICT_TEXT = 6,
	SWF_DICT_EDITTEXT = 7,
	NUM_DICT_TYPES = 8,
};



enum playerType_t {
	PLAYERTYPE_CAMPAIGN = 0,
	PLAYERTYPE_FC1 = 1,
	PLAYERTYPE_FC2 = 2,
	PLAYERTYPE_FC3 = 3
};


enum idPlayer_playerUseState_t {
	USE_STATE_NONE = 0,
	USE_STATE_WAITING_FOR_RELOAD_OR_USE = 1,
	USE_STATE_CONTINUALLY_USING = 2,
	USE_STATE_WAITING_FOR_FINISH_FOCUS = 3,
	USE_STATE_WAITING_FOR_RELOAD = 4,
	USE_STATE_WAITING_FOR_USE_RELEASE = 5,
	USE_STATE_PICKUP_OR_EQUIP = 6
};


enum gameState_t {
	GAMESTATE_UNINITIALIZED = 0,
	GAMESTATE_NOMAP = 1,
	GAMESTATE_STARTUP = 2,
	GAMESTATE_ACTIVE = 3,
	GAMESTATE_PLAYVIDEO = 4,
	GAMESTATE_SHUTDOWN = 5,
	GAMESTATE_RESETDEMOSTATE = 6
};


enum movementMode_t {
	MOVEMENT_MODE_STANDING = 0, //! this is not just standing this is true when running, walking, firing while up...
	MOVEMENT_MODE_CROUCHED = 1,
	MOVEMENT_MODE_WANDERER = 2,
	MOVEMENT_MODE_GROUNDCOMBAT = 3, //! this is basically being forced prone. this is not actual "ground combat"
	MOVEMENT_MODE_CRAWLSPACE = 4,
	MOVEMENT_MODE_ACTIVATION = 5,
	MOVEMENT_MODE_ACTIVATION_EXIT = 6,
	MOVEMENT_MODE_JUMPING_OVER_STUFF = 7,
	MOVEMENT_MODE_PRONE = 8,
	MOVEMENT_MODE_LADDER = 9,
	MOVEMENT_MODE_MIDNIGHT_LIMITVIEW_NARROW = 10,
	MOVEMENT_MODE_MIDNIGHT_LIMITVIEW_WIDE = 11,
	MOVEMENT_MODE_MIDNIGHT_TAKEDOWN = 12,
	MOVEMENT_MODE_WARTABLE = 13,
	MOVEMENT_MODE_MIDNIGHT_KAMPFHUND_CLINCH = 14,
	MOVEMENT_MODE_PLAYERCONTROLLED = 15,
	MOVEMENT_MODE_SWIMMING_UNDER_SURFACE = 16,
	MOVEMENT_MODE_SPRINT_SLIDE = 17,
	MOVEMENT_MODE_WHEELCHAIR = 18,
	MOVEMENT_MODE_WHEELCHAIR_ARMED = 19,
	MOVEMENT_MODE_FIRE_EXTINGUISHER = 20,
	MOVEMENT_MODE_HEAD_IN_A_JAR = 21,
	MOVEMENT_MODE_TURRET = 22,
	MOVEMENT_MODE_PERISCOPE = 23,
	MOVEMENT_MODE_GROUND_POUND = 24,
	MOVEMENT_MODE_LEVER = 25,
	MOVEMENT_MODE_MIDNIGHT_TAKEDOWN_WHEELCHAIR = 26,
	MOVEMENT_MODE_SWIMMING_ON_SURFACE = 27,
	MOVEMENT_MODE_NUM = 28
};


enum idPlayer_animSysNodeFlags_t: unsigned long long{
	NODEFLAG_NONE = 0,
	NODEFLAG_SKIPFINGERMOVEMENT = 1,
	NODEFLAG_SIDESTEPPING = 2,
	NODEFLAG_EQUIPPING_RIGHT = 4,
	NODEFLAG_EQUIPPING_LEFT = 8,
	NODEFLAG_UNEQUIPPING_RIGHT = 16,
	NODEFLAG_UNEQUIPPING_LEFT = 32,
	NODEFLAG_RELOADING_RIGHT = 64,
	NODEFLAG_RELOADING_LEFT = 128,
	NODEFLAG_NO_AIM_IK_RIGHT = 256,
	NODEFLAG_NO_AIM_IK_LEFT = 512,
	NODEFLAG_NO_WEAPONPOS_MOD_RIGHT = 1024,
	NODEFLAG_NO_WEAPONPOS_MOD_LEFT = 2048,
	NODEFLAG_RIGHT_ADD_LAYER_ON_LEFT = 4096,
	NODEFLAG_LEFT_ADD_LAYER_ON_RIGHT = 8192,
	NODEFLAG_ATTACHTAG_OVERRIDE_RIGHT = 16384,
	NODEFLAG_ATTACHTAG_OVERRIDE_LEFT = 32768,
	NODEFLAG_MELEEATTACKING = 65536,
	NODEFLAG_DISABLEHANDIK = 131072,
	NODEFLAG_DISABLELEGIK = 262144,
	NODEFLAG_DISABLECONTROLS = 524288,
	NODEFLAG_ENTERING_GROUNDCOMBAT = 1048576,
	NODEFLAG_EXITING_GROUNDCOMBAT = 2097152,
	NODEFLAG_BLOCK_MOVEMENTANIMS = 4194304,
	NODEFLAG_DISABLE_WEAPONREFJOINT_CORRECTION = 8388608,
	NODEFLAG_DISABLE_MATCH_WEAPON_WITH_MOVESET = 16777216,
	NODEFLAG_RAMMBOCK_IMPACT = 33554432,
	NODEFLAG_GROUNDPOUND = 67108864,
	NODEFLAG_BLOCK_ZOOM = 134217728,
	NODEFLAG_LEVER_IDLE = 268435456,
	NODEFLAG_DISABLE_SPECIAL_ATTACKS = 536870912,
	NODEFLAG_IS_CLIMBING = 1073741824,
	NODEFLAG_THROWING = 2147483648,
	NODEFLAG_DISABLE_FIRING = 4294967296,
	NODEFLAG_LADDER_IS_SLIDING = 8589934592,
	NODEFLAG_HEAVY_WEAPON_SPINNING = 17179869184,
	NODEFLAG_FIRING_WEAPON = 34359738368,
	NODEFLAG_TAMPERING = 68719476736,
	NODEFLAG_HURT = 137438953472,
	NODEFLAG_DISABLEHANDIK_LEFT = 274877906944,
	NODEFLAG_DISABLEHANDIK_RIGHT = 549755813888,
	NODEFLAG_PRONE_RIGHT_HAND_FORWARD = 1099511627776,
	NODEFLAG_BLOCK_PLAYER_USE = 2199023255552,
	NODEFLAG_IS_ENTERING_PRONE = 4398046511104,
	NODEFLAG_WEAPON_INTRO_ANIM = 8796093022208,
	NODEFLAG_REVERSING = 17592186044416,
	NODEFLAG_REVERSINGSTART = 35184372088832,
	NODEFLAG_ACTIVATING_WANDERER = 70368744177664,
	NODEFLAG_DEACTIVATING_WANDERER = 140737488355328,
	NODEFLAG_IN_ACTIVATION_STATE = 281474976710656,
	NODEFLAG_DISABLE_CROUCH = 562949953421312,
	NODEFLAG_DISABLE_JUMP = 1125899906842624,
	NODEFLAG_BLOCK_LEAN = 2251799813685248,
	NODEFLAG_BLOCK_WORLDMARKERS = 4503599627370496
};

enum shellScreen_t : __int32 {
	SHELL_SCREEN_START = 0,
	SHELL_SCREEN_ROOT = 1,
	SHELL_SCREEN_PAUSE = 2,
	SHELL_SCREEN_DEV = 3,
	SHELL_SCREEN_TIMELINE = 4,
	SHELL_SCREEN_MAP_GROUPS = 5,
	SHELL_SCREEN_MAP_GROUP_BROWSER = 6,
	SHELL_SCREEN_MAP_LAYERS = 7,
	SHELL_SCREEN_SAS = 8,
	SHELL_SCREEN_CHALLENGE_LEADERBOARDS = 9,
	SHELL_SCREEN_EXTRAS = 10,
	SHELL_SCREEN_PROGRESSION_SLOT = 11,
	SHELL_SCREEN_BINKREPLAY = 12,
	SHELL_SCREEN_CREDITS = 13,
	SHELL_SCREEN_STATISTICS = 14,
	SHELL_SCREEN_COLLECTABLES = 15,
	SHELL_SCREEN_COMBAT_SIM = 16,
	SHELL_SCREEN_EMPTY_DUMMY = 17,
	SHELL_SCREEN_ANNOUNCEMENTS = 18,
	SHELL_SCREEN_BNET_LOGIN_CREATE = 19,
	SHELL_SCREEN_SETTINGS = 20,
	SHELL_SCREEN_CONTROLS = 21,
	SHELL_SCREEN_GAMEPAD = 22,
	SHELL_SCREEN_GAMEPLAY_SETTINGS = 23,
	SHELL_SCREEN_VIDEO_SETTINGS = 24,
	SHELL_SCREEN_AUDIO = 25,
	SHELL_SCREEN_KEYBOARD = 26,
	SHELL_SCREEN_RESOLUTION = 27,
	SHELL_SCREEN_PC_CONTROLS = 28,
	SHELL_SCREEN_BRIGHTNESS = 29,
	SHELL_SCREEN_DIFFICULTY = 30,
	SHELL_SCREEN_LOAD_GAME = 31,
	SHELL_SCREEN_LOAD_GAME_FROM_DEATH = 32,
	SHELL_SCREEN_SAVE_GAME = 33,
	SHELL_SCREEN_SNAPMAP_MAIN = 34,
	SHELL_SCREEN_CHRONICLES = 35,
	SHELL_SCREEN_CHRONICLE_VOLUMES = 36,
	SHELL_SCREEN_STOREFRONT = 37,
	SHELL_SCREEN_GAMESTARTS = 38,
	SHELL_SCREEN_MODESELECT = 39,
	NUM_SHELL_SCREENS = 40,
};


enum idPlayerHud_hudState_t {
	HUDSTATE_NONE = 0,
	HUDSTATE_WEAPON_SELECT = 1,
	HUDSTATE_INCAPACITATED = 2,
	HUDSTATE_COMBAT = 3,
	HUDSTATE_TURRET = 4,
	HUDSTATE_INFO = 5,
	HUDSTATE_ALL = 6,
	HUDSTATE_CINEMATIC = 7,
};
