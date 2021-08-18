#include<iostream>

int main(){
	using namespace std;
	int chest = 42;
	int apple = 0x42;
	int peach = 042;

	cout << "apple = " << apple << " (0x42 in hex)" << endl;
	cout << "peach = " << peach << " (042 in oct)" << endl;
	cout << "chest = " << chest << " (demical for 42)" << endl;
	cout << hex;
	cout << "chest = " << chest << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "chest = " << chest << " (octal for 42)" << endl;
	return 0;
}