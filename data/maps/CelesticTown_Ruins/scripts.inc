CelesticTown_Ruins_MapScripts::
	.byte 0


CelesticTown_Ruins_TriggerScript_Intro::
# 6 "data/maps/CelesticTown_Ruins/scripts.pory"
	lockall
# 7 "data/maps/CelesticTown_Ruins/scripts.pory"
	msgbox CynthiaObservesRuins
# 8 "data/maps/CelesticTown_Ruins/scripts.pory"
	closemessage
# 9 "data/maps/CelesticTown_Ruins/scripts.pory"
	applymovement 1, RosieMovementIn
# 10 "data/maps/CelesticTown_Ruins/scripts.pory"
	waitmovement 0
# 11 "data/maps/CelesticTown_Ruins/scripts.pory"
	msgbox CynthiaRosieConversation
# 12 "data/maps/CelesticTown_Ruins/scripts.pory"
	closemessage
# 13 "data/maps/CelesticTown_Ruins/scripts.pory"
	applymovement 1, RosieMovementOut
# 14 "data/maps/CelesticTown_Ruins/scripts.pory"
	waitmovement 0
# 15 "data/maps/CelesticTown_Ruins/scripts.pory"
	removeobject 1
# 16 "data/maps/CelesticTown_Ruins/scripts.pory"
	setflag FLAG_CELESTIC_RUINS_INTRO
# 17 "data/maps/CelesticTown_Ruins/scripts.pory"
	releaseall
	return


# 24 "data/maps/CelesticTown_Ruins/scripts.pory"
RosieMovementIn:
# 25 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 25 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 25 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 25 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 26 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 26 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 27 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 27 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_up
# 28 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 28 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 28 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/CelesticTown_Ruins/scripts.pory"
RosieMovementOut:
# 36 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
# 37 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 37 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 37 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 37 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 37 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_right
# 38 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
# 38 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
# 38 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
# 38 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
# 38 "data/maps/CelesticTown_Ruins/scripts.pory"
	walk_down
	step_end

CynthiaObservesRuins::
# 20 "data/maps/CelesticTown_Ruins/scripts.pory"
	.string "Cynthia observes the painting...\p"
	.string "...\p"
	.string "There are three spirit-like looking\n"
	.string "creatures. Are they Pokémon?\p"
	.string "What is their purpose?\p"
	.string "How are they related?\p"
	.string "What is that red sphere in the middle?\p"
	.string "...$"

CynthiaRosieConversation::
# 31 "data/maps/CelesticTown_Ruins/scripts.pory"
	.string "Rosie: Studying this painting again,\n"
	.string "huh Cynthia?\p"
	.string "You're obsessed with these 3 spirit\n"
	.string "creatures.\p"
	.string "I do wonder what their purpose is\n"
	.string "myself. Maybe one of them can time\l"
	.string "travel! That would be cool...\p"
	.string "Anyways, today is the day I take you\n"
	.string "out to catch your very first Pokémon,\l"
	.string "remember?\p"
	.string "We're going to go to Mt Coronet to find\n"
	.string "a really rare Pokémon for you!\p"
	.string "I'll be waiting at the west exit of town,\n"
	.string "near Route 211. See you there, don't get\l"
	.string "consumed by this painting again!$"
