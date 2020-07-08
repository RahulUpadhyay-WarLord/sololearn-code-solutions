#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> d;
	for(int i = 0; i < n; i++)
	{
		int buf;
		cin >> buf;
		d.push_back(buf);
	}
	sort(d.begin(), d.end());
	for(int i = d[0]; i <= d[n-1]; i++)
	{
		if(find(d.begin(), d.end(), i) == d.end())
		{
			cout << i << " ";
		}
	}
	return 0;
}
