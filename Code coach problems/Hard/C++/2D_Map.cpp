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
		else if(a[i] == ',')
		{
			x = 0;
			y++;
		}
		else
			x++;
	}
	
	int t = 0;
	
	if(y1 != y2)
		t += (y2-y1)/2+1;
	else
		t += y1;
	
	
	if(x1 != x2)
		t += (x2-x1)/2+1;
	else
		t += x1;
		
	cout << t;
	
	
	return 0;
}
