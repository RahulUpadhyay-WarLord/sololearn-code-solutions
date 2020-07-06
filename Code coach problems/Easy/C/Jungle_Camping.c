#include <stdio.h>
#include <string.h>

int main() {
	char a[1000];
	gets(a);
	for(int i = 0; i < strlen(a); i++)
	{

		if(i == 0 || a[i] == ' ')
		{
			if(i != 0) i++;
				switch (a[i])
				{
					case 'S':
						puts("Snake ");
						break;
					case 'G':
						puts("Lion ");
						break;
					case 'R':
						puts("Tiger ");
						break;
					case 'C':
						puts("Bird ");
						break;

				}
		}
	}
return 0;
}
