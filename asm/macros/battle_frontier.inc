	@ TODO:
    @ Add macro comments
    @ Split into individual files
    @ Enforce tab spacing
    @ Standardize Func->Function

    @ Frontier Util

	.macro frontier_getstatus
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_STATUS
	special CallFrontierUtilFunc
	.endm

    .macro frontier_get data:req
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_DATA
    setvar VAR_0x8005, \data
    special CallFrontierUtilFunc
    .endm

	.macro frontier_set data:req, val=0xFFFF
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
	setvar VAR_0x8005, \data
	.if \val == 0xFFFF
	@ no value provided
	.elseif \val >= VARS_START
	copyvar VAR_0x8006, \val
	.else
	setvar VAR_0x8006, \val
	.endif
	special CallFrontierUtilFunc
	.endm

	.macro frontier_setpartyorder partySize:req
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
	setvar VAR_0x8005, \partySize
	special CallFrontierUtilFunc
	.endm

	.macro frontier_reset
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SOFT_RESET
	special CallFrontierUtilFunc
	.endm

	.macro frontier_settrainers
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_TRAINERS
	special CallFrontierUtilFunc
	.endm

    .macro frontier_saveparty
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
    special CallFrontierUtilFunc
    .endm

	@ Facilities with only 1 mode dont provide the mode argument
	.macro frontier_results facility:req, mode=0xFF
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_RESULTS_WINDOW
	setvar VAR_0x8005, \facility
	.if \mode != 0xFF
	setvar VAR_0x8006, \mode
	.endif
	special CallFrontierUtilFunc
	.endm

    .macro frontier_checkairshow
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_CHECK_AIR_TV_SHOW
    special CallFrontierUtilFunc
    .endm

	.macro frontier_getbrainstatus
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_BRAIN_STATUS
	special CallFrontierUtilFunc
	.endm

    .macro frontier_isbrain
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_IS_BRAIN
    special CallFrontierUtilFunc
    .endm

    .macro frontier_givepoints
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GIVE_BATTLE_POINTS
    special CallFrontierUtilFunc
    .endm

    .macro frontier_getsymbols
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_FACILITY_SYMBOLS
    special CallFrontierUtilFunc
    .endm

    .macro frontier_givesymbol
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GIVE_FACILITY_SYMBOL
    special CallFrontierUtilFunc
    .endm

    .macro frontier_isbattletype battleType:req
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_CHECK_BATTLE_TYPE
    setvar VAR_0x8005, \battleType
    special CallFrontierUtilFunc
    .endm

    .macro frontier_checkineligible
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_CHECK_INELIGIBLE
    special CallFrontierUtilFunc
    .endm

    @ Validates the visiting E-Reader trainer. 0 if valid, 1 if not
    .macro frontier_checkvisittrainer
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_CHECK_VISIT_TRAINER
    special CallFrontierUtilFunc
    .endm

    .macro frontier_incrementstreak
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_INCREMENT_STREAK
    special CallFrontierUtilFunc
    .endm

    .macro frontier_restorehelditems
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_RESTORE_HELD_ITEMS
    special CallFrontierUtilFunc
    .endm

    .macro frontier_savebattle
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_BATTLE
    special CallFrontierUtilFunc
    .endm

    .macro frontier_gettrainername stringVar:req
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_BUFFER_TRAINER_NAME
    setvar VAR_0x8005, \stringVar
    special CallFrontierUtilFunc
    .endm

	.macro frontier_resetsketch
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_RESET_SKETCH_MOVES
	special CallFrontierUtilFunc
	.endm

    .macro frontier_setbrainobj
    setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_BRAIN_OBJECT
    special CallFrontierUtilFunc
    .endm


	@ Battle Tower

	.macro battletower_getstreak
	setvar VAR_0x8004, BATTLE_TOWER_FUNC_1
	setvar VAR_0x8005, 1
	special CallBattleTowerFunc
	.endm


	@ Battle Dome


	@ Battle Palace


	@ Battle Arena


	@ Battle Factory


	@ Battle Pike

	.macro battlepike_getstreak
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_GET_DATA
	setvar VAR_0x8005, 1
	special CallBattlePikeFunction
	.endm

	.macro battlepike_setstreak streak:req
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_SET_DATA
	setvar VAR_0x8005, 1
	.if \streak >= VARS_START
	copyvar VAR_0x8006, \streak
	.else
	setvar VAR_0x8006, \streak
	.endif
	special CallBattlePikeFunction
	.endm

	.macro battlepike_isfinalroom
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_IS_FINAL_ROOM
	special CallBattlePikeFunction
	.endm

	.macro battlepike_setroomobjects
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_SET_ROOM_OBJECTS
	special CallBattlePikeFunction
	.endm

	.macro battlepike_getroomtype
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_GET_ROOM_TYPE
	special CallBattlePikeFunction
	.endm

	.macro battlepike_setnextroom
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_SET_ROOM_TYPE
	special CallBattlePikeFunction
	.endm

	.macro battlepike_gethint
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_GET_ROOM_TYPE_HINT
	special CallBattlePikeFunction
	.endm

	.macro battlepike_nohealing set:req
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_SET_HEALING_ROOMS_DISABLED
	setvar VAR_0x8005, \set
	special CallBattlePikeFunction
	.endm

	.macro battlepike_ispartyfullhealth
	setvar VAR_0x8004, BATTLE_PIKE_FUNC_IS_PARTY_FULL_HEALTH
	special CallBattlePikeFunction
	.endm


	@ Battle Pyramid


	@ Battle Tent


	@ Trainer Hill

	.macro trainerhill_start
	setvar VAR_0x8004, TRAINER_HILL_FUNC_START
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_getownerstate
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_OWNER_STATE
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_giveprize
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GIVE_PRIZE
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_finaltime
	setvar VAR_0x8004, TRAINER_HILL_FUNC_CHECK_FINAL_TIME
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_resumetimer
	setvar VAR_0x8004, TRAINER_HILL_FUNC_RESUME_TIMER
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_lost
	setvar VAR_0x8004, TRAINER_HILL_FUNC_SET_LOST
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_getstatus
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_CHALLENGE_STATUS
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_gettime
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_CHALLENGE_TIME
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_allfloorsused
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_ALL_FLOORS_USED
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_clearresult
	setvar VAR_0x8004, TRAINER_HILL_FUNC_CLEAR_RESULT
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_inchallenge
	setvar VAR_0x8004, TRAINER_HILL_FUNC_IN_CHALLENGE
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_postbattletext
	setvar VAR_0x8004, TRAINER_HILL_FUNC_POST_BATTLE_TEXT
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_settrainerflags
	setvar VAR_0x8004, TRAINER_HILL_FUNC_SET_ALL_TRAINER_FLAGS
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_getsaved
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_GAME_SAVED
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_setsaved
	setvar VAR_0x8004, TRAINER_HILL_FUNC_SET_GAME_SAVED
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_clearsaved
	setvar VAR_0x8004, TRAINER_HILL_FUNC_CLEAR_GAME_SAVED
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_getwon
	setvar VAR_0x8004, TRAINER_HILL_FUNC_GET_WON
	special CallTrainerHillFunction
	.endm

	.macro trainerhill_settag tag:req
	setvar VAR_0x8004, TRAINER_HILL_FUNC_SET_TAG
	copyvar VAR_0x8005, \tag
	special CallTrainerHillFunction
	.endm


	@ Apprentice

	.macro apprentice_gavelvlmode
	setvar VAR_0x8004, APPRENTICE_FUNC_GAVE_LVLMODE
	special CallApprenticeFunction
	.endm

	.macro apprentice_setlvlmode lvlmode:req
	setvar VAR_0x8004, APPRENTICE_FUNC_SET_LVLMODE
	setorcopyvar VAR_0x8005, \lvlmode
	addvar VAR_0x8005, 1
	special CallApprenticeFunction
	.endm

	.macro apprentice_answeredquestion
	setvar VAR_0x8004, APPRENTICE_FUNC_ANSWERED_QUESTION
	special CallApprenticeFunction
	.endm

	.macro apprentice_menu  which:req
	setvar VAR_0x8004, APPRENTICE_FUNC_MENU
	setvar VAR_0x8005, \which
	special CallApprenticeFunction
	waitstate
	.endm

	.macro apprentice_shufflespecies
	setvar VAR_0x8004, APPRENTICE_FUNC_SHUFFLE_SPECIES
	special CallApprenticeFunction
	.endm

	.macro apprentice_randomizequestions
	setvar VAR_0x8004, APPRENTICE_FUNC_RANDOMIZE_QUESTIONS
	special CallApprenticeFunction
	.endm

	.macro apprentice_msg  waitbuttonpress:req, which:req
	setvar VAR_0x8004, APPRENTICE_FUNC_PRINT_MSG
	setvar VAR_0x8005, \waitbuttonpress
	setvar VAR_0x8006, \which
	special CallApprenticeFunction
	waitstate
	.endm

	.macro apprentice_reset
	setvar VAR_0x8004, APPRENTICE_FUNC_RESET
	special CallApprenticeFunction
	.endm

	.macro apprentice_shouldcheckgone
	setvar VAR_0x8004, APPRENTICE_FUNC_CHECK_GONE
	special CallApprenticeFunction
	.endm

	.macro apprentice_getquestion
	setvar VAR_0x8004, APPRENTICE_FUNC_GET_QUESTION
	special CallApprenticeFunction
	.endm

	.macro apprentice_getnumpartymons
	setvar VAR_0x8004, APPRENTICE_FUNC_GET_NUM_PARTY_MONS
	special CallApprenticeFunction
	.endm

	.macro apprentice_setpartymon  slot:req
	copyvar VAR_0x8006, \slot
	setvar VAR_0x8004, APPRENTICE_FUNC_SET_PARTY_MON
	special CallApprenticeFunction
	.endm

	.macro apprentice_initquestion  which:req
	setvar VAR_0x8004, APPRENTICE_FUNC_INIT_QUESTION_DATA
	setvar VAR_0x8005, \which
	special CallApprenticeFunction
	.endm

	.macro apprentice_freequestion
	setvar VAR_0x8004, APPRENTICE_FUNC_FREE_QUESTION_DATA
	special CallApprenticeFunction
	.endm

	.macro apprentice_buff  whichstringvar:req, tobuff:req
	setvar VAR_0x8004, APPRENTICE_FUNC_BUFFER_STRING
	setvar VAR_0x8005, \whichstringvar
	.if \tobuff >= VARS_START
	copyvar VAR_0x8006, \tobuff
	.else
	setvar VAR_0x8006, \tobuff
	.endif
	special CallApprenticeFunction
	.endm

	.macro apprentice_setmove
	setvar VAR_0x8004, APPRENTICE_FUNC_SET_MOVE
	special CallApprenticeFunction
	.endm

	.macro apprentice_setleadmon  monId:req
	copyvar VAR_0x8005, \monId
	setvar VAR_0x8004, APPRENTICE_FUNC_SET_LEAD_MON
	special CallApprenticeFunction
	.endm

	.macro apprentice_openbag
	setvar VAR_0x8004, APPRENTICE_FUNC_OPEN_BAG
	special CallApprenticeFunction
	waitstate
	.endm

	.macro apprentice_trysetitem
	setvar VAR_0x8004, APPRENTICE_FUNC_TRY_SET_HELD_ITEM
	special CallApprenticeFunction
	.endm

	.macro apprentice_save
	setvar VAR_0x8004, APPRENTICE_FUNC_SAVE
	special CallApprenticeFunction
	.endm

	.macro apprentice_setgfx
	setvar VAR_0x8004, APPRENTICE_FUNC_SET_GFX
	special CallApprenticeFunction
	.endm

	.macro apprentice_shouldleave
	setvar VAR_0x8004, APPRENTICE_FUNC_SHOULD_LEAVE
	special CallApprenticeFunction
	.endm

	.macro apprentice_shiftsaved
	setvar VAR_0x8004, APPRENTICE_FUNC_SHIFT_SAVED
	special CallApprenticeFunction
	.endm