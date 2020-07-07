#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	if(b[0] == 'A')
	{
		int c = 0;
		for(int i = 0; i < a.size(); i++)
		{
			if(isdigit(a[i]))
			{
				c*=10;
				c+=a[i] - '0';
			}
			else
			{
				if(c < 10) 
					cout << 0;
				cout << c << a[i];
				c = 0;
			}
		}
		if(c < 10) 
			cout << 0 << c;
		else 
			cout << c;
	}
	else
	{
		int c = 0;
		for(int i = 0; i < a.size(); i++)
		{
			if(isdigit(a[i]))
			{
				c*=10;
				c+=a[i] - '0';
			}
			else
			{
				c+=12;
				cout << c << a[i];
				c = 0;
			}
		}
		if(c < 10) 
			cout << 0 << c;
		else 
			cout << c;
	}
}
