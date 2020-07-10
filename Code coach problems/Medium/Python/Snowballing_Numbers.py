n = int(input())
sum = 0
for i in range(n):
	buf = int(input())
	if buf>= sum:
		sum += buf
	else:
		print("false")
		sys.exit()
print("true")
