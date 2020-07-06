#include <stdio.h>
#include <string.h>
int main()
{
	char s[255];
	gets(s);
	int i = 0;
	for(; i < strlen(s); i++)
	{
		if(s[i] == 'T')
		{
			int p = i;
			while(i < strlen(s) && s[i] != '$' && s[i] != 'G')
				i++;
			if(i != strlen(s) && s[i] == '$')
				break;
			i = p;
		}
		else if(s[i] == '$')
		{
			int p = i;
			while(i < strlen(s) && s[i] != 'T' && s[i] != 'G')
				i++;
			if(i != strlen(s) && s[i] == 'T')
				break;
			i = p;
		}
	}
	if(i == strlen(s))
		printf("quiet");
	else 
		printf("ALARM");

}
