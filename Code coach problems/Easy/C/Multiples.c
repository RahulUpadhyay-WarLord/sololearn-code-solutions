#include <stdio.h>
int main()
{
	int n;
	scanf("%i", &n);
	int s = 0;
	for(int i = 1; i < n; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			s += i;
	}
	printf("%i", s);
	return 0;
}
