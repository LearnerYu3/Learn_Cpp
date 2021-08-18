#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

template<class T>
class TooBig
{
private:
	T cutoff;
public:
	TooBig(const T & t) : cutoff(t) {}
	bool operator()(const T & v) {return v > cutoff;}
};

void outint(int n) {std::cout << n << " ";}

int main()
{
	using std::list;
	using std::cout;
	using std::endl;
	TooBig<int> f100(100);
	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	list<int> yad(vals, vals + 10);
	list<int> etce(vals, vals + 10);
	cout << "Original lists:\n";
	for_each(yad.begin(), yad.end(), outint);
	cout << endl;
	for_each(etce.begin(), etce.end(), outint);
	cout << endl;
	yad.remove_if(f100);
	etce.remove_if(TooBig<int>(200));
	cout << "Trimmed lists:\n";
	for_each(yad.begin(), yad.end(), outint);
	cout << endl;
	for_each(etce.begin(), etce.end(), outint);
	cout << endl;
	return 0;
}