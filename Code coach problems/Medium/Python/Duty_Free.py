a = input().split()
for i in range(len(a)):
	if float(a[i])*1.1 >= 20:
		print("Back to the store")
		sys.exit()
print("On to the terminal")
