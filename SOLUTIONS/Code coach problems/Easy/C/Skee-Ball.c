#include <stdio.h>

int main() {
	int a, b;
	scanf("%i %i", &a, &b);
	printf("%s", ((a >=b*12) ? "Buy it!" : "Try again"));
	return 0;
}
