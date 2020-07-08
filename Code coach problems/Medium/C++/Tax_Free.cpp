#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	float t = 0;
	for(int i = 0; i < static_cast<int>(a.size()); i++)
	{
		if(a[i] == ',')
		{
			int c = stoi(a.substr(0, i));
			if(c < 20)
				t += c*1.07;
			else
				t+=c;
				
				
			a.erase(0, i+1);
			i = 0;
		}
	}
	
	if(stoi(a) < 20)
		t += stoi(a)*1.07;
	else
		t += stoi(a);
	
	cout << t;
	
	return 0;
}
