/*
 * Balconies Solilearn task solution
 * Djivs, 2020
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
        //array with apartments areas
	int areas[2] = {0, 0};
        //string to input data about apartments
	string buf;
        //Then, 2 times(for apartmant A and B):
	for(int i = 0; i < 2; i++)
	{
                //Get data about current apartment
		cin >> buf;
                //Find separator(',') to split string
		auto f = buf.find_first_of(",");
                // Current area equals first number
                // multiplied by second number
                //First number - before ',' , second - after
		areas[i] = stoi(buf.substr( 0, f ) ) * stoi( buf.substr( f+1, a.size() ) );
	}
	cout << "Apartment ";
        //If first area is bigger than second, answer is A
        //Else, answer is B
	cout << (areas[0] > areas[1] ? 'A' : 'B');
        //end programm
        return 0;
}
