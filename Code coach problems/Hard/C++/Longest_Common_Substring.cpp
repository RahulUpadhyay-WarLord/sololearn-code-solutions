/*
Test solution, passed 5/6 Sololearn tests
*/



#include <iostream>
#include <string>
#include <vector>

#define SCI static_cast<int>
using namespace std;

int main()
{
	string buf;
	getline(cin, buf);
	
	vector <string> w;
	
	for(int i = 0; i < SCI(buf.size()); i++)
	{
		if(buf[i] == ' ')
		{
			w.push_back(buf.substr(0, i));
			buf.erase(0, i+1);
			i = 0;
		}
		else if(i == SCI(buf.size()) - 1)
			w.push_back(buf);
	}
	
	
	string max = "";
	
	
	
	
	
	
	return 0;
}
