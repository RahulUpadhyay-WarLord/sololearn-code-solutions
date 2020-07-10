#include <stdio.h>
#include <string.h>
int main()
{
	char a[255];
	fgets(a, 255, stdin);
	int i = 0;
	for(; i < strlen(a); i++)
	{
		for(int j = i+1; j < strlen(a); j++)
		{
			if(a[i] == a[j]):
				goto End;
		} 
	}
	End:
	printf("%s", (i == strlen(a) ? "true" : "false"));
	return 0;
}
