#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a;
	getline(cin, a);
	for(int i = 0; i < (int)a.size(); i++)
	{
		if(isdigit(a[i]))
		{
			for(int j = 0; j < a[i] - '0'; j++)
				cout << a[i-1];
		}
	}
	return 0;
}
