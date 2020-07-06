#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n*3 == 21)
		cout << "Broke Even";
	else if(n*3 < 21)
		cout << "Loss";
	else
		cout << "Profit";
	return 0;
}
