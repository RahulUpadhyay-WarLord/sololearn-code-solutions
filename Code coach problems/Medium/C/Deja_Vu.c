#include <stdio.h>

int main()
{
	char a[255];
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		for(int j = i+1; j < strlen(a); j++)
		{
			if(a[i] == a[j])
			{
				puts("Deja Vu");
				return 0;
			}
		}
	}
	puts("Unique");
}
