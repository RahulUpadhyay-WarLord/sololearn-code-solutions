res = ""
if a[1][0] == 'A':
	c = 0
	for i in range(len(a[0])):
		if a[0][i].isdigit():
			c*=10
			c+=ord(a[0][i]) - ord('0')
		else:
		if c<10:
			res += '0'
		res += str(c) +a [0][i]
		c = 0
	if c<10:
		res += '0' + str(c)
	else:
		res+=str(c)
	else:
		c = 0
		for i in range(len(a[0])):
			if a[0][i].isdigit():
				c*=10
				c+=ord(a[0][i]) - ord('0')
			else:
				c+=12
				res += str(c) +a[0][i]
				c = 0
		if c<10:
			res += '0' + str(c)
		else:
			res += str(c)
print(res)
