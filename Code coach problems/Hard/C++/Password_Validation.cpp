#include <iostream>
#include <string>
using namespace std;
int main()
{
	string m;
	cin >> m;
	int specChar = 0;
	int num = 0;
	bool l = m.size() >= 7;
	for(int i = 0; i < m.size(); i++)
	{
		if(isdigit(m[i])) 
			num++;
		else if(!isalnum(m[i])) 
			specChar++;
	}
	cout << ((l && num > 1 && specChar > 1) ? "Strong" : "Weak");
}
