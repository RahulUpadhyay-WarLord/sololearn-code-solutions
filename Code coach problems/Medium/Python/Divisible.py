a = int(input())
b = input().split()
for i in range(len(b)):
	if a % int(b[i]) != 0:
		print("not", end = " ")
		break
print("divisible by all")
