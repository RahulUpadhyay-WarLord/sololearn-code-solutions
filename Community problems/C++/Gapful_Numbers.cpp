#include <iostream>
using namespace std;
int main() 
{
    
    
    int n;
    cin>>n;
    
    int c = n;
    
    while(c > 9)
        c/=10;
        
    if (n % (c*10 + n%10) == 0)
        cout << "This number is gapful.";
    else
        cout << "This number is not gapful.";
        
        
    return 0;
}
