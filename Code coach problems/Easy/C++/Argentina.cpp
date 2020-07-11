#include <iostream>
using namespace std;

int main() {
	//p - pesos, d - dollars
	int p, d;
	cin >> p >> d;
	//convert pesos to dollars
	p /= 50;
	//if pesos converted value is less than dollars value,
	//print "Pesos". Else, print "Dollars"
	cout << ((p < d) ? "Pesos" : "Dollars") ;
	return 0;
}
