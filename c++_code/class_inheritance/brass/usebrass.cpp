#include<iostream>
#include "brass.h"

int main()
{
	using std::cout;
	using std::endl;
	Brass piggy("pigg", 381299, 4000.00);
	BrassPlus hoggy("hoggy", 382288, 3000.00);
	piggy.ViewAcct();
	cout << endl;
	hoggy.ViewAcct();
	cout << endl;
	cout << "Depositing $1000 into the Hoggy Account:\n";
	hoggy.Deposit(1000.00);
	cout << "New balance: $" << hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the piggy Account:\n";
	piggy.Withdraw(4200.00);
	cout << "Piggy account balance: $" << piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the hoggy account:\n";
	hoggy.Withdraw(4200.00);
	hoggy.ViewAcct();
	return 0;
}