a = input()
for i in range(len(a)):
	if a[i].isdigit() == 0:
		print("false")
		sys.exit()
if len(a) == 5:
	print("true")
else:
	print("false")
