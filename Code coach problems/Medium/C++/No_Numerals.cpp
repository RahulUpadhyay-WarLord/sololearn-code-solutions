#include <iostream>
#include <string>
using namespace std;
int main()
{
	string phrase;
	getline(cin, phrase);
	for (int i = 0; i < phrase.size(); i++)
	{
		if (phrase[i] >= '0' && phrase[i] <= '9')
		{
			switch (phrase[i])
			{
				case '0':
					cout << "zero";
					break;
				case '1':
					if(phrase[i+1] == '0')
					{
						cout << "ten";
						i++;
					}
					else
						cout << "one";
					break;
				case '2':
					cout << "two";
					break;
				case '3':
					cout << "three";
					break;
				case '4':
					cout << "four";
					break;
				case '5':
					cout << "five";
					break;
				case '6':
					cout << "six";
					break;
				case '7':
					cout << "seven";
					break;
				case '8':
					cout << "eight";
					break;
				case '9':
					cout << "nine";
					break;
			}
		}
		else 
			cout << phrase[i];
	}
}
