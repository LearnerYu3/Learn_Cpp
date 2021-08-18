#include<iostream>

struct inflat
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflat guest = 
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflat pal =
	{
		"Jone Liu",
		2.12,
		32.33
	};
	// you can create a struct variable by the following ways
	// inflat pal = {"Jone Liu", 2.12, 32.33}; or
	// inflat pal {"Jone Liu", 2.12, 32.33};
	// you can create a struct array
	// inflat pal[2] { {"Bob", 2.1, 22.33}, {"Jack", 3.2, 22.23} };
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	inflat assign1 = pal;
	cout << "You can assign the one to another, for assign1.name = " << assign1.name << endl;
	return 0;
}
