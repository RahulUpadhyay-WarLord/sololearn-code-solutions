/*
 * Work in progress...
*/
#include <stdio.h>
#include <string.h>
short int cost(char *s)
{
	if(s == "Pizza" || s == "Nachos")
		return 6;
	else if(s == "Cheeseburger")
		return 10;
	else if(s == "Water")
		return 4;
	else
		return 5;
}
int main()
{
	char a[255];
	int total = 0;
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			char b[255];
			strncpy(b, a, i);
			
		}
	}
}
