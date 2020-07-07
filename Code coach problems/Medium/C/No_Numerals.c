#include <stdio.h>
#include <string.h>
int main()
{
	char phrase[255];
	fgets(phrase, 255, stdin);
	for (int i = 0; i < strlen(phrase) ; i++)
	{
		if (phrase[i] >= '0' && phrase[i] <= '9')
		{
			switch (phrase[i])
			{
				case '0':
					printf("zero");
					break;
				case '1':
					if(phrase[i+1] == '0')
					{
						printf("ten");
						i++;
					}
					else
						printf("one");
					break;
				case '2':
					printf("two");
					break;
				case '3':
					printf("three");
					break;
				case '4':
					printf("four");
					break;
				case '5':
					printf("five");
					break;
				case '6':
					printf("six");
					break;
				case '7':
					printf("seven");
					break;
				case '8':
					printf("eight");
					break;
				case '9':
					printf("nine");
					break;
			}
		}
		else 
			printf("%c", phrase[i]);
	}
}
