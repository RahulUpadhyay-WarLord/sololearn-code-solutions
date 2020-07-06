m = input()
specChar = 0
num = 0
l = len(m) >= 7
for i in range(len(m)):
	if m[i].isdigit():
		num+=1
	elif not(m[i].isalpha()) and not(m[i].isdigit()):
		specChar+=1
if l and num > 1 and specChar > 1:
	print("Strong")
else:
	print("Weak")
