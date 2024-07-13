SpawnPoint_MapScripts::
# 2 "data/maps/SpawnPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SpawnPoint_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/SpawnPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SpawnPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SpawnPoint_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SpawnPoint/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, OnTransition
	.2byte 0

SpawnPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SpawnPoint/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, EveryFrame
	.2byte 0


OnTransition::
# 14 "data/maps/SpawnPoint/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	return


EveryFrame::
# 19 "data/maps/SpawnPoint/scripts.pory"
	lock
# 20 "data/maps/SpawnPoint/scripts.pory"
	faceplayer
# 21 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_0
# 26 "data/maps/SpawnPoint/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EveryFrame_Text_1, EveryFrame_Text_2, EveryFrame_Text_3, EveryFrame_Text_4, EveryFrame_Text_5
# 27 "data/maps/SpawnPoint/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 28 "data/maps/SpawnPoint/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/SpawnPoint/scripts.pory"
	case 0, EveryFrame_3
# 32 "data/maps/SpawnPoint/scripts.pory"
	case 1, EveryFrame_4
# 35 "data/maps/SpawnPoint/scripts.pory"
	case 2, EveryFrame_5
# 38 "data/maps/SpawnPoint/scripts.pory"
	case 3, EveryFrame_6
# 41 "data/maps/SpawnPoint/scripts.pory"
	case 4, EveryFrame_7
EveryFrame_1:
# 45 "data/maps/SpawnPoint/scripts.pory"
	closemessage
# 46 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_11
# 47 "data/maps/SpawnPoint/scripts.pory"
	closemessage
# 48 "data/maps/SpawnPoint/scripts.pory"
	warp MAP_INSIDE_OF_TRUCK, 2, 2
# 49 "data/maps/SpawnPoint/scripts.pory"
	waitstate
# 50 "data/maps/SpawnPoint/scripts.pory"
	release
	end

EveryFrame_3:
# 30 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_6
# 31 "data/maps/SpawnPoint/scripts.pory"
	setvar VAR_GAME_PATHS, 1
	goto EveryFrame_1

EveryFrame_4:
# 33 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_7
# 34 "data/maps/SpawnPoint/scripts.pory"
	setvar VAR_GAME_PATHS, 2
	goto EveryFrame_1

EveryFrame_5:
# 36 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_8
# 37 "data/maps/SpawnPoint/scripts.pory"
	setvar VAR_GAME_PATHS, 3
	goto EveryFrame_1

EveryFrame_6:
# 39 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_9
# 40 "data/maps/SpawnPoint/scripts.pory"
	setvar VAR_GAME_PATHS, 4
	goto EveryFrame_1

EveryFrame_7:
# 42 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_10
# 43 "data/maps/SpawnPoint/scripts.pory"
	setvar VAR_GAME_PATHS, 5
	goto EveryFrame_1


EveryFrame_Text_0:
# 21 "data/maps/SpawnPoint/scripts.pory"
	.string "Before the game starts, you must\n"
	.string "decide what path you'll be choosing.\p"
	.string "Different paths change which order you\n"
	.string "do the boss fights in.\p"
	.string "Read the DoozDex for some more info!$"

EveryFrame_Text_1:
# 26 "data/maps/SpawnPoint/scripts.pory"
	.string "Vanilla$"

EveryFrame_Text_2:
# 26 "data/maps/SpawnPoint/scripts.pory"
	.string "Reverse$"

EveryFrame_Text_3:
# 26 "data/maps/SpawnPoint/scripts.pory"
	.string "West$"

EveryFrame_Text_4:
# 26 "data/maps/SpawnPoint/scripts.pory"
	.string "East$"

EveryFrame_Text_5:
# 26 "data/maps/SpawnPoint/scripts.pory"
	.string "Scrambled$"

EveryFrame_Text_6:
# 30 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Vanilla Path!$"

EveryFrame_Text_7:
# 33 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Reverse Path!$"

EveryFrame_Text_8:
# 36 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the West Path!$"

EveryFrame_Text_9:
# 39 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the East Path!$"

EveryFrame_Text_10:
# 42 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Scrambled Path!$"

EveryFrame_Text_11:
# 46 "data/maps/SpawnPoint/scripts.pory"
	.string "Thanks for playing, and enjoy!$"
