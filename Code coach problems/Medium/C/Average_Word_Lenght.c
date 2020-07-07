#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char a[255];
	gets(a);
	float sum = 0;
	float k = 1;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
			k++;
		else if(isalpha(a[i]))
			sum++;
	}
	printf("%i", (int)(ceil(sum/k)));
}
