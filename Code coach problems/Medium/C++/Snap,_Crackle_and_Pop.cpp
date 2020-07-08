#include <iostream>
using namespace std;
int main()
{
	for(int i = 0; i < 6; i++)
	{
		int a;
		cin >> a;
		if(a % 3 == 0)
			cout << "Pop ";
		else if(a % 2 == 1)
			cout << "Snap ";
		else
			cout << "Crackle ";
	}
}
