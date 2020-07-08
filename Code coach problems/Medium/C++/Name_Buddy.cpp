#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	string m;
	cin >> m;
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		if((i == 0 && a[i] == m[0]) || (i!= 0 && a[i] == ' ' && a[i+1] == m[0]))
		{
			cout << "Compare notes";
			return 0;
		}  
	}
	cout << "No such luck";
}
