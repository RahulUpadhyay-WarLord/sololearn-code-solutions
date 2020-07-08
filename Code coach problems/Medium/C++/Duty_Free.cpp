#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
		{
			if(stof(a.substr(0, i))*1.1 >= 20)
			{
				cout << "Back to the store";
				return 0;
			}
			else
			{
				a.erase(0, i+1);
				i = 0;
			}
		}
		else if(i == a.size()-1)
		{
			if(stof(a)*1.1 >= 20)
			{
				cout << "Back to the store";
				return 0;	
			}
		}
	}
	cout << "On to the terminal";
}
