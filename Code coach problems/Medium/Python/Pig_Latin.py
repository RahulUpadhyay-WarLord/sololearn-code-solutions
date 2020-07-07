a = input().split()
res = ""
for i in range(len(a)):
	res+=a[i][1:] + a[i][0] + "ay ";
print(res)
