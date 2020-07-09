a = input()
i = 0
while i != len(a):
	if a[i] in a[i+1:]:
		break
print(str(i == len(a)).lower())
