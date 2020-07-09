def cost(s):
	if s == "Pizza" or s == "Nachos":
		return 6
	elif s == "Cheesburger":
		return 10
	elif s == "Water":
		return 4
	else:
		return 5
		
a = input().split()
total = 0.0
for i in range(len(a)):
	total += cost(a[i])
total *= 1.07
print("%.2f" % total)
	
