#include <iostream>
using namespace std;

int main() {
	int n;
	int res = 0;
	cin >> n;
	while(n)
	{
		if(n%2)
		res++;
		n/=2;
	}
	cout << res;
	return 0;
}
