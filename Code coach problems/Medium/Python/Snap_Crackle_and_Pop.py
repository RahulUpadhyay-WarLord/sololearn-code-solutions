for i in range(6):
	a = int(input())
	if a % 3 == 0:
		print("Pop", end = " ")
	elif a % 2 == 1:
		print("Snap", end = " ")
	else:
		print("Crackle", end = " ")
