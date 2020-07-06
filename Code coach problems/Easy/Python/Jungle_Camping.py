a = input()
for i in range(len(a)):
	if i == 0 or a[i] == ' ':
		if i != 0:
			i+=1
		if a[i] == 'S':
			print("Snake", end = " ")
		elif a[i] == 'G':
			print("Lion", end = " ")
		elif a[i] == 'R':
			print("Tiger", end = " ")
		elif a[i] == 'C':
			print("Bird", end = " ")
