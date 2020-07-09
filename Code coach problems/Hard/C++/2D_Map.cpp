#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	int x1=-1, x2=-1;
	int y1=-1, y2=-1;
	int x=0, y=0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == 'P')
		{
			if(x1 == -1 && x2 == -1)
			{
				x1 = x;
				y1 = y;
			}
			else
			{
				x2 = x;
				y2 = y;
			}
		}
		x++;
		if(a[i] == ',')
		{
			x = 0;
			y++;
		}
	}

	cout << abs(x2-x1) + abs(y2-y1);
}
