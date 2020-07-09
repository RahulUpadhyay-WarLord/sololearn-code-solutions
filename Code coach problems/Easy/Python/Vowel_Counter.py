a = input().lower()
t = 0
for i in range(len(a)):
	if a[i] in "aeiou":
		t+=1
print(t)
