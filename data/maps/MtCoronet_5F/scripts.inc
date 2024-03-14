MtCoronet_5F_MapScripts::
	.byte 0


MtCoronet_5F_Rosie_Entrance_Trigger::
# 6 "data/maps/MtCoronet_5F/scripts.pory"
	lockall
# 7 "data/maps/MtCoronet_5F/scripts.pory"
	addobject 5
# 8 "data/maps/MtCoronet_5F/scripts.pory"
	delay 40
# 9 "data/maps/MtCoronet_5F/scripts.pory"
	applymovement 5, MtCoronet_5F_Rosie_Enter
# 10 "data/maps/MtCoronet_5F/scripts.pory"
	waitmovement 0
# 12 "data/maps/MtCoronet_5F/scripts.pory"
	msgbox MyCoronet_5F_Rosie_Enter_Text_1
# 13 "data/maps/MtCoronet_5F/scripts.pory"
	closemessage
# 15 "data/maps/MtCoronet_5F/scripts.pory"
	applymovement 5, MtCoronet_5F_Rosie_WalkInFront
# 16 "data/maps/MtCoronet_5F/scripts.pory"
	waitmovement 0
# 18 "data/maps/MtCoronet_5F/scripts.pory"
	applymovement 5, MtCoronet_5F_Rosie_WalkToStarterCave
# 19 "data/maps/MtCoronet_5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCoronet_5F_Cynthia_WalkToStarterCave
# 20 "data/maps/MtCoronet_5F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MtCoronet_5F/scripts.pory"
	removeobject 5
# 22 "data/maps/MtCoronet_5F/scripts.pory"
	warp MAP_MT_CORONET_5F_STARTER_CAVE, 0
# 23 "data/maps/MtCoronet_5F/scripts.pory"
	releaseall
	return


# 34 "data/maps/MtCoronet_5F/scripts.pory"
MtCoronet_5F_Rosie_Enter:
# 35 "data/maps/MtCoronet_5F/scripts.pory"
	walk_up
# 36 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 36 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 36 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 36 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
	step_end

# 39 "data/maps/MtCoronet_5F/scripts.pory"
MtCoronet_5F_Rosie_WalkInFront:
# 40 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 41 "data/maps/MtCoronet_5F/scripts.pory"
	walk_down
	step_end

# 44 "data/maps/MtCoronet_5F/scripts.pory"
MtCoronet_5F_Rosie_WalkToStarterCave:
# 45 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 45 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 45 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 45 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 45 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 46 "data/maps/MtCoronet_5F/scripts.pory"
	walk_up
	step_end

# 49 "data/maps/MtCoronet_5F/scripts.pory"
MtCoronet_5F_Cynthia_WalkToStarterCave:
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 50 "data/maps/MtCoronet_5F/scripts.pory"
	walk_left
# 51 "data/maps/MtCoronet_5F/scripts.pory"
	walk_up
	step_end

MyCoronet_5F_Rosie_Enter_Text_1::
# 26 "data/maps/MtCoronet_5F/scripts.pory"
	.string "Rosie: Alright Cynthia. Pokémon can\n"
	.string "approach us at anytime now. Stick with\l"
	.string "me.\p"
	.string "I want to take you into this deeper\n"
	.string "cave straight ahead. I've seen some\l"
	.string "pretty rare Pokémon in there.\p"
	.string "Follow me!$"
