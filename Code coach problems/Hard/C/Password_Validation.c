#include <stdio.h>
#include <string.h>
int main()
{
	char m[255];
	scanf("%s", m);
	int specChar = 0;
	int num = 0;
	int l = strlen(m) >= 7;
	for(int i = 0; i < strlen(m); i++)
	{
		if(isdigit(m[i])) num++;
		else if(!isalnum(m[i])) specChar++;
	}
	printf((l && num > 1 && specChar > 1) ? "Strong" : "Weak");
}
