#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		if(isupper(a[i]))
		{
			a[i] += 32;
			
			if(i != 0)
				cout << "_";
			
			cout << a[i];
		}
		else
			cout << a[i];
	}

	return 0;	
}
