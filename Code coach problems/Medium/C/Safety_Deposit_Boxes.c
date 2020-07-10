/*
 * Test code, not working
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[255], b[255];
	fgets(a, 255, stdin);
	fgets(b, 255, stdin);
	int t = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ',')
		{
			char *k;
			strncpy(k, a, i);
			if(k == b)
			{
				printf("%i", t+5);
				return 0;
			}
			else
			{
				char *buf = malloc(i+1);
				strncpy(buf, a, i+1);
				a = buf;
				i = 0;
				t += 5;
			}
		}
	}
	printf("%i", t+5);
	return 0;
}
