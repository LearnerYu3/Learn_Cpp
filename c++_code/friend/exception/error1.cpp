#include<iostream>
#include<cstdlib>
double hmean(double a, double b);
using std::cout;

int main()
{
	double x, y, z;
	cout << "Enter two numbers: ";
	while (std::cin >> x >> y)
	{
		z = hmean(x, y);
		cout << "Harmonic mean of " << x << " and " << y
			<< " is " << z << std::endl;
		cout << "Enter next set of numbers <q to quit>: ";
	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		cout << "untenable arguments to hmean()\n";
		std::abort();
	}
	return 2.0 * a * b /(a + b);
}