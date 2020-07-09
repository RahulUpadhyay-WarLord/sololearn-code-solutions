w = int(input())
h = int(input())
if (w*h*2) % 10 == 0:
	print(int(w*h*2/10))
else:
	print(int(w*h*2/10 + 1))
