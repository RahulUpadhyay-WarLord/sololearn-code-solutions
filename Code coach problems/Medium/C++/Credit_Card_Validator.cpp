#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string a;
	cin >> a;
	vector<int> b;
	for(int i = static_cast<int>(a.size()) -1; i >= 0; i--)
	{
		b.push_back(a[i] - '0');
	}
	
	
	for(int i = 1; i < static_cast<int>(b.size()); i+=2)
	{
		b[i]*=2;
	}
	
	
	for(int i = 0; i < static_cast<int>(b.size()); i++)
	{
		if(b[i] > 9)
			b[i] -= 9;
	}
	
	
	long long int sum = 0;
	
	for(int i = 0; i < static_cast<int>(b.size()); i++)
	{
		sum += b[i];
	}
	
	
	if(sum % 10 == 0 && b.size() == 16)
		cout << "valid";
	else
		cout << "not valid";
	
	return 0;
}
