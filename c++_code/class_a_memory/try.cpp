#include<iostream>

int & bj(int & a, int & b);

int main()
{
	using std::cout;
	using std::endl;
	int x, y;
	x = 10;
	y = 20;
	int & c = bj(x, y);
	cout << "c = " << c << endl;
	c = 40;
	cout << "c = " << c << endl;
	cout << "b = " << y << endl;
	int & d = x;
	cout << "d = " << d << endl;
	d = 40;
	cout << "d2 = " << d << endl;
	cout << "x = " << x << endl;
	cout << endl << "222" << endl;
	return 0;
}

int & bj(int & a, int & b)
{
	b = a + b;
	return b;
}