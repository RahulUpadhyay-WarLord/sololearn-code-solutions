/*
 * Test code, 5/6 tests passed
*/


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
	
	int count = 1;
	do
	{
		count++;
	}
	while(next_permutation(s.begin(), s.end()) && s != n);
	
	cout << count;
	
	
	
	return 0;
}
