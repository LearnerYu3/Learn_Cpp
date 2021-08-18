#include<iostream>
template <typename T>
void swap1(T &a, T &b);

int main()
{
	using namespace std;
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	swap1(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";
	
	double x = 24.5, y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler-generated double swapper:\n";
	swap1(x, y);
	cout << "Now x, y = " << x << ", " << y << endl;
	return 0;
}

template <typename T>
void swap1(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}