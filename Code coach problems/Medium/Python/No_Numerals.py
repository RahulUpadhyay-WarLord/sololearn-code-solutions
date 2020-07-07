#test code, not working
phrase = input()
for i in range(len(phrase)):
	if phrase[i].isdigit():
		if phrase[i] == '0':
			print("zero")
			break
		elif phrase[i] == '1':
			if phrase[i+1] == '0':
				print("ten")
				i+=1
			else:
				print("one")
		elif phrase[i] == '2':
			print("two")
		elif phrase[i] == '3':
			print("three")
		elif phrase[i] == '4':
			print("four")
		elif phrase[i] == '5':
			print("fize")
		elif phrase[i] == '6':
			print("six")
		elif phrase[i] == '7':
			print("seven")
		elif phrase[i] == '8':
			print("eight")
		elif phrase[i] == '9':
			print("nine")
	else:
		print(phrase[i])
