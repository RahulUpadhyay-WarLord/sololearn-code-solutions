#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << (a%b >= 7 ? "Cake Time" : "I need to buy " + to_string(7 - a%b) + " more");
}
