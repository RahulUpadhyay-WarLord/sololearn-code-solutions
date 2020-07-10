#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);
	puts(a/b <= (50+a)/c ? "Meep Meep" : "Yum");
	return 0;
}
