#include <iostream>
using namespace std;

int main() {

	int a;
	int b;
	
	cin>>a>>b;
	
	if (b>=a && b%a == 0)
		cout << "give away";
	else
		cout << "eat them yourself";
		
	return 0;
}
