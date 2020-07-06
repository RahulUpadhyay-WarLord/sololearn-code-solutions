#include <stdio.h>
#include <string.h>
int main()
{
	char myName[1000], people[1000];
	int agentsAmount;

	int currentPerson = 0;
	int time = 0;

	scanf("%s %i\n", myName, &agentsAmount);
	gets(people);

	for(int i = 0; i < strlen(people);i++)
	{
		if(people[i] == ' '|| i == 0)
		{
			currentPerson++;
			if((i != 0 && people[i+1] > myName[0]) || (i == 0 && people[0] > myName[0]))
			{
				currentPerson--;
				break;
			}
		}
	}
	time = (currentPerson/agentsAmount + 1)*20;

	printf("%i", time);
}
