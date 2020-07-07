#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	string b;
	for(int i = a.size()-1; i >= 0; i--)
	{
		if(a[i] == '=' || a[i] == '/') 
			break;
		else 
			b.push_back(a[i]);
	}
	for(int i = b.size() -1; i >= 0; i--)
		cout << b[i];
}
