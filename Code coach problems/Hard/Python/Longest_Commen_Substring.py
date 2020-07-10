#Test code, 2/6 tests passed
words = input().split()
res = ""
for i in range(1, len(words[0])):
	for j in range(len(words[0])):
		check = words[0][j::i]
		l = 0
		while l < len(words):
			if words[l].find(check) == -1:
				break;
			l+=1
		if l == len(words):
			if len(check) > len(res):
				res = check
			elif len(check) == len(res):
				res = min(res, check)
print(res)			
