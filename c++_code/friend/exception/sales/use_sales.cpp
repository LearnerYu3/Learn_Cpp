#include<iostream>
#include "sales.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	double vals1[12] = {
		1220, 1100, 1122, 2212, 1232, 2334,
		2884, 2393, 3302, 2922, 3002, 3544
	};
	double vals2[12] = {
		12, 11, 22, 21, 32, 34,
		28, 29, 33, 29, 32, 35
	};
	Sales sale1(2011, vals1, 12);
	LabelSales sale2("Blogstar", 2012, vals2, 12);
	cout << "First try block:\n";
	try{
		int i;
		cout << "Year = " << sale1.Year() << endl;
		for (i = 0; i < 12; ++i)
		{
			cout << sale1[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "Year = " << sale2.Year() << endl;
		cout << "Label = " << sale2.Label() << endl;
		for (i = 0; i <= 12; ++i)
		{
			cout << sale2[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "End of try block 1.\n";
	}
	catch (LabelSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl;
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	catch (Sales::bad_index & bad)
	{
		cout << bad.what();
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	cout << "\nNext try block:\n";
	try{
		sale2[2] = 37.5;
		sale1[20] = 23345;
		cout << "End of try block 2.\n";
	}
	catch(LabelSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl;
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		cout << "bad_index: " << bad.bi_val() << endl;
	}
	cout << "done\n";
	return 0;
}