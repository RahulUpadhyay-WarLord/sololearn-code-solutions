#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 10)
		cout << "High Five";
	else if(n > 0)
		for(int i = 0;i < n;i++)
			cout << "Ra!";
	else
		cout << "shh";
}
