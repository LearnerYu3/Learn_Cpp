#include<iostream>

int main(){
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!');
	return 0;
}