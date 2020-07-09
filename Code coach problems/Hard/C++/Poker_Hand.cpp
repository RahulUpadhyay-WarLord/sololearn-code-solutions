/*
 * Test solution, passed 4/8 tests
*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	string res = "";
	int resVal = 1;
	vector <string> c;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
		{
			c.push_back(a.substr(0, i));
			a.erase(0, i+1);
			i = 0;
		}
	}
	
	c.push_back(a);
	
	vector<int> values;
	vector <int> repeats;
	vector<char> suits;
	
	for(int i = 0; i < c.size(); i++)
	{
	
		int k = 0;
		if(isdigit(c[i][0]))
		{
			int j = 0;
			while(isdigit(c[i][j]))
				j++;
			suits.push_back(c[i][j]);
			k = stoi(c[i].substr(0, j));
		}
		else
		{
			switch(c[i][0])
			{
				case 'J':
					k = 11;
					break;
				case 'Q':
					k = 12;
					break;
				case 'K':
					k = 13;
					break;
				case 'A':
					k = 14;
					break;
			}
			suits.push_back(c[i][1]);
		}
		values.push_back(k);
	}
	
	bool flush=0;
	
	if(suits[0] == suits[1] && suits[1] == suits[2] && suits[2] == suits[3] && suits[3] == suits[4])
		flush = 1;
		
	
	vector <int> values_copy = values;
	
	
	for(int i = 0; i < values_copy.size(); i++)
	{
		int k = 1;
		for(int j = i+1; j < values_copy.size(); j++)
		{
			if(values_copy[i] == values_copy[j] && values_copy[i] != 0)
			{
				k++;
				values_copy[j] = 0;
			}
		}
		
		if(k > 1)
		{
			repeats.push_back(k);
		} 
	}
	
	
	
	sort(repeats.begin(), repeats.end());
	
	sort(values.begin(), values.end());
	
	
	
	
	if(values[values.size()-1] == 14)
		res = "High Card";
	
	if(repeats.size()==1 && repeats[0] == 1)
		res = "One Pair";
	
	if(repeats.size() == 2 && repeats[0] == 2 && repeats[1] == 2)
		res = "Two Pairs";
		
	if(repeats.size() == 1 && repeats[0] == 3)
		res = "Three of a kind";
		
	if(repeats.size() == 0)
		res = "Straight";
	
	if(flush == true)
		res = "Flush";
	
	if(repeats.size() == 2 && repeats[0] == 2 && repeats[1] == 3)
		res = "Full House";
	
	if(repeats.size() == 1 && repeats[0] == 4)
		res = "Four of a Kind";
	
	if(repeats.size() == 0 && flush == true)
		res = "Straight Flush";
	
	if(values[0] == 10 && values[1] == 11 && values[2] == 12 && values[3] == 13 && values[4] == 14 && flush == true)
		res = "Royal Flush";
	
	
	
	
	
	cout << res;
	
	
	
	
	return 0;
}
