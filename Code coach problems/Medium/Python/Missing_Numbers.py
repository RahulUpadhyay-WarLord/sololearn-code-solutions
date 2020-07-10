n = int(input())
d = []
for i in range(n):
	buf = int(input())
	d.append(buf)
d.sort()
for i in range(d[0], d[n-1]+1):
	if d.count(i) == 0:
		print(i, end = " ")
