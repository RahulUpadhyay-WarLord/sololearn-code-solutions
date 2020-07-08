#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	int t = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ',')
		{
			if(a.substr(0, i) == b)
			{
				cout << t+5;
				return 0;
			}
			else
			{
				a.erase(0, i+1);
				i = 0;
				t += 5;
			}	
		}
	}
	cout << t+5;
}
