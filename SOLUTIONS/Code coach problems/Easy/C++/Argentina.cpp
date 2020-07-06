#include <iostream>
using namespace std;

int main() {
	int p, d;
	cin >> p >> d;
	p /= 50;
	cout << ((p < d) ? "Pesos" : "Dollars") ;
	return 0;
}
