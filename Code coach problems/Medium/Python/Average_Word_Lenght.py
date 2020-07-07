import math
a = input()
sum = 0.0
k = 1.0
for i in range(len(a)):
	if a[i] == ' ':
		k+=1
	elif a[i].isalpha():
		sum+=1
print(int(math.ceil(sum/k)))
