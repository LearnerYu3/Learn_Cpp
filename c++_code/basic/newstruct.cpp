#include<iostream>

struct flat
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	flat* ps = new flat;
	cout << "Enter name of flat item:";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet:";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;
	delete ps;
	return 0;
}