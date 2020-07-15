#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    cout << "Archimed method(22/7): " << 22.0/7.0 << endl;
    long double pi = 0;
    bool m = 0;
    for(int i = 1; i < 100000; i+=2)
    {
        if(!m)
        {
            pi += (double)(4.0/i);
            m = 1;
        }
        else
        {
            pi -= (double)(4.0/i);
            m = 0;
        }
    }
    cout << "Teilor function method(100000 iterations): " << pi << endl;
    pi = 0;
    m= 0;
    for(int i = 1; i < 25; i+=2)
    {
        if(!m)
        {
            pi += (long double)(4.0/(pow(2,i) * i));
            pi +=  (long double)(4.0/(pow(3,i)*i));
            m = 1;
        }
        else
        {
            pi -= (long double)(4.0/(pow(2,i)*i));
            pi -=  (long double)(4.0/(pow(3,i)*i));
            m = 0;
        }
    }
    cout << "Eulers solution(25 iterations - 9 digits): " << pi << endl;
    return 0;
}
