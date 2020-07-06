#include <stdio.h>
#include <string.h>

int main() {
	char a[255];
	gets(a);
	for(int i = strlen(a)-1; i>=0; i--)
		printf("%c", a[i]);
	return 0;
}
