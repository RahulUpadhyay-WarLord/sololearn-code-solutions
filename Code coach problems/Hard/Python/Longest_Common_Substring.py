words = input().split()
res = ""
for i in range(1, len(words[0]) + 1):
	for j in range(len(words[0]) - i + 1):
		check = words[0][j:j + i]
		l = 1
		while l < len(words):
			if words[l].find(check) == -1:
				break
			l += 1
		if l == len(words):
			if len(check) > len(res):
				res = check
			elif len(check) == len(res):
				res = sorted([check, res])[0]
print(res)
