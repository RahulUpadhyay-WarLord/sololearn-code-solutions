#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	float sum = n*5.0 + 40.0;
	int tax = round(sum/10.0);
	cout << (int)(tax + sum);
	return 0;
}
