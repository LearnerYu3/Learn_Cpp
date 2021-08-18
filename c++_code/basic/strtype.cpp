#include <iostream>
#include <string>

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	// C++11 allows to create an initialized C-string and string object in the following ways
	// char first_date[] = {"Le Chapon Dodu"};
	// char second_date[] = {"The elegant plate"};
	// string third_date = {"The Bread Bowl"};
	// string fourth_date {"Hank's Fine Eats"};
	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		 << str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		 << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		 << str2[2] << endl;
	return 0;
}