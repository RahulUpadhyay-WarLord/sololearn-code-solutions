#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a;
	cin.ignore(32676, '\n');
	getline(cin, a);
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		if(a[i] == ' ')
		{
			if(n % stoi(a.substr(0, i)) != 0)
			{
				cout << "not divisible by all";
				return 0;
			}
			else
			{
				a.erase(0, i+1);
				i = 0;
			}
		}
	}
	
	if(n % stoi(a) == 0)
	cout << "divisible by all";
	else
	cout << "not divisible by all";
}
