n = int(input())
res = 0.0
if n > 1:
	res = n*5.0*0.9*1.07
else:
	res = n*5.0*1.07
print("%.2f" % res)
	
