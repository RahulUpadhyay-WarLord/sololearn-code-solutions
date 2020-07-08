#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
		{
			if(a[i-1] != a[i+1])
			{
				cout << "false";
				return 0;
			}
		}
	}
	cout << "true";
	return 0;
}
