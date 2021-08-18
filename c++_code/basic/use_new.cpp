#include<iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int;
	*pt  = 1001;
	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int value = " << *pt << ": location " << pt << endl;
	double * pd = new double;
	*pd = 1000.01;
	cout << "double value = " << *pd << ": location " << pd << endl;
	cout << "size of pt = " << sizeof(pt) << ", size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd) << ", size of *pd = " << sizeof(*pd) << endl;
	int *pi = pt;
	delete pi;
	cout << pt << " and value: " << *pt << endl;
	cout << pi << " and value: " << *pi << endl;
	int* pw = new int;
	cout << "Is there a address? " << pw << endl;
	cout << *pw << endl;
	double* db = new double;
	cout << "Double pointer address: " << db << " and value: " << *db << endl;
	*db = 12.21;
	cout << "After assigning address: " << db << endl;
	delete db;
	cout << "db = " << db << ", *db = " << *db << endl;
	return 0;
}