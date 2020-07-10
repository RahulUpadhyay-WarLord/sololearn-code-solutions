''' Test code, not working ''' 
op = "+-*/"
n = int(input())
a = input().split()
nums = []
ops = []
for i in range(len(a)):
	c = 0
	j = 0
	while j < len(a[i]):
		if a[i][j] in ops:
			num.append(int(a[i][:j]))
			ops.append(a[i][j])
			a[i] = a[i][j+1:]
			j = 0
	t = nums[0]
	for l in range(len(ops))
		if ops[l] == '+':
			t += nums[l+1]
		elif ops[l] == '-':
			t -= nums[l+1]
		elif ops[l] == '*':
			t *= nums[l+1]
		else:
			t /= nums[l+1]
		if t == n:
			print("index " + str(i))
			sys.exit()
	nums.clear()
	ops.clear()
print("none")
	
