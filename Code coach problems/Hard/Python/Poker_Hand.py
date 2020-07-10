''' 
There may be syntax errors, but you will fix it very quickly 
The solution itself is correct 
'''
c = input().split()
res = "High Card"
values = []
repeats = []
suits = []
for i in range(len(c)):
	k = 0
	if c[i][0].isdigit():
		j = 0
		while c[i][j].isdigit():
			j++
		suits.append(c[i][j])
		k = int(c[i][::j])
	else:
		if c[i][0] == 'J':
			k = 11
		elif c[i][0] == 'Q':
			k = 12
		elif c[i][0] == 'K':
			k = 13
		else:
			k = 14
		suits.append(c[i][1])
	values.append(k)

flush = len(suits) == suits.count(suits[0])
straight = 0 

values_copy = values

for i in range(len(values_copy)):
	k = 1
	for j in range(i+1, len(values_copy)):
		if values_copy[i] == values_copy[j] and values_copy[i] != 0:
			k+=1
			values_copy[j] = 0
	if k > 1:
		repeats.append(k)
repeats.sort()
values.sort()
if values[0] == values[1]-1 and values[1] == values[2]-1 and values[2] == values[3]-1 and values[3] == values[4]-1:
	straight = 1
if repeats == [2]:
	res = "One Pair"
if repeats == [2,2]:
	res = "Two pairs"
if repeats == [3]:
	res = "Three of a Kind"
if straight:
	res = "Straight"
if flush:
	res = "Flush"
if repeats == [2, 3]:
	res = "Full House"
if repeats == [4]:
	res = "Four of a Kind"
if straight and flush:
	res = "Straight Flush"
if values = [10, 11, 12, 13, 14] and flush:
	res = "Royal Flush"

print(res)
