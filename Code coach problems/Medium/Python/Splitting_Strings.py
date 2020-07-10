a = input()
n = int(input())
res = ""
for i in range(len(a)):
	res+=a[i]
	if (i+1) % n == 0 and i != len(a)-1:
		res+="-"
print(res)
