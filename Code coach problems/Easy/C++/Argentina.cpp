/*
 * Sololearn Argentina Easy Task Solution
 * Djivs, 2020
*/
#include <iostream>
using namespace std;
int main()
{
	int pesos, dollars;
	//variables to store pesos and dollars values
	
	cin >> pesos >> dollars;
	//input values
	
	pesos /= 50; 
	//convert pesos to dollars
	
	cout << ( ( pesos < dollars ) ? "Pesos" : "Dollars" );
	/*
	 * if pesos converted value is less than dollars value,
	 * print "Pesos". Else, print "Dollars"
	*/
	
	return 0;
	//end programm
}
