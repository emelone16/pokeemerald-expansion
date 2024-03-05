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


# 30 "data/maps/Route211/scripts.pory"
Route211_ProtectGrass_Movement_1:
# 31 "data/maps/Route211/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/Route211/scripts.pory"
Route211_ProtectGrass_Movement_2:
# 35 "data/maps/Route211/scripts.pory"
	walk_right
	step_end

Route211_ProtectGrass_Text::
# 23 "data/maps/Route211/scripts.pory"
	.string "Rosie: Cynthia! You don't have a\n"
	.string "Pokémon yet so you can't enter the\l"
	.string "grass. Best to take the path through\l"
	.string "the mountain.$"
