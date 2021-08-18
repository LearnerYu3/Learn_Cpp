#include<iostream>

int main()
{
	using namespace std;
	cout << "Please enter five value: \n";
	double number;
	double sum = 0.0;
	for (int i = 1; i<=5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number; 
	}
	cout << "They sum to " << sum << endl;
	cout << "and the average to " << sum/5 << ".\n";
	return 0;
}