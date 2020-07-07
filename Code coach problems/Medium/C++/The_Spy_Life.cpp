#include <iostream>
#include <string>
using namespace std;
int main()
{
	string m;
	getline(cin, m);
	for(int i = m.size() - 1; i >= 0; i--)
	{
		if(isalpha(m[i]) || m[i] == ' ')
			cout << m[i];
	}
}
