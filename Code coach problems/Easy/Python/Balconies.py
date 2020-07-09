b = [0, 0]
for i in range(2):
	a = input()
	f = a.find(",")
	b[i] = int(a[:f]) * int(a[f+1:]);
res = "Apartment "
if b[0] > b[1]:
	res+="A"
else:
	res+="B"
print(res)
