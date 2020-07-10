a = input().split()
for i in range(1, len(a)):
	if a[i-1][-1] != a[i][0]:
		print("false")
		sys.exit()
print("true")
