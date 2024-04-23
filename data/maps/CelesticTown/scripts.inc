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


CelesticTown_EventScript_RuinsSign::
# 12 "data/maps/CelesticTown/scripts.pory"
	lockall
# 13 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_EventScript_RuinsSign_Text_0
# 14 "data/maps/CelesticTown/scripts.pory"
	releaseall
	return


CelesticTown_EventScript_LabSign::
# 18 "data/maps/CelesticTown/scripts.pory"
	lockall
# 19 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_EventScript_LabSign_Text_0
# 20 "data/maps/CelesticTown/scripts.pory"
	releaseall
	return


CelesticTown_WestExit_Trigger0::
# 24 "data/maps/CelesticTown/scripts.pory"
	lockall
# 25 "data/maps/CelesticTown/scripts.pory"
	addobject 1
# 26 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Walk_Down
# 27 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/CelesticTown/scripts.pory"
	goto CelesticTown_WestExit_Trigger
	return


CelesticTown_WestExit_Trigger1::
# 32 "data/maps/CelesticTown/scripts.pory"
	lockall
# 33 "data/maps/CelesticTown/scripts.pory"
	addobject 1
# 34 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 35 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/CelesticTown/scripts.pory"
	goto CelesticTown_WestExit_Trigger
	return


CelesticTown_WestExit_Trigger2::
# 40 "data/maps/CelesticTown/scripts.pory"
	lockall
# 41 "data/maps/CelesticTown/scripts.pory"
	addobject 1
# 42 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/CelesticTown/scripts.pory"
	goto CelesticTown_WestExit_Trigger
	return


CelesticTown_WestExit_Trigger3::
# 48 "data/maps/CelesticTown/scripts.pory"
	lockall
# 49 "data/maps/CelesticTown/scripts.pory"
	addobject 1
# 50 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Walk_Up
# 51 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 52 "data/maps/CelesticTown/scripts.pory"
	goto CelesticTown_WestExit_Trigger
	return


CelesticTown_WestExit_Trigger::
# 56 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_1
# 57 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 58 "data/maps/CelesticTown/scripts.pory"
	applymovement 1, Grandma_Movement_In
# 59 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 62 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 64 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_2
# 65 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_POTION, 5
# 66 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_REPEL, 5
# 67 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 2
# 68 "data/maps/CelesticTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 70 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_3
# 72 "data/maps/CelesticTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_Cynthia_Received_Pokedex
# 74 "data/maps/CelesticTown/scripts.pory"
	waitfanfare
# 75 "data/maps/CelesticTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 76 "data/maps/CelesticTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 77 "data/maps/CelesticTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 78 "data/maps/CelesticTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 80 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_4
# 81 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 83 "data/maps/CelesticTown/scripts.pory"
	applymovement 1, Grandma_Movement_Out
# 84 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/CelesticTown/scripts.pory"
	removeobject 1
# 87 "data/maps/CelesticTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_Intro_WestExit_5
# 91 "data/maps/CelesticTown/scripts.pory"
	closemessage
# 93 "data/maps/CelesticTown/scripts.pory"
	applymovement 2, CelesticTown_Intro_WestExit_Rosie_Out
# 94 "data/maps/CelesticTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/CelesticTown/scripts.pory"
	removeobject 2
# 97 "data/maps/CelesticTown/scripts.pory"
	releaseall
	return


# 140 "data/maps/CelesticTown/scripts.pory"
Grandma_Movement_In:
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 141 "data/maps/CelesticTown/scripts.pory"
	walk_down
# 142 "data/maps/CelesticTown/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/CelesticTown/scripts.pory"
Grandma_Movement_Out:
# 146 "data/maps/CelesticTown/scripts.pory"
	walk_right
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
# 147 "data/maps/CelesticTown/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/CelesticTown/scripts.pory"
Player_Walk_Down:
# 151 "data/maps/CelesticTown/scripts.pory"
	walk_down
	step_end

# 154 "data/maps/CelesticTown/scripts.pory"
Player_Walk_Up:
# 155 "data/maps/CelesticTown/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/CelesticTown/scripts.pory"
CelesticTown_Intro_WestExit_Rosie_Out:
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
# 159 "data/maps/CelesticTown/scripts.pory"
	walk_left
	step_end

CelesticTown_NPC_1_Interact::
# 163 "data/maps/CelesticTown/scripts.pory"
	lock
# 164 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 165 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_1_Interact_Text
# 166 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_NPC_2_Interact::
# 175 "data/maps/CelesticTown/scripts.pory"
	lock
# 176 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 177 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_2_Interact_Text
# 178 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_NPC_3_Interact::
# 186 "data/maps/CelesticTown/scripts.pory"
	lock
# 187 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 188 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_3_Interact_Text
# 189 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_NPC_4_Interact::
# 198 "data/maps/CelesticTown/scripts.pory"
	lock
# 199 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 200 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_4_Interact_Text
# 201 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_NPC_5_Interact::
# 210 "data/maps/CelesticTown/scripts.pory"
	lock
# 211 "data/maps/CelesticTown/scripts.pory"
	faceplayer
# 212 "data/maps/CelesticTown/scripts.pory"
	msgbox CelesticTown_NPC_5_Interact_Text
# 213 "data/maps/CelesticTown/scripts.pory"
	release
	return


CelesticTown_EventScript_TownSign_Text_0:
# 7 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town$"

CelesticTown_EventScript_RuinsSign_Text_0:
# 13 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town Ruins$"

CelesticTown_EventScript_LabSign_Text_0:
# 19 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town Lab$"

CelesticTown_Intro_WestExit_1::
# 100 "data/maps/CelesticTown/scripts.pory"
	.string "Rosie: Alright Cynthia! You ready to\n"
	.string "get going off to Mt. Coronet?\p"
	.string "???: Hold up, you two.$"

CelesticTown_Intro_WestExit_2::
# 105 "data/maps/CelesticTown/scripts.pory"
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
# 113 "data/maps/CelesticTown/scripts.pory"
	.string "Grandma: There you go. I even gave some\n"
	.string "extra Pokéballs.\p"
	.string "Rosie: Thank you Cynthia's Grandma!\n"
	.string "Let's get going Cynthia!\p"
	.string "Grandma: One more thing girls, I know\n"
	.string "you're both very excited.\p"
	.string "I have one more thing to give to\n"
	.string "Cynthia.$"

CelesticTown_Intro_WestExit_4::
# 120 "data/maps/CelesticTown/scripts.pory"
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
# 127 "data/maps/CelesticTown/scripts.pory"
	.string "That was very nice of your Grandma to\n"
	.string "give us those supplies!\p"
	.string "Are you ready to catch you very first\n"
	.string "Pokémon Cynthia?\p"
	.string "TODO include choice\p"
	.string "Let's go!$"

CelesticTown_Intro_Cynthia_Received_Pokedex::
# 136 "data/maps/CelesticTown/scripts.pory"
	.string "Cynthia received a Pokédex from\n"
	.string "Grandma!$"

CelesticTown_NPC_1_Interact_Text::
# 169 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town is built around this\n"
	.string "crater.\p"
	.string "We have no idea what created it,\n"
	.string "scientists have been investigating it\l"
	.string "for years.$"

CelesticTown_NPC_2_Interact_Text::
# 181 "data/maps/CelesticTown/scripts.pory"
	.string "I love this hiding spot!$"

CelesticTown_NPC_3_Interact_Text::
# 192 "data/maps/CelesticTown/scripts.pory"
	.string "Celestic Town has such a peaceful aura\n"
	.string "to it.\p"
	.string "I love living here!$"

CelesticTown_NPC_4_Interact_Text::
# 204 "data/maps/CelesticTown/scripts.pory"
	.string "Sometimes I need to come outside to\n"
	.string "get some fresh air.\p"
	.string "This is my favorite spot to sit and\n"
	.string "think.$"

CelesticTown_NPC_5_Interact_Text::
# 216 "data/maps/CelesticTown/scripts.pory"
	.string "Your grandmother is so awesome\n"
	.string "Cynthia!\p"
	.string "When I grow up I want to be a scientist\n"
	.string "like her.$"
