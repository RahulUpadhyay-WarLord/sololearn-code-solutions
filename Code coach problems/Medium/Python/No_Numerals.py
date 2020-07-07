a = input()
res = ""
i = 0
while i != len(a):
	if a[i].isdigit():
		if a[i] == '0':
			res += 'zero'
		elif a[i] == '1':
			if i != len(a) -1 and a[i+1] == '0':
				res+="ten"
				i+=1
			else:
				res+="one"
		elif a[i] == '2':
			res+="two"
		elif a[i] == '3':
			res+="three"
		elif a[i] == '4':
			res+="four"
		elif a[i] == '5':
			res+="five"
		elif a[i] == '6':
			res+="six"
		elif a[i] == '7':
			res+="seven"
		elif a[i] == '8':
			res+="eight"
		else:
			res+="nine"
	else:
		res+=a[i]
	i+=1
	

print(res)
