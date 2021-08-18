#include<iostream>
double hmean(double a, double b);
using std::cout;

int main()
{
	double x, y, z;
	cout << "Enter two numbers: ";
	while (std::cin >> x >> y)
	{
		try{
			z = hmean(x, y);
		}
		catch (const char * s)
		{
			cout << s << std::endl;
			cout << "Enter a new pair of numbers: ";
			continue;
		}
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
		throw "bad hmean() arguments: a = -b not allowed";
	return 2.0 * a * b /(a + b);
}