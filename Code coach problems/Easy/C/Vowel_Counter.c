#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[255];
	char vowels[] = "aeiou";
	fgets(a, 255, stdin);
	int t = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(isupper(a[i]))
			a[i] += 32;
		if(strchr(vowels, a[i]))
			t++;
	}
	printf("%i", t);
	return 0;
}
