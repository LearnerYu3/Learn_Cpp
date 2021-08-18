#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
private:
	char *str;
	int len;
	static int num_string;

public:
	StringBad(const char *s);
	StringBad();
	StringBad(const StringBad &st); //improve to correct
	~StringBad();
	StringBad &operator=(const StringBad &st); //improve it to correct
	friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};
#endif