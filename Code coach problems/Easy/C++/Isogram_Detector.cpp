#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int i = 0;
	for(; i < a.size(); i++)
	{
		if((a.substr(i+1, a.size())).find_first_of(a[i]) != string::npos)
			break;
	}
	
	cout << (i == a.size() ? "true" : "false");
}
