#include <iostream>
#include <string>
using namespace std;
int main()
{
	string myName, people;
	int agentsAmount;

	int currentPerson = 0;
	int time = 0;

	cin >> myName;
	cin >> agentsAmount;
	cin.ignore(32676, '\n');
	getline(cin, people);

	for(int i = 0; i < people.size();i++)
	{
		if(people[i] == ' '|| i == 0)
		{
			currentPerson++;
			if((i != 0 && people[i+1] > myName[0]) || (i == 0 && people[0] > myName[0]))
			{
				currentPerson--;
				break;
			}
		}
	}
	time = (currentPerson/agentsAmount + 1)*20;

	cout << time << endl;
	
	return 0;
}
