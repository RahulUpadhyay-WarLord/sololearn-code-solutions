/*
 * This solution on my Sololearn account:
 * https://code.sololearn.com/cNWMbiSIhRDM/?ref=app
 * Summations community puzzle solution
 * Works for any size numbers and
 * math operations:
 * +,-,/,*,^
Djivs, 2020
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() 
{
    int firstNumber, secondNumber;
    char operation[255];
    scanf("%i", &firstNumber);
    scanf("%i", &secondNumber);
    scanf("%s", operation);
    char numberString[255];
    for(int i = 1; 
    i < strlen(operation); i++)
    {
     numberString[i-1] = operation[i];   
    }
    int number = atoi(numberString);
    long long total = 0;
    for(int i = firstNumber;
    i <= secondNumber; i++)
    {
        switch(operation[0])
        {
            case '+':
                total += i+number;
                break;
            case '-':
                total += i-number;
                break;
            case '/':
                total += i/number;
                break;
            case '*':
                total += i*number;
                break;
            case '%':
                total += i%number;
                break;
            case ':':
                total += i/number;
                break;
            case '^':
                total += pow(i, number);
                break;
                
        }
    }
    
    printf("%lld", total);
    return 0;
}
