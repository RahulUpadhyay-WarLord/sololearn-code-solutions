#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float c, m, y, k;
	cin >> c >> m >> y >> k;
	
	int r = round(255*(a-c)*(1-k));
	int g = round(255*(1-m)*(1-k));
	int b = round(255*(1-y)*(1-k));
	cout << r << "," << g << "," << b; 
	
	return 0;
}
