#include<iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;
	cout << "Valuee: updates = " << updates << ", *p_updates = " << *p_updates << endl;
	cout << "Addresses: &update = " << &updates << ", p_updates = " << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	// an initialized pointer
	int * pt = &updates;
	cout << "Value of pt = " << pt << endl;
	cout << "Value of *pt = " << *pt << endl;
	return 0;
}