#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int n;
	cin >> n;
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		cout << a[i];
		if((i+1) % n == 0 && i != static_cast<int>(a.size() - 1)
		{
			cout << "-";
		}
	}
	return 0;
}
