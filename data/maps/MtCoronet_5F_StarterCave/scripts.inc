MtCoronet_5F_StarterCave_MapScripts::
	.byte 0


MtCoronet_5F_StarterCave_Gible_Trigger::
# 6 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	lockall
# 8 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCoronet_5F_StarterCave_Cynthia_Enter
# 9 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 11 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_1
# 12 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 14 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement 2, MtCoronet_5F_StarterCave_Gible_Move
# 15 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 17 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_2
# 18 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 20 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement 2, MtCoronet_5F_StarterCave_GibleStartled
# 21 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCoronet_5F_StarterCave_Cynthia_ApproachGible
# 22 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 24 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_3
# 25 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 27 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay 30
# 29 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	removeobject 2
# 30 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_4
# 31 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 33 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 34 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	givemon SPECIES_GIBLE, 5, ITEM_POKE_BALL
# 36 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_5
# 37 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 39 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	releaseall
	return


# 75 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Cynthia_Enter:
# 76 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
# 76 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 79 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Gible_Move:
# 80 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_right
# 81 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay_16
# 82 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_left
# 83 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay_16
# 84 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Cynthia_ApproachGible:
# 88 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_GibleStartled:
# 92 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	face_up
	step_end

MyCoronet_5F_StarterCave_Gible_Text_1::
# 42 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Rosie: Look Cynthia! It's a Pokémon!$"

MyCoronet_5F_StarterCave_Gible_Text_2::
# 48 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Cynthia: Wow, it looks pretty cool.\n"
	.string "Almost like a mini dragon.\p"
	.string "I want to try and catch it!\p"
	.string "Rosie: Try throwing a Pokéball! Maybe\n"
	.string "you can catch it by surprise.$"

MyCoronet_5F_StarterCave_Gible_Text_3::
# 56 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Cynthia throws a Pokéball at the wild\n"
	.string "Gible!$"

MyCoronet_5F_StarterCave_Gible_Text_4::
# 62 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "It was caught!$"

MyCoronet_5F_StarterCave_Gible_Text_5::
# 68 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Rosie: Wow Cynthia! What a cool starter\n"
	.string "Pokémon. You'll have to show this off to\l"
	.string "your Grandma.\p"
	.string "I'm gonna head out to the main cave\n"
	.string "area and train a bit. I'll see you out\l"
	.string "there!\p"
	.string "$"
