#include <stdio.h>

int main() {
	int n;
	scanf("%i", &n);
	if(n*3 == 21)
		puts("Broke Even");
	else if(n*3 < 21)
		puts("Loss");
	else
		puts("Profit");
	return 0;
}
