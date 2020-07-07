#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int sum = 0;
	for(int i = 0; i < N;i++)
	{
		int a;
		cin >> a;
		if(a % 2 == 0) 
			sum+=a;
	}
	cout << sum;
}
