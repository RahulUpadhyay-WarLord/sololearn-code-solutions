#include <stdio.h>
int main()
{
	int n;
	int res = 0;
	scanf("%i", &n);
	while(n)
	{
		if(n % 2)
		{
			res++;
		}
		
		n /= 2;
	}
	
	printf("%i", res);
	return 0;
}
