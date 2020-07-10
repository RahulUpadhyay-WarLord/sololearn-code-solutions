#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%i%i%i%i", &a, &b, &c, &d);
	printf("%i",a%15 + b%15 + c%15 + d%15);
	return 0;
}
