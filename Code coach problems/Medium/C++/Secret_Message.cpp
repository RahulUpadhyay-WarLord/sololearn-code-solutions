#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	string al = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i < a.size(); i++)
	{
		if(isalpha(a[i]))
			{
			if(isupper(a[i])) 
				a[i] += 32;
			auto it = al.begin();
			it += (al.end()- find(al.begin(), al.end(), a[i])) - 1;
			a[i] = *it;
		}
	}
	cout << a;
}
