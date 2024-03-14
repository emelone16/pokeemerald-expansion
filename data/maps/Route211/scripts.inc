Route211_MapScripts::
	.byte 0


Route211_ProtectGrass_Trigger_1::
# 6 "data/maps/Route211/scripts.pory"
	lockall
# 7 "data/maps/Route211/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 8 "data/maps/Route211/scripts.pory"
	msgbox Route211_ProtectGrass_Text
# 9 "data/maps/Route211/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route211_ProtectGrass_Movement_1
# 10 "data/maps/Route211/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route211/scripts.pory"
	releaseall
	return


Route211_ProtectGrass_Trigger_2::
# 15 "data/maps/Route211/scripts.pory"
	lockall
# 16 "data/maps/Route211/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 17 "data/maps/Route211/scripts.pory"
	msgbox Route211_ProtectGrass_Text
# 18 "data/maps/Route211/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route211_ProtectGrass_Movement_2
# 19 "data/maps/Route211/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route211/scripts.pory"
	releaseall
	return


Route211_Earthquake_Trigger::
# 24 "data/maps/Route211/scripts.pory"
	lockall
# 26 "data/maps/Route211/scripts.pory"
	setvar VAR_0x8004, 2
# 27 "data/maps/Route211/scripts.pory"
	setvar VAR_0x8005, 5
# 28 "data/maps/Route211/scripts.pory"
	setvar VAR_0x8006, 14
# 29 "data/maps/Route211/scripts.pory"
	setvar VAR_0x8007, 3
# 30 "data/maps/Route211/scripts.pory"
	special ShakeCamera
# 31 "data/maps/Route211/scripts.pory"
	waitstate
# 33 "data/maps/Route211/scripts.pory"
	msgbox Route211_Earthquake_Text
# 34 "data/maps/Route211/scripts.pory"
	releaseall
	return


Route211_NearCave_Trigger::
# 38 "data/maps/Route211/scripts.pory"
	lockall
# 39 "data/maps/Route211/scripts.pory"
	addobject 2
# 40 "data/maps/Route211/scripts.pory"
	applymovement 2, Route211_NearCave_Rosie_Enter
# 41 "data/maps/Route211/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route211/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/Route211/scripts.pory"
	msgbox Route211_NearCave_Text_1
# 45 "data/maps/Route211/scripts.pory"
	closemessage
# 47 "data/maps/Route211/scripts.pory"
	applymovement 2, Route211_NearCave_Rosie_WalkInFront
# 48 "data/maps/Route211/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route211/scripts.pory"
	applymovement 2, Route211_NearCave_Rosie_WalkToCave
# 51 "data/maps/Route211/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route211_NearCave_Cynthia_WalkToCave
# 52 "data/maps/Route211/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route211/scripts.pory"
	msgbox Route211_NearCave_Text_2
# 55 "data/maps/Route211/scripts.pory"
	releaseall
	return


# 90 "data/maps/Route211/scripts.pory"
Route211_ProtectGrass_Movement_1:
# 91 "data/maps/Route211/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/Route211/scripts.pory"
Route211_ProtectGrass_Movement_2:
# 95 "data/maps/Route211/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/Route211/scripts.pory"
Route211_NearCave_Rosie_Enter:
# 99 "data/maps/Route211/scripts.pory"
	walk_down
# 99 "data/maps/Route211/scripts.pory"
	walk_down
# 99 "data/maps/Route211/scripts.pory"
	walk_down
# 99 "data/maps/Route211/scripts.pory"
	walk_down
# 100 "data/maps/Route211/scripts.pory"
	walk_left
# 101 "data/maps/Route211/scripts.pory"
	walk_down
# 101 "data/maps/Route211/scripts.pory"
	walk_down
# 101 "data/maps/Route211/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/Route211/scripts.pory"
Route211_NearCave_Rosie_WalkInFront:
# 105 "data/maps/Route211/scripts.pory"
	walk_left
# 106 "data/maps/Route211/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/Route211/scripts.pory"
Route211_NearCave_Rosie_WalkToCave:
# 110 "data/maps/Route211/scripts.pory"
	walk_left
# 110 "data/maps/Route211/scripts.pory"
	walk_left
# 111 "data/maps/Route211/scripts.pory"
	walk_down
# 112 "data/maps/Route211/scripts.pory"
	face_left
	step_end

# 115 "data/maps/Route211/scripts.pory"
Route211_NearCave_Cynthia_WalkToCave:
# 116 "data/maps/Route211/scripts.pory"
	walk_left
# 116 "data/maps/Route211/scripts.pory"
	walk_left
# 116 "data/maps/Route211/scripts.pory"
	walk_left
	step_end

Route211_ProtectGrass_Text::
# 58 "data/maps/Route211/scripts.pory"
	.string "Rosie: Cynthia! You don't have a\n"
	.string "Pokémon yet so you can't enter the\l"
	.string "grass.\p"
	.string "Best to take the path through the\n"
	.string "mountain.$"

Route211_Earthquake_Text::
# 65 "data/maps/Route211/scripts.pory"
	.string "Cynthia: What was that???\p"
	.string "I've lived in Celestic Town all my life\n"
	.string "and have never felt something like that\l"
	.string "before...\p"
	.string "I hope the entrance to Mt. Coronet\n"
	.string "isn't blocked off.$"

Route211_NearCave_Text_1::
# 73 "data/maps/Route211/scripts.pory"
	.string "Rosie: Wow! Did you feel that\n"
	.string "earthquake just now?\p"
	.string "Cynthia: I did... I've never felt\n"
	.string "anything like that before.\p"
	.string "Do you think it's ok to keep going onto\n"
	.string "Mt. Coronet?\p"
	.string "Rosie: Oh we sure are not turning back!\p"
	.string "Nothing like a risk on this little\n"
	.string "adventure! Let's get to the cave\l"
	.string "entrance.$"

Route211_NearCave_Text_2::
# 83 "data/maps/Route211/scripts.pory"
	.string "Rosie: You can go in first Cynthia! I'll\n"
	.string "be right behind.\p"
	.string "Cynthia: Let's do it!$"
