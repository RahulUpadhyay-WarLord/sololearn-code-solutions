#include <stdio.h>
#include <math.h>
int main() {
	int houses;
	scanf("%d", &houses);

	printf("%.0f", ceil(100.0/(float)((float)houses/2.0)));

	return 0;
}
