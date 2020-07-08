#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string hex(int a)
{
	string res = "";
	string h[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"};
	while(a)
	{
		res += h[a % 16];
		a /= 16;
	}
	reverse(res.begin(), res.end());
	return res;
}
int main()
{
	int r, g, b;
	cin >> r >> g >> b;
	cout << "#"<<hex(r)+hex(g)+hex(b);
	
}
