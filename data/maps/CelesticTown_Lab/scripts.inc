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
