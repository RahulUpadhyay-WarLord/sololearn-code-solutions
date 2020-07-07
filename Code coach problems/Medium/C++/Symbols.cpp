#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(isalnum(a[i]) || a[i] == ' ')
			cout << a[i];
	}
}

