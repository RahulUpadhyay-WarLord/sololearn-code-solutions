a = input().split(',')
t = 0.0
for i in range(len(a)):
	if int(a[i]) >=20:
		t += int(a[i])
	else:
		t += int(a[i])*1.07
print(t)
