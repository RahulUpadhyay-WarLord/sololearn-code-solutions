#include <iostream>
#include <string>
using namespace std;
short int points(string s)
{
	if(s == "Lettuce")
		return 5;
	else if(s == "Carrot")
		return 4;
	else if(s == "Mango")
		return 9;
	return 0;
}
int main()
{
	int p = 0;
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
		{
			p += points(a.substr(0, i));
			a.erase(0, i+1);
			i = 0;
		}
		else if(i == a.size()-1)
			p+=points(a);
	}
	cout << (p > 9 ? "Come on Down!" : "Time to wait");
}
