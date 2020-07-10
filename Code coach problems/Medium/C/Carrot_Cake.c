#include <stdio.h>
#include <string.h>
int main()
{
	int a, b;
	scanf("%i %i", &a, &b);
	if(a%b >= 7)
		puts("Cake Time");
	else
		printf("I need to buy %i more", 7-a%b);
	return 0;
}
