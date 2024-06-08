# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, PathChanger
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

PathChanger::
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_0
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PathChanger_Text_1, PathChanger_Text_2, PathChanger_Text_3, PathChanger_Text_4, PathChanger_Text_5
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PathChanger_3
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PathChanger_4
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PathChanger_5
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, PathChanger_6
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, PathChanger_7
PathChanger_1:
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

PathChanger_3:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_6
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_GAME_PATHS, 0
	goto PathChanger_1

PathChanger_4:
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_7
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_GAME_PATHS, 1
	goto PathChanger_1

PathChanger_5:
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_8
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_GAME_PATHS, 2
	goto PathChanger_1

PathChanger_6:
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_9
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_GAME_PATHS, 3
	goto PathChanger_1

PathChanger_7:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PathChanger_Text_10
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_GAME_PATHS, 4
	goto PathChanger_1


PathChanger_Text_0:
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hi there! I can swap the\n"
	.string "different paths in the game for you.\p"
	.string "Which path would you like to swap to?$"

PathChanger_Text_1:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Vanilla$"

PathChanger_Text_2:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Reverse$"

PathChanger_Text_3:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "West$"

PathChanger_Text_4:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "East$"

PathChanger_Text_5:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Scrambled$"

PathChanger_Text_6:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You swapped to the Vanilla Path!$"

PathChanger_Text_7:
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You swapped to the Reverse Path!$"

PathChanger_Text_8:
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You swapped to the West Path!$"

PathChanger_Text_9:
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You swapped to the East Path!$"

PathChanger_Text_10:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You swapped to the Scrambled Path!$"
