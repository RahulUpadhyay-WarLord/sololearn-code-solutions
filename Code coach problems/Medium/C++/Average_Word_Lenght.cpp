#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	float sum = 0;
	float k = 1;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == ' ')
			k++;
		else if(isalpha(a[i])) 
			sum++;
	}
	cout << ceil(sum/k);
}
