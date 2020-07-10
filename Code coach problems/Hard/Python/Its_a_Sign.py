for i in range(4):
	buf = input()
	if buf == buf[::-1]:
		print("Open")
		sys.exit()
print("Trash")
