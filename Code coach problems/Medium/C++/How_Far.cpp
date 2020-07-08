#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int x = a.find_first_of("P");
	int y = a.find_first_of("H");
	cout << ((x>y) ? x-y-1 : y-x-1);
	return 0;
}
