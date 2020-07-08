#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int year[2], month[2], day[2];

	for(int i = 0; i < 2; i++)
	{
		year[i]=0, month[i]=0, day[i]=0;
		string date;
		cin >> date;
		if(date == "January")
			month[i] = 1;
		else if(date == "February")
			month[i] = 2;
		else if(date == "March")
			month[i] = 3;
		else if(date == "April")
			month[i] = 4;
		else if(date == "May")
			month[i] = 5;
		else if(date == "June")
			month[i] = 6;
		else if(date == "July")
			month[i] = 7;
		else if(date == "August")
			month[i] = 8;
		else if(date == "September")
			month[i] = 9;
		else if(date == "October")
			month[i] = 10;
		else if(date == "November")
			month[i] = 11;
		else
			month[i] = 12;
		cin >> date;
		int j = 0;
		while(date[j] != ',')
		{
			day[i] = day[i]*10 + date[j] - '0';
			j++;
		}
		cin >> date;
		j = 0;
		while(j != date.size())
		{
			year[i] = year[i]*10 + date[j] - '0';
			j++;
		}
	}


	long long int total = 0;

	int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


	while(month[0] != month[1] || day[0] != day[1])
	{
		day[0]++;
		if(month[0] != 2)
		{
			if(day[0] > d[month[0] - 1])
			{
				day[0] = 1;
				if(month[0] == 12)
				{
					year[0]++;
					month[0] = 1;
				}
				else
					month[0]++;
			}
		}
		else
		{
			if(year[0] % 4 == 0 && day[0] == 30)
			{
				month[0]++;
				day[0]=1;
			}
			else if(year[0] % 4 != 0 && day[0] == 29)
			{
				month[0]++;
				day[0]=1;
			}
		}

		total++;
	}


	for(int i = year[0]+1; i <=year[1]; i++)
	{
		if(i % 4 == 0)
			total+=366;
		else
			total+=365;
	}


	cout << total << endl;


	return 0;
}
