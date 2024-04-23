MtCoronet_5F_StarterCave_MapScripts::
	.byte 0


MtCoronet_5F_StarterCave_Gible_Trigger::
# 4 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	lockall
# 6 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCoronet_5F_StarterCave_Cynthia_Enter
# 7 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 9 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_1
# 10 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 12 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement 2, MtCoronet_5F_StarterCave_Gible_Move
# 13 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 15 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_2
# 16 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 18 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement 2, MtCoronet_5F_StarterCave_GibleStartled
# 19 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCoronet_5F_StarterCave_Cynthia_ApproachGible
# 20 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	waitmovement 0
# 22 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_3
# 23 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 25 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay 30
# 27 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	removeobject 2
# 28 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_4
# 29 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 31 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 32 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	givemon SPECIES_GIBLE, 5, ITEM_POKE_BALL
# 34 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	msgbox MyCoronet_5F_StarterCave_Gible_Text_5
# 35 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	closemessage
# 37 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	releaseall
	return


# 73 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Cynthia_Enter:
# 74 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
# 74 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Gible_Move:
# 78 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_right
# 79 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay_16
# 80 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_left
# 81 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	delay_16
# 82 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_Cynthia_ApproachGible:
# 86 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
MtCoronet_5F_StarterCave_GibleStartled:
# 90 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	face_up
	step_end

MyCoronet_5F_StarterCave_Gible_Text_1::
# 40 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Rosie: Look Cynthia! It's a Pokémon!$"

MyCoronet_5F_StarterCave_Gible_Text_2::
# 46 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Cynthia: Wow, it looks pretty cool.\n"
	.string "Almost like a mini dragon.\p"
	.string "I want to try and catch it!\p"
	.string "Rosie: Try throwing a Pokéball! Maybe\n"
	.string "you can catch it by surprise.$"

MyCoronet_5F_StarterCave_Gible_Text_3::
# 54 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Cynthia throws a Pokéball at the wild\n"
	.string "Gible!$"

MyCoronet_5F_StarterCave_Gible_Text_4::
# 60 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "It was caught!$"

MyCoronet_5F_StarterCave_Gible_Text_5::
# 66 "data/maps/MtCoronet_5F_StarterCave/scripts.pory"
	.string "Rosie: Wow Cynthia! What a cool starter\n"
	.string "Pokémon. You'll have to show this off to\l"
	.string "your Grandma.\p"
	.string "I'm gonna head out to the main cave\n"
	.string "area and train a bit. I'll see you out\l"
	.string "there!\p"
	.string "$"
