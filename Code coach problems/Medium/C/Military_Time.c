#include <stdio.h>
#include <string.h>
int main()
{
	char a[255], b[255];
	scanf("%s %s", a, b);
	if(b[0] == 'A')
	{
		int c = 0;
		for(int i = 0; i < strlen(a); i++)
		{
			if(isdigit(a[i]))
			{
				c*=10;
				c+=a[i] - '0';
			}
			else
			{
				if(c < 10) 
					printf("0");
				printf("%i%c", c, a[i]);
				c = 0;
			}
		}
		if(c < 10)
			printf("0%i", c);
		else 
			printf("%i", c);
	}
	else
	{
		int c = 0;
		for(int i = 0; i < strlen(a); i++)
		{
			if(isdigit(a[i]))
			{
				c*=10;
				c+=a[i] - '0';
			}
			else
			{
				c+=12;
				printf("%i%c", c, a[i]);
				c = 0;
			}
		}
		if(c < 10) 
			printf("0%i", c);
		else 
			printf("%i", c);
	}
}
