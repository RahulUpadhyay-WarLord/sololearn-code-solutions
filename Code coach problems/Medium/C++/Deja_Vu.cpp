#include <iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); i++)
	{
		for(int j = i+1; j < a.size(); j++)
		{
			if(a[i] == a[j])
			{
				cout << "Deja Vu";
				return 0;
			}
		}
	}
	cout << "Unique";
}
