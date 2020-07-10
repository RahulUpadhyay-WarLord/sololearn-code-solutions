year = [0, 0]
month = [0, 0]
day = [0, 0]
for i in range(2):
	date = input().split()
	if date[0] == "January":
		month[i] = 1
	elif date[0] == "February":
		month[i] = 2
	elif date[0] == "March":
		month[i] = 3
	elif date[0] == "April":
		month[i] = 4
	elif date[0] == "May":
		month[i] = 5
	elif date[0] == "June":
		month[i] = 6
	elif date[0] == "July":
		month[i] = 7
	elif date[0] == "August":
		month[i] = 8
	elif date[0] == "September":
		month[i] = 9
	elif date[0] == "October":
			month[i] = 10
	elif date[0] == "November":
		month[i] = 11
	else:
		month[i] = 12;
	day[i] = int(date[1][:-1])
	year[i] = int(date[2])


total = 0

d = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

while month[0] != month[1] or day[0] != day[1]:
	day[0]+=1
	if month[0] != 2:
		if day[0] > d[month[0] - 1]:
			day[0] = 1
			if month[0] == 12:
				year[0]+=1
				month[0] = 1
			else:
				month[0]+=1
	else:
		if year[0] % 4 == 0 and day[0] == 30:
			month[0]+=1
			day[0]=1
		elif year[0] % 4 != 0 and day[0] == 29:
			month[0]+=1
			day[0]=1
	total+=1

for i in range(year[0]+1, year[1]+1):
	if i % 4 == 0:
		total+=366
	else:
		total+=365

print(total)

