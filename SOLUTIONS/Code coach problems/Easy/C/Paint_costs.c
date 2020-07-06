#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%i", &n);
	float sum = n*5.0 + 40.0;
	int tax = round(sum/10.0);
	printf("%i", (int)(tax + sum));
	return 0;
}
