#include<iostream>
#include "mytime.h"

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

Time Time::Sum(const Time & t) const
{
	Time sum; //Time::Sum作用域为整个类，因此可以直接使用私有属性的数据
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}