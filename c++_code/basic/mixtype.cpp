#include<iostream>

struct years
{
	int year;
};

int main()
{
	years s1, s2, s3;
	s1.year = 1998;
	years* pa = &s2;
	pa->year = 1999;
	years trio[3];
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const years* arp[3] = {&s1, &s2, &s3};
	std::cout << arp[1]->year << std::endl;
	const years** ppa = arp;
	auto ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb+1))->year << std::endl;
	return 0;
}