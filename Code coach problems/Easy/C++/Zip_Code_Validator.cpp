#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for(int i = 0; i < (int)(a.size()); i++)
	{
		if(!isdigit(a[i]))
		{
			cout << "false";
			return 0;
		}
	}
	if(a.size() == 5)
		cout << "true";
	else
		cout << "false";
	return 0;
}
