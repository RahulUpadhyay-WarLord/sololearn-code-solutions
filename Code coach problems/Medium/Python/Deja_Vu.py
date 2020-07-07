a = input()
for i in range(len(a)):
	for j in range(i+1, len(a)):
		if a[i] == a[j]:
			print("Deja Vu")
			sys.exit()
print("Unique")
