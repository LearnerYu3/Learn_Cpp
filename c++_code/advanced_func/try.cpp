#include<iostream>

int main()
{
	using namespace std;
	int rats = 101;
	int * pt = &rats;
	int & rodents  = *pt;
	int bunnies = 50;
	pt = &bunnies;
	cout << "rats = " << rats << ", rodents = " << rodents << endl;
	cout << "*pt = " << *pt << endl;
	cout << "rats ad = " << &rats << ", rodents ad = " << &rodents << endl;
	cout << pt << " and bun" << &bunnies << endl;
	return 0;
}