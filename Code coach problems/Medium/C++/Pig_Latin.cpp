#include <iostream>
#include <string>
using namespace std;
int main()
{
	string phrase;
	getline(cin, phrase);
	int i;
	char s;
	for(i = 0; i < phrase.size();i++)
	{
		if(phrase[i] == ' ' || i == 0)
		{
			s = ((i == 0) ? phrase[i] : phrase[i+1]);
			i += ((i== 0) ? 1: 2);
			while(phrase[i] != ' ' && i < phrase.size())
			{
				cout << phrase[i];
				i++;
			}
			cout << s << "ay ";
			i--;
		}
	}
}
