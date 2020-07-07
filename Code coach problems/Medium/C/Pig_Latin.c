#include <stdio.h>
#include <string.h>
int main()
{
	char phrase[255];
	fgets(phrase, 255, stdin);
	int i;
	char s;
	for(i = 0; i < strlen(phrase);i++)
	{
		if(phrase[i] == ' ' || i == 0)
		{
			s = ((i == 0) ? phrase[i] : phrase[i+1]);
			i += ((i== 0) ? 1: 2);
			while(phrase[i] != ' ' && i < strlen(phrase))
			{
				printf("%c", phrase[i]);
				i++;
			}
			printf("%cay ", s);
			i--;
		}
	}
}
