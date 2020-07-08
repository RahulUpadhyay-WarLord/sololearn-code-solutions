#include <iostream>
#include <string>
using namespace std;
int main()
{
	int b[2] = {0, 0};
	string a;
	for(int i = 0; i < 2; i++)
	{
		cin >> a;
		auto f = a.find_first_of(",");
		b[i] = stoi(a.substr( 0, f ) ) * stoi( a.substr( f+1, a.size() ) );
	}
	cout << "Apartment ";
	cout << (b[0] > b[1] ? 'A' : 'B');
}
