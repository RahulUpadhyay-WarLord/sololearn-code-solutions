#include <iostream>
int main()
{
	int N, a , b;
	std::cin >> N >> a >> b;
	std::cout << (N == a+b ? "Candy Time" : "Keep Hunting");
}
