myName = input()
agentsAmount = int(input())
people = input().split()

peopleToWait = len(people)

for i in range(len(people)):
	if ord(people[i][0]) > ord(myName[0]):
		peopleToWait -=1

time = int(peopleToWait/agentsAmount + 1)*20
print(time)
