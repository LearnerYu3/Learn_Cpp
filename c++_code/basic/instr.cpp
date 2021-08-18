#include<iostream>

int main(){
	using namespace std;
	const int Size = 20;
	char name1[Size];
	char dessert1[Size];
	cout << "Enter your name:\n";
	cin >> name1;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert1;
	cout << "I have some delicious " << dessert1 << " for you, " << name1 << endl;
	cin.get();

	char name2[Size];
	char dessert2[Size];
	cout << "Enter your name:\n";
	cin.getline(name2, Size); //reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert2, Size);
	cout << "I have some delicious " << dessert2 << " for you, " << name2 << endl;
	return 0; 
}