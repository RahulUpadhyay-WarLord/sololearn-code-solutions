#include <stdio.h>

int main() {
	int p, d;
	scanf("%i %i", &p, &d);
	p /= 50;
	printf("%s", ((p < d) ? "Pesos" : "Dollars")) ;
	return 0;
}
