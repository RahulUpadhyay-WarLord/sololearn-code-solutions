a = input().split(',')
x1 = -1
y1 = -1
x2 = -1
y2 = -1
for i in range(len(a)):
	for j in range(len(a[i])):
		if a[i][j] == 'P':
			if x1 == -1:
				x1 = j
				y1 = i
			else:
				x2 = j
				y2 = i
print(abs(x2-x1) + abs(y2-y1))
