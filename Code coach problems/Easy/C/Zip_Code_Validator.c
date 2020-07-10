#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[255];
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		if(!isdigit(a[i]))
		{
			puts("false");
			return 0;
		}
	}
	if(strlen(a) == 5)
		puts("true");
	else
		puts("false");
	return 0;
}
