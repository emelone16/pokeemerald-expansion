CelesticTown_Lab_MapScripts::
	.byte 0


CelesticTown_Lab_NPC_1_Interact::
# 6 "data/maps/CelesticTown_Lab/scripts.pory"
	lock
# 7 "data/maps/CelesticTown_Lab/scripts.pory"
	faceplayer
# 8 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_NPC_1_Text
# 9 "data/maps/CelesticTown_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 10 "data/maps/CelesticTown_Lab/scripts.pory"
	waitmovement 1
# 11 "data/maps/CelesticTown_Lab/scripts.pory"
	release
	return


CelesticTown_Lab_NPC_2_Interact::
# 20 "data/maps/CelesticTown_Lab/scripts.pory"
	lock
# 21 "data/maps/CelesticTown_Lab/scripts.pory"
	faceplayer
# 22 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_NPC_2_Text
# 23 "data/maps/CelesticTown_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 24 "data/maps/CelesticTown_Lab/scripts.pory"
	waitmovement 2
# 25 "data/maps/CelesticTown_Lab/scripts.pory"
	release
	return


CelesticTown_Lab_NPC_3_Interact::
# 34 "data/maps/CelesticTown_Lab/scripts.pory"
	lock
# 35 "data/maps/CelesticTown_Lab/scripts.pory"
	faceplayer
# 36 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_NPC_3_Text
# 37 "data/maps/CelesticTown_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/CelesticTown_Lab/scripts.pory"
	waitmovement 3
# 39 "data/maps/CelesticTown_Lab/scripts.pory"
	release
	return


CelesticTown_Lab_NPC_4_Interact::
# 47 "data/maps/CelesticTown_Lab/scripts.pory"
	lock
# 48 "data/maps/CelesticTown_Lab/scripts.pory"
	faceplayer
# 49 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_NPC_4_Text
# 50 "data/maps/CelesticTown_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/CelesticTown_Lab/scripts.pory"
	waitmovement 4
# 52 "data/maps/CelesticTown_Lab/scripts.pory"
	release
	return


CelesticTown_Lab_Grandma_Interact::
# 60 "data/maps/CelesticTown_Lab/scripts.pory"
	lock
# 61 "data/maps/CelesticTown_Lab/scripts.pory"
	faceplayer
# 62 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Grandma_Text_1
# 64 "data/maps/CelesticTown_Lab/scripts.pory"
	giveitem ITEM_POTION, 5
# 65 "data/maps/CelesticTown_Lab/scripts.pory"
	giveitem ITEM_REPEL, 5
# 66 "data/maps/CelesticTown_Lab/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 2
# 67 "data/maps/CelesticTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 69 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Grandma_Text_2
# 71 "data/maps/CelesticTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Received_Pokedex
# 73 "data/maps/CelesticTown_Lab/scripts.pory"
	waitfanfare
# 74 "data/maps/CelesticTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 75 "data/maps/CelesticTown_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 76 "data/maps/CelesticTown_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 77 "data/maps/CelesticTown_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 79 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Grandma_Text_3
# 81 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Grandma_Interact_Text_0
# 83 "data/maps/CelesticTown_Lab/scripts.pory"
	msgbox CelesticTown_Lab_Grandma_Text_4
# 84 "data/maps/CelesticTown_Lab/scripts.pory"
	release
	return


CelesticTown_Lab_Grandma_Interact_Text_0:
# 81 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "TODO GIVE FIELDBOOK$"

CelesticTown_Lab_NPC_1_Text::
# 14 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Have you tried working at your desk\n"
	.string "while standing up?\p"
	.string "It can improve posture and increase\n"
	.string "energy levels!$"

CelesticTown_Lab_NPC_2_Text::
# 28 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Hey Cynthia, your grandmother is busy\n"
	.string "working in the back room.\p"
	.string "I think she's trying to analyze some of\n"
	.string "the recent seismic activity from Mt\l"
	.string "Coronet.$"

CelesticTown_Lab_NPC_3_Text::
# 42 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Sorry Cynthia, I'm in the middle of\n"
	.string "something right now.$"

CelesticTown_Lab_NPC_4_Text::
# 55 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Ah, nothing beats a good cup of coffee\n"
	.string "to keep you going!$"

CelesticTown_Lab_Grandma_Text_1::
# 87 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Prof Carolina: Hi Cynthia dear. Is today\n"
	.string "the day?\p"
	.string "Cynthia: Indeed it is. Rosie and I are\n"
	.string "getting ready to head out to Mt.\l"
	.string "Coronet.\p"
	.string "Prof Carolina: Please be careful out\n"
	.string "there. My last 2 weeks have been\l"
	.string "swamped in analyzing these tremors\l"
	.string "we’ve been getting. We still don’t know\l"
	.string "exactly what’s causing them, but we’re\l"
	.string "pretty convinced they’re coming from\l"
	.string "somewhere along Mt. Coronet.\p"
	.string "Cynthia: Mt. Coronet is a huge area. We\n"
	.string "aren’t going super deep into it. Rosie\l"
	.string "mentioned she found some inner cave\l"
	.string "with rare Pokemon right near the Route\l"
	.string "211 West entrance.\p"
	.string "Prof Carolina: Well that sounds very\n"
	.string "exciting. Before you go. Take these\l"
	.string "supplies in case you two get into\l"
	.string "trouble out there.$"

CelesticTown_Lab_Grandma_Text_2::
# 91 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Prof Carolina: Two more things. If you’re\n"
	.string "going to be catching and battling\l"
	.string "Pokemon, you might as well have a\l"
	.string "Pokedex to record information about\l"
	.string "what you encounter.$"

CelesticTown_Lab_Grandma_Text_3::
# 95 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Prof Carolina: And lastly, take this\n"
	.string "field book. I know you’re not traveling\l"
	.string "far today, but now that you are going\l"
	.string "to be a Pokémon Trainer, I expect you\l"
	.string "to do some field work for me while you\l"
	.string "are out in the world!$"

CelesticTown_Lab_Grandma_Text_4::
# 99 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Cynthia: I’ve spent my entire childhood\n"
	.string "watching you do research about the\l"
	.string "origins of Sinnoh. Of course I want to\l"
	.string "contribute to your studies. Though, I\l"
	.string "don’t know what I will be able to find\l"
	.string "that you haven’t been able to.\p"
	.string "Prof Carolina: There is still so much we\n"
	.string "do not know about Sinnoh, or the\l"
	.string "ancient Pokémon that created it. We\l"
	.string "have our theories, but we still have yet\l"
	.string "to actually identify any hard evidence.\l"
	.string "I’m getting too old to do research\l"
	.string "missions across the region, that’s why I\l"
	.string "am going to need your help more and\l"
	.string "more Cynthia.\p"
	.string "Cynthia: I’ll do you proud. I’m going to\n"
	.string "go meet Rosie. We shouldn’t be gone long.\l"
	.string "Just a quick adventure in and out of Mt.\l"
	.string "Coronet.\p"
	.string "Prof Carolina: Be safe dear.$"

CelesticTown_Lab_Received_Pokedex::
# 103 "data/maps/CelesticTown_Lab/scripts.pory"
	.string "Cynthia received a Pokédex from Prof\n"
	.string "Carolina!$"
