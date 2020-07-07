#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[255];
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		if(isalnum(a[i]) || a[i] == ' ')
		printf("%c", a[i]);
	}
}
