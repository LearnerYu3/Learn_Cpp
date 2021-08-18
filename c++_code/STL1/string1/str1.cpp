#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string one("Lottery Winner!"); //string(const char *s)
	cout << one << endl;
	string two(20, '$'); //string(int n, char c)
	cout << two << endl;
	string three(one); //string(const string & str)
	cout << three << endl;
	one += " oops!"; //overload +=
	cout << one << endl;
	two = "Sorry! That was ";
	three[0] = 'P';
	string four; //string()
	four = two + three;
	cout << four << endl;
	char alls[] = "All's well that ends well"; 
	string five(alls, 20); //string(const char * s, int n)
	cout << five << endl;
	string six(alls+6, alls + 10); //string(Iter begin, Iter end)
	cout << six << endl;
	string seven(&five[6], &five[10]);//#6
	cout << seven << "...\n";
	string eight(four, 7, 16);//string(const string & str, pos = 0, size_type n = npos)
	cout << eight << " in motion!" << endl;
	return 0;
}