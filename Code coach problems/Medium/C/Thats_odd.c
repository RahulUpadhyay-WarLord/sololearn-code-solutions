#include <stdio.h>

int main()
{
	int N;
	scanf("%i", &N);
	int sum = 0;
	for(int i = 0; i < N;i++)
	{
		int a;
		scanf("%i", &a);
		if(a % 2 == 0) 
			sum+=a;
	}
	printf("%i", sum);
}
