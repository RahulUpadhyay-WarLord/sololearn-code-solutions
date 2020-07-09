#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k;
	cin >> k;
	vector <int> d(k+1);
	d[1] = d[2] = 1;
	for(int i = 3; i <= k; i++)
		d[i] = d[i - d[i-1]] + d[i-d[i-2]];
	cout << d[k];
	return 0;
}
