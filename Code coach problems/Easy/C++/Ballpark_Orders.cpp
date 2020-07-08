#include <iostream>
#include <string>
using namespace std;
short int cost(string s)
{
	if(s == "Pizza" || s == "Nachos")
		return 6;
	else if(s == "Cheeseburger")
		return 10;
	else if(s == "Water")
		return 4;
	return 5;
}
int main()
{
	string a;
	int total = 0;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
		{
			string b = a.substr(0, i);
			a.erase(0, i+1);
			i = 0;
			total+=cost(b);
			
		}
		else if(i == a.size()-1)
			total+=cost(a);
	}
	cout << (float)(total*1.07);
	return 0;
}
