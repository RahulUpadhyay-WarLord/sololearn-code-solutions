#include <iostream>
int main()
{
	int w, h;
	std::cin >> w >> h;
	std::cout << ((w*h*2) % 10 == 0 ? w*h*2/10 : w*h*2/10 + 1);
}
