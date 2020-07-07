a = input()
res = ""
for i in range(len(a)):
	if a[len(a) - 1 - i] == ' ' or a[len(a) - i - 1].isalpha():
		res+=a[len(a) - i - 1]
print(res)		
