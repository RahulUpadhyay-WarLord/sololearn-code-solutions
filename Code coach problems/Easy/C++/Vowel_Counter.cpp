#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	string vowels = "aeiou";
	getline(cin, a);
	int t = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(isupper(a[i]))
			a[i] += 32;
		if(vowels.find_first_of(a[i]) != string::npos)
			t++;
	}
	cout << t;
}
