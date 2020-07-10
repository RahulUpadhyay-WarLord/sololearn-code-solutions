#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* hex( int a )
{
	char *res = (char *)malloc(255);
	char h[] = "0123456789abcdef";
	int c = 0;
	while( a )
	{
		res[c] = h[a % 16];
		a /= 16;
		c++;
	}
	for(int i = 0; i < strlen(res)/2; i++)
	{
		char buf = res[i];
		res[i] = res[strlen(res) - i-1];
		res[strlen(res) - i - 1] = buf;
	}
	return res;
}


int main()
{
	int r, g, b;
	scanf( "%i %i %i", &r, &g, &b );
	printf( "#%s%s%s", hex(r), hex(g), hex(b) ); 
	return 0;
}
