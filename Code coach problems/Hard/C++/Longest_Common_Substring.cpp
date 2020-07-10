#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string line;
	getline(cin, line);
	
	
	vector <string> words;
	
	for(int i = 0; i < line.size(); i++)
	{
		if(line[i] == ' ')
		{
			words.push_back(line.substr(0, i));
			line.erase(0, i+1);
			i = 0;
		}
	}
	
	words.push_back(line);
	
	
	string res = "";
	
	
	
	for(int i = 1; i <= words[0].size(); i++)
	{
		for(int j = 0; j < words[0].size(); j++)
		{
			string check = words[0].substr(j, i);
			int l;
			for(l = 0; l < words.size(); l++)
			{
				if(words[l].find(check) == string::npos)
					break;
			}
			if(l == words.size())
			{
				if(check.size() > res.size())
					res = check;
				else if(check.size() == res.size())
					res = min({check, res});
			}
		}
	}
	
	cout << res;
		
	
	
	
	
}
