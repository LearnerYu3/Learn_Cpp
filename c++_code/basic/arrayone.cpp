#include<iostream>

int main(){
	using namespace std;
	int yams[3];
	yams[0] = 2;
	yams[1] = 3;
	yams[2] = 4;
	int costs[3] = {20, 30, 5};
	// C++11 allows to create an initialized array in the following ways
	// double earnings[4] {1.2e4, 1.6e4, 1.1e4, 1.7e4};
	// float balances[100] {}; // all elements set 0
	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs " << costs[1] << " cents per yam.\n";
	cout << "Size of yams array = " << sizeof yams << " byte.\n";
	cout << "Size of one element = " << sizeof yams[0] << " byte.\n";
	return 0;
} 