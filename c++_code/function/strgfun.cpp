#include<iostream>
unsigned int c_in_str(const char * str, char ch);

int main()
{
	using namespace std;
	char m1[15] = "minimum";
	char str1[10] = "ulilate";
	char *wail;
	wail = str1;
	unsigned int ms = c_in_str(m1, 'm');
	unsigned int us = c_in_str(str1, 'u');
	cout << ms << " m characters in " << m1 << endl;
	cout << us << " u characters in " << wail << endl;
	return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}