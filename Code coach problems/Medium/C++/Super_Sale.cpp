#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	vector <float> p;
	cin >> a;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ',')
		{
			p.push_back(stof(a.substr(0, i)));
			a.erase(0, i+1);
			i = 0;
		}
	}
	p.push_back(stof(a));
	sort(p.begin(), p.end());
	float s = 0;
	for(int i = 0; i < p.size()-1; i++)
	{
		s += p[i]*0.3*1.07;
	}
	cout << static_cast<int>(s);
}
