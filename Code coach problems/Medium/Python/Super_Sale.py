a = input().split(',')
for i in range(len(a)):
	a[i] = float(a[i])
a.sort()
s = sum((arr[i] for i in range(0, len(arr)-1)))
print(s*1.07*0.3)

