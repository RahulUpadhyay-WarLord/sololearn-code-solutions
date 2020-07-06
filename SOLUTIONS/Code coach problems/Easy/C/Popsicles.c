#include <stdio.h>

int main() {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	if (b>=a && b%a == 0)
		puts("give away");
	else
		puts("eat them yourself");

	return 0;
}
