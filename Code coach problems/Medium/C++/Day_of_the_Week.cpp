#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int year=0, month=0, day=0;
	string date;
	cin >> date;
	if(!isdigit(date[0]))
	{
		if(date == "January")
			month = 1;
		else if(date  == "February")
			month = 2;
		else if(date  == "March")
			month = 3;
		else if(date  == "April")
			month = 4;
		else if(date  == "May")
			month = 5;
		else if(date  == "June")
			month = 6;
		else if(date  == "July")
			month = 7;
		else if(date  == "August")
			month = 8;
		else if(date  == "October")
			month = 9;
		else if(date  == "November")
			month = 10;
		else if(date  == "December")
			month = 11;
		else
			month = 12;
		cin >> date;
		int i = 0;
		while(date[i] != ',')
		{
			day = day*10 + date[i] - '0';
			i++;	
		}
		cin >> date;
		i = 0;
		while(i != date.size())
		{
			year = year*10 + date[i] - '0';
			i++;
		}
	}
	else
	{
		int i = 0;
		while(date[i] != '/')
		{
			month = month*10 + date[i] - '0';
			i++;
		}
		i++;
		
		while(date[i] != '/')
		{
			day = day*10 + date[i] - '0';
			i++;
		}
		i++;
		while(i != date.size())
		{
			year = year*10 + date[i] - '0';
			i++;
		}
	}
	
	
	int a = (14 - month)/12;
	int y = year - a;
	int m = month + 12*a - 2;
	int R = 7000+ (day + y + + y/4 - y/100 + y/400 + (31*m)/12);
	
	string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	cout << week[R % 7-1];

	
}
