#include<iostream>
#include "dma.h"

int main()
{
	using std::cout;
	using std::endl;
	baseDMA shirt("portabelly", 8);
	lackDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "buffalo keys", 5);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lackDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;
	lackDMA balloon2(balloon);
	cout << "Result of lackDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";
	cout << map2 << endl;
	return 0;
}