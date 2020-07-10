#include <stdio.h>
int main()
{
	for(int i = 0; i < 6; i++)
	{
		int a;
		scanf("%i", &a);
		if ( a % 3 == 0 )
		{
			printf("Pop ");
		}
		else if ( a % 2 == 1 )
		{
			printf("Snap ");
		}
		else
		{
			printf("Crackle ");
		}
	}
	return 0;
}
