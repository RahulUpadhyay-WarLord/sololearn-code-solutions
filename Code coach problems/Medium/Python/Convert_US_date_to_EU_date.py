year = ""
month = ""
day = ""
date = input()
if not(date[0].isdigit()):
	i = 0
	while date[i] != ' ':
		i+=1
	buf = date[:i]
	if(buf == "January"):
		month = '1';
	elif(buf == "February"):
		month = '2';
	elif(buf == "March"):
		month = '3';
	elif(buf == "April"):
		month = '4';
	elif(buf == "May"):
		month = '5';
	elif(buf == "June"):
		month = '6';
	elif(buf == "July"):
		month = '7';
	elif(buf == "August"):
		month = '8';
	elif(buf == "October"):
		month = '9';
	elif(buf == "November"):
		month = '10';
	elif(buf == "December"):
		month = '11';
	else:
		month = '12';

	i+=1
	while date[i] != ',':
		day += date[i]
		i+=1
	i+=2
	while i != len(date):
		year += date[i]
	i+=1
else:
	i = 0
	while date[i] != '/':
		month += date[i]
		i+=1
	i+=1
	while date[i] != '/':
		day += date[i]
		i+=1
	i+=1
	while i != len(date):
		year += date[i]
		i+=1

print(day + "/" + month + "/" + year)

