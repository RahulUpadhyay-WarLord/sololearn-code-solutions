#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int year=0, month=0, day=0;
	char date[255];
	scanf("%s", date);
	if(!isdigit(date[0]))
	{
		if(strstr(date, "January"))
			month = 1;
		else if(strstr(date, "February"))
			month = 2;
		else if(strstr(date, "March"))
			month = 3;
		else if(strstr(date, "April"))
			month = 4;
		else if(strstr(date, "May"))
			month = 5;
		else if(strstr(date, "June"))
			month = 6;
		else if(strstr(date, "July"))
			month = 7;
		else if(strstr(date, "August"))
			month = 8;
		else if(strstr(date, "October"))
			month = 9;
		else if(strstr(date, "November"))
			month = 10;
		else if(strstr(date, "December"))
			month = 11;
		else
			month = 12;
		scanf("%s", date);
		int i = 0;
		while(date[i] != ',')
		{
			day = day*10 + date[i] - '0';
			i++;	
		}
		scanf("%s", date);
		i = 0;
		while(i != strlen(date))
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
		while(i != strlen(date))
		{
			year = year*10 + date[i] - '0';
			i++;
		}
	}
	
	printf("%i/%i/%i", day, month, year);
}
