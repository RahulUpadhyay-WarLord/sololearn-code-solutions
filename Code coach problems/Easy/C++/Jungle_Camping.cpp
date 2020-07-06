#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++)
	{
		if(i == 0 || a[i] == ' ')
		{
			if(i != 0) i++;
			switch (a[i])
			{
				case 'S':
				cout << "Snake ";
				break;
				case 'G':
				cout << "Lion ";
				break;
				case 'R':
				cout << "Tiger ";
				break;
				case 'C':
				cout << "Bird ";
				break;
			}
		}
	}
	return 0;
}
