#include<iostream>
#include "mytime1.h"

int main()
{
	using std::cout;
	using std::endl;
	Time coding(4, 35);
	Time fixing(2, 47);
	Time total, diff, adjusted;
	cout << "coding time = " << coding << endl;
	cout << "fixing time = " << fixing << endl;
	total = coding + fixing;
	cout << "coding + fixing = " << total << endl;
	diff = coding - fixing;
	cout << "coding - fixing = " << diff << endl;
	adjusted = total * 1.5;
	cout << "adjusted work time = " << adjusted << endl;
	Time morefixing(3, 28);
	cout << "more fixing time = " << morefixing << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = " << total << endl;
	return 0;
}