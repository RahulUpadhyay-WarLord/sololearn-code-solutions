#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a/b <= (50+a)/c ? "Meep Meep" : "Yum");
}
