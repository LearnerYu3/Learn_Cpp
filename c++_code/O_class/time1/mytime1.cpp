#include<iostream>
#include "mytime1.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum; //Time::Sum作用域为整个类，因此可以直接使用私有属性的数据
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + t.hours * 60;
	tot2 = minutes + hours * 60;
	diff.hours = (tot2 - tot1)/60;
	diff.minutes = (tot2 - tot1)%60;
	return diff; 
}

Time Time::operator*(double n) const
{
	Time result;
	long totalminutes = hours * 60 * n + minutes * n;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes%60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}