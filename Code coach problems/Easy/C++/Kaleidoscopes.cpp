#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	printf("%.2f", (n > 1 ? n*5.0*0.9*1.07 : n*5.0*1.07));
}
