def points(s):
	if s == "Lettuce":
		return 5
	elif s == "Carrot":
		return 4
	elif s == "Mango":
		return 9
	return 0
	

p = 0
a = input().split()
for i in range(len(a)):
	p += points(a[i])
	
if p > 9:
	print("Come on Down!")
else:
	print("Time to wait")

