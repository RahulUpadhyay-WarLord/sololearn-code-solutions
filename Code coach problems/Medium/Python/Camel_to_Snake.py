a = input()
res = ""
for i in range(len(a)):
	if a[i].isupper():
		if i != 0:
			res += "_"
	res += a[i].lower()
print(res)	
