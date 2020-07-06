#include <stdio.h>

int main() {
	int n;
	scanf("%i", &n);
	if(n > 10)
		puts("High Five");
	else if(n > 0)
		for(int i = 0;i < n;i++)
			puts("Ra!");
	else
		puts("shh");
	return 0;
}
