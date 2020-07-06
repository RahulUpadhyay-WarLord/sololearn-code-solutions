n = int(input())
sum = n*5.0 + 40.0
tax = sum/10.0
if tax - int(tax) >= 0.5:
	tax+=1
print(int(int(tax) + sum))
