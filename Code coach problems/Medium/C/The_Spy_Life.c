#include <stdio.h>
#include <string.h>
int main()
{
	char m[255];
	gets(m);
	for(int i = strlen(m)-1; i >= 0; i--)
	{
		if(isalpha(m[i]) || m[i] == ' ')
		printf("%c", m[i]);
	}
}
