#include<iostream>
#include<cmath>
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

void rect_to_polar(const rect * pxy, polar *pda);
void show_polar(const polar * pda);
using namespace std;

int main()
{
	rect rplace;
	polar pplace;
	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two number (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

void rect_to_polar(const rect * pxy, polar *pda)
{
	pda->angle = atan2(pxy->y, pxy->x);
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
}

void show_polar(const polar * pda)
{
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << pda->distance << ", angel = "
		<< pda->angle * Rad_to_deg << " degrees\n";
}