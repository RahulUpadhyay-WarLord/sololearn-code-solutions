#Trifonov Dmitriy(Djivs), 2020
N = int(input())
sum = 0
for i in range(N):
	a = int(input())
	if a%2 == 0:
		sum+=a
print(sum)
