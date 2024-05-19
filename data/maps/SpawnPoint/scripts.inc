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
# 23 "data/maps/SpawnPoint/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EveryFrame_Text_1, EveryFrame_Text_2, EveryFrame_Text_3, EveryFrame_Text_4, EveryFrame_Text_5
# 24 "data/maps/SpawnPoint/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 25 "data/maps/SpawnPoint/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/SpawnPoint/scripts.pory"
	case 0, EveryFrame_3
# 28 "data/maps/SpawnPoint/scripts.pory"
	case 1, EveryFrame_4
# 30 "data/maps/SpawnPoint/scripts.pory"
	case 2, EveryFrame_5
# 32 "data/maps/SpawnPoint/scripts.pory"
	case 3, EveryFrame_6
# 34 "data/maps/SpawnPoint/scripts.pory"
	case 4, EveryFrame_7
EveryFrame_1:
# 37 "data/maps/SpawnPoint/scripts.pory"
	closemessage
# 38 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_11
# 39 "data/maps/SpawnPoint/scripts.pory"
	release
	end

EveryFrame_3:
# 27 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_6
	goto EveryFrame_1

EveryFrame_4:
# 29 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_7
	goto EveryFrame_1

EveryFrame_5:
# 31 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_8
	goto EveryFrame_1

EveryFrame_6:
# 33 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_9
	goto EveryFrame_1

EveryFrame_7:
# 35 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_10
	goto EveryFrame_1


EveryFrame_Text_0:
# 21 "data/maps/SpawnPoint/scripts.pory"
	.string "Before the game starts, you must\n"
	.string "decide what path you'll be choosing.$"

EveryFrame_Text_1:
# 23 "data/maps/SpawnPoint/scripts.pory"
	.string "Vanilla$"

EveryFrame_Text_2:
# 23 "data/maps/SpawnPoint/scripts.pory"
	.string "Reverse$"

EveryFrame_Text_3:
# 23 "data/maps/SpawnPoint/scripts.pory"
	.string "West$"

EveryFrame_Text_4:
# 23 "data/maps/SpawnPoint/scripts.pory"
	.string "East$"

EveryFrame_Text_5:
# 23 "data/maps/SpawnPoint/scripts.pory"
	.string "Scrambled$"

EveryFrame_Text_6:
# 27 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Vanilla Path!$"

EveryFrame_Text_7:
# 29 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Reverse Path!$"

EveryFrame_Text_8:
# 31 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the West Path!$"

EveryFrame_Text_9:
# 33 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the East Path!$"

EveryFrame_Text_10:
# 35 "data/maps/SpawnPoint/scripts.pory"
	.string "You chose the Scrambled Path!$"

EveryFrame_Text_11:
# 38 "data/maps/SpawnPoint/scripts.pory"
	.string "Thanks for playing, and enjoy!$"
