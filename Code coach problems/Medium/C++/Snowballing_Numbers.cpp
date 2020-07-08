#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int buf;
		cin >> buf;
		
		if(buf >= sum)
		{
			sum+=buf;
		}
		else
		{
			cout << "false";
			return 0;
		}
		
		
	}
	cout << "true";
}
