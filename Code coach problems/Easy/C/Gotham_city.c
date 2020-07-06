#include <stdio.h>

int main() {
	int a;
	scanf("%i", &a);
	if (a<5)
		puts("I got this!");
	else if (a>=5 && a<=10)
		puts("Help me Batman");
	else
		puts("Good Luck out there!");
	return 0;
}
