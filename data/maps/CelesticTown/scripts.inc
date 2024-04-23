CelesticTown_MapScripts::
	.byte 0


CelesticTown_EventScript_TownSign::
# 6 "data/maps/CelesticTown/scripts.pory"
	lockall
# 7 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_EventScript_TownSign_Text_0
# 8 "data/maps/CelesticTown/scripts.pory"
	releaseall
	return


CelesticTown_WestExit_Trigger::
# 12 "data/maps/CelesticTown/scripts.pory"
	lockall
# 13 "data/maps/CelesticTown/scripts.pory"
	addobject 1
# 14 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 15 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 16 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_1
# 17 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 18 "data/maps/CelesticTown/scripts.pory"
	applymovement 1, Grandma_Movement_In
# 19 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 24 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_2
# 25 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_POTION, 5
# 26 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_REPEL, 5
# 27 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 2
# 28 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 30 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_3
# 32 "data/maps/CelesticTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_Cynthia_Received_Pokedex
# 34 "data/maps/CelesticTown/scripts.pory"
	waitfanfare
# 35 "data/maps/CelesticTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 36 "data/maps/CelesticTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 37 "data/maps/CelesticTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 38 "data/maps/CelesticTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 40 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_4
# 41 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 43 "data/maps/CelesticTown/scripts.pory"
	applymovement 1, Grandma_Movement_Out
# 44 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/CelesticTown/scripts.pory"
	removeobject 1
# 47 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 48 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_5
# 51 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 53 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, CelesticTown_Intro_WestExit_Rosie_Out
# 54 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/CelesticTown/scripts.pory"
	removeobject 2
# 57 "data/maps/CelesticTown/scripts.pory"
	releaseall
	return


# 100 "data/maps/CelesticTown/scripts.pory"
Grandma_Movement_In:
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 101 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 102 "data/maps/CelesticTown/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/CelesticTown/scripts.pory"
Grandma_Movement_Out:
# 106 "data/maps/CelesticTown/scripts.pory"
	walk_right
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 107 "data/maps/CelesticTown/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/CelesticTown/scripts.pory"
CelesticTown_Intro_WestExit_Rosie_Out:
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 111 "data/maps/CelesticTown/scripts.pory"
	walk_left
	step_end

CelesticTown_NPC_1_Interact::
# 115 "data/maps/CelesticTown/scripts.pory"
	lock
# 116 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 117 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_1_Interact_Text
# 118 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_EventScript_TownSign_Text_0:
# 7 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town$"

CelesticTown_Intro_WestExit_1::
# 60 "data/maps/CelesticTown/scripts.pory"
	.string "Rosie: Alright Cynthia! You ready to\n"
	.string "get going off to Mt. Coronet?\p"
	.string "???: Hold up, you two.$"

CelesticTown_Intro_WestExit_2::
# 65 "data/maps/CelesticTown/scripts.pory"
	.string "Grandma: I know you two are very\n"
	.string "anxious to get out to Mt. Coronet to\l"
	.string "catch Cynthia her first Pokémon.\p"
	.string "Do you two have enough supplies?\p"
	.string "Rosie: We have Pokéballs!\p"
	.string "Grandma: Oh dear, you two aren't going\n"
	.string "to last very long out there are you...\p"
	.string "You'll need more than just Pokéballs.\n"
	.string "Here, take this.$"

CelesticTown_Intro_WestExit_3::
# 73 "data/maps/CelesticTown/scripts.pory"
	.string "Grandma: There you go. I even gave some\n"
	.string "extra Pokéballs.\p"
	.string "Rosie: Thank you Cynthia's Grandma!\n"
	.string "Let's get going Cynthia!\p"
	.string "Grandma: One more thing girls, I know\n"
	.string "you're both very excited.\p"
	.string "I have one more thing to give to\n"
	.string "Cynthia.$"

CelesticTown_Intro_WestExit_4::
# 80 "data/maps/CelesticTown/scripts.pory"
	.string "Grandma: Rosie, you already have one of\n"
	.string "these so you should know how it works.\p"
	.string "But for Cynthia, this is a Pokédex. Use\n"
	.string "it to catalog all of the different\l"
	.string "Pokémon you meet.\p"
	.string "Cynthia, this is the beginning of your\n"
	.string "journey. You're going to learn and grow\l"
	.string "so much, I know it. Please just be very\l"
	.string "careful out there, and make sure to get\l"
	.string "back home before dark.\p"
	.string "Rosie: Oh don't you worry Grandma! We\n"
	.string "will be back in no time!$"

CelesticTown_Intro_WestExit_5::
# 87 "data/maps/CelesticTown/scripts.pory"
	.string "That was very nice of your Grandma to\n"
	.string "give us those supplies!\p"
	.string "Are you ready to catch you very first\n"
	.string "Pokémon Cynthia?\p"
	.string "TODO include choice\p"
	.string "Let's go!$"

CelesticTown_Intro_Cynthia_Received_Pokedex::
# 96 "data/maps/CelesticTown/scripts.pory"
	.string "Cynthia received a Pokédex from\n"
	.string "Grandma!$"

CelesticTown_NPC_1_Interact_Text::
# 121 "data/maps/CelesticTown/scripts.pory"
	.string "Welcome to Celestic Town!\p"
	.string "Enjoy your stay!$"
