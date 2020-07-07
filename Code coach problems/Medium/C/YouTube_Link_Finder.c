#include <stdio.h>
#include <string.h>
int main()
{
	char a[255];
	fgets(a, 255, stdin);
	int i;
	for(i = strlen(a)-1; i >= 0; i--)
	{
		if(a[i] == '=' || a[i] == '/')
		{
			i++;
			break;
		}
	}

	for(; i < strlen(a); i++)
		printf("%c", a[i]);
}
