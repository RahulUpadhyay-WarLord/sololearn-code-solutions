#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	
	vector<int> n;
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		
		n.push_back(static_cast<int>(a[i]));
	}
	
	
	vector <int> s = n;
	sort(s.begin(), s.end());
	vector <vector<int>> perms;
	do
	{
		perms.push_back(s);
	}
	while(next_permutation(s.begin(), s.end()));
	
	for(int i = 0; i < perms.size(); i++)
	{
		if(perms[i] == n)
		{
			cout << i+1;
			return 0;
		}
	}
	
	
	
	
	
	return 0;
}
