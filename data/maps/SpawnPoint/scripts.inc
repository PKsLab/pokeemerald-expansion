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
	addvar VAR_TEMP_0, 1
# 21 "data/maps/SpawnPoint/scripts.pory"
	msgbox EveryFrame_Text_0
# 25 "data/maps/SpawnPoint/scripts.pory"
	release
	end


EveryFrame_Text_0:
# 21 "data/maps/SpawnPoint/scripts.pory"
	.string "Before the game starts, you must\n"
	.string "decide what path you'll be choosing.\p"
	.string "Path (EXAMPLE) selected!\p"
	.string "Thanks for playing, and enjoy!$"
