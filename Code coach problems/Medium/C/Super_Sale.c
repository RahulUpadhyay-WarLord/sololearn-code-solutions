/*
You can try this code on your own, it goes pretty well, but somehow sololearn test works different.
My computer:
$ ./test                  
90,4,5
2%
Sololearn test:
Input:90,4,5
Output:1
                                  

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[255];
	float p[255];
	int c = 0;
	int s = 0;
	fgets(a, 255, stdin);
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ',' || i == strlen(a) - 1)
		{
			char b[255] = "";
			for(int j = 0; j < i - s; j++)
			{
				b[j] = a[s+j];
				if(j == i - s)
				{
					b[j+1] = '\0';
				}
			}
			int buf = atof(b);
			p[c] = buf;
			s = i+1;
			c++;
			
		}
	}
	
	for(int i = 0; i < c; i++)
	{
		for(int j = i+1; j < c; j++)
		{
			if(p[i] > p[j])
			{
				float buf = p[i];
				p[i] = p[j];
				p[j] =  buf;
			}
		}
	}
	
	
	float r = 0;
	
	for(int i = 0; i < c-1; i++)
	{
		r += p[i]*0.3*1.07;
	} 
	printf("%i", (int)r);
	return 0;
}
