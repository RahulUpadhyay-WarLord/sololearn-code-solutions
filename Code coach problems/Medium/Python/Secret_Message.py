a = input()
res = ""
for i in range(len(a)):
	if a[i].isalpha():
		if a[i].isupper():
			res += chr(122- ord(a[i]) - 32 + 97)
		else:
			res += chr(122 - ord(a[i]) + 97)
	else:
		res += a[i]
print(res)
