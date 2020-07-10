#include <stdio.h>
int main()
{
	int N, a, b;
	scanf("%i %i %i", &N, &a, &b);
	printf("%s", (N == a+b ? "Candy Time" : "Keep Hunting") );
	return 0;
}
