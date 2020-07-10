a = input().split()
b = input()
for i in range(len(a)):
	if a[i][0] == b[0]:
		print("Compare notes")
		sys.exit()
print("No such luck")
