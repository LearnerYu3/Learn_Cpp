#include<iostream>

int main()
{
	int i;
	for (i = 0; i < 10; ++i)
		std::cout << i << " ";
	std::cout << i << "\n";
	for (i = 0; i < 10; i++)
		std::cout << i << " ";
	std::cout << i << "\n";
	char c1, c2, c3;
	std::cin.get(c1).get(c2) >> c3;
	std::cout << c1 << ": " << c2 << ": " << c3 << std::endl;
	return 0;
}