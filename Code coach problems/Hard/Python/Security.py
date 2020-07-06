s = input()
t = 1
for i in range (len(s)):
	if s[i] == 'T':
		p = i
		while p < len(s) and s[p] != '$' and s[p] != 'G':
			p+=1
		if p != len(s) and s[p] == '$':
			t = 0
			break
	elif s[i] == "$":
		p = i
		while p < len(s) and s[p] != 'T' and s[p] != 'G':
			p+=1
		if p != len(s) and s[p] == 'T':
			t = 0
			break

if t == 1:
	print("quiet")
else:
	print("ALARM")
