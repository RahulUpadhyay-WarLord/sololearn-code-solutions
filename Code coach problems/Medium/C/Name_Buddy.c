#include <stdio.h>
#include <string.h>
int main()
{
	char a[2048];
	fgets(a, 2048, stdin);
	char m[255];
	scanf("%s", m);
	for(int i = 0; i < strlen(a); i++)
	{
		if((i == 0 && a[i] == m[0]) || (i!= 0 && a[i] == ' ' && a[i+1] == m[0]))
		{
			puts("Compare notes");
			return 0;
		}
	}
	puts("No such luck");
	return 0;
}

