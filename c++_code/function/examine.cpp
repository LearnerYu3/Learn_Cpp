#include<iostream>

int main()
{
	using namespace std;
	int ** pp;
	int n = 13;
	int *p1 = new int;
	pp = &p1;
	*pp = &n;
	cout << pp << endl;
	cout << *pp << endl;
	cout << **pp << endl;
	cout << p1 << " and &p1" << &p1 <<" and &n " << &n << endl;
	cout << *p1 << endl;
	return 0;
}