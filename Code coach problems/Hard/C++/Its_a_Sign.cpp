#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	for(int i = 0; i < 4; i++)
	{
		string buf;
		cin >> buf;
		string bufCpy = buf;
		reverse(buf.begin(), buf.end());
		if(bufCpy == buf)
		{
			cout << "Open";
			return 0;
		} 
	}
	cout << "Trash";
}
