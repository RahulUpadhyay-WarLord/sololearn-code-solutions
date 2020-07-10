a = int(input())
b = int(input())
if a%b >= 7:
	print("Cake Time")
else:
	print("I need to buy " + str(7 - a%b) + " more")
