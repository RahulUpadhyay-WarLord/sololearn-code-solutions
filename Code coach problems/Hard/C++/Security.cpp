#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int i = 0;
	for(; i < s.size(); i++)
	{
		if(s[i] == 'T')
		{
			int p = i;
			while(i < s.size() && s[i] != '$' && s[i] != 'G')
				i++;
			if(i != s.size() && s[i] == '$')
				break;
				
			i = p;
		}
		else if(s[i] == '$')
		{
			int p = i;
			
			while(i < s.size() && s[i] != 'T' && s[i] != 'G')
				i++;
				
			if(i != s.size() && s[i] == 'T')
				break;
			i = p;
		}
	}
	
	if(i == s.size())
		cout << "quiet";
	else 
		cout << "ALARM";
}
