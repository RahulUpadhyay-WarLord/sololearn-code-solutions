#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		if(a[i] == ' ')
		{
			if(stoi(a.substr(0, i)) % 2 == 0)
			{
				cout << a.substr(0,i)+" ";
			}
			a.erase(0, i+1);
			i = 0;
		}
	}
	
	if(stoi(a) % 2 == 0)
		cout << a;
}
