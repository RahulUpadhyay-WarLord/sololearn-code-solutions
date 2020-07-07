#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[255];
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		if(isalpha(a[i]))
		{
			if(isupper(a[i])) 
				a[i] += 32;
			a[i] = (char)(122 - (int)a[i] + 97);
		}
	}
	printf("%s", a);
}
