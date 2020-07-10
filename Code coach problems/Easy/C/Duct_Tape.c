#include <stdio.h>
int main()
{
	int w, h;
	scanf("%i %i", &w, &h);
	printf("%i", ( (w*h*2) % 10 == 0 ? w*h*2/10 : w*h*2/10 + 1) );
	return 0;
}
