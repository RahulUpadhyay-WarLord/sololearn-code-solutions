#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		cout << a[0] << b[0] << " ";
	}
	return 0;
}
