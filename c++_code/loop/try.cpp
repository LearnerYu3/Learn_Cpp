#include<iostream>

int main()
{
	using std::cout;
	using std::endl;
	int x = 200;
	{
		cout << x << endl;
		int x = 100;
		cout << "The new " << x << endl;
	}
	cout << "Which x is " << x << endl;
	return 0;
}