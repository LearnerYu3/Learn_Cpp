#include<iostream>

int main()
{
	using namespace std;
	double * p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and p3[1] is " << p3[1] << endl;
	p3 = p3 -1;
	delete [] p3;

	double wages[3] = {1000.0, 2000.0, 3000.0};
	short stacks[3] = {3, 2, 1};
	// two ways to get the address of an array
	double* pw = wages; // you can find wages = &wages[0]
	short* ps = &stacks[0];
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	return 0; 
}