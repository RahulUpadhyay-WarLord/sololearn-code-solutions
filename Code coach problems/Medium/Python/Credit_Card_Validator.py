a = list(input())
a.reverse()
for i in range(len(a)):
	a[i] = int(a[i])
	if i % 2 == 1:
		a[i] *= 2
for i in range(len(a)):
	if a[i] > 9:
		a[i] -= 9
s = 0
for i in range(len(a)):
	s += a[i]
if not(s % 10 == 0 and len(a) == 16):
	print("not", end = " ")
print("valid")
