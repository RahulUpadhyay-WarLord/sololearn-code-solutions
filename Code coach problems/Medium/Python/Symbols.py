#Trifonov Dmitriy (Djivs), 2020
a = input()
res = ""
for i in range(len(a)):
	if a[i].isdigit() or a[i].isalpha() or a[i] == ' ':
		res+=a[i] 
print(res)
