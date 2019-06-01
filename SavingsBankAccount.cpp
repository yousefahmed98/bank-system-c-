#include "SavingsBankAccount.h"
#include<iostream>
//--------------------------------------------------------------------------
SavingsBankAccount::SavingsBankAccount()
{
	balance = 0;
	accountID = 0;
}
//---------------------------------------------------------------------------
SavingsBankAccount::SavingsBankAccount(double x, double y)
{
	this->balance = x;
	if (balance >= minimumBalance)
	{
		std::cout << "Welcome!" << std::endl;
	}
	else {
		std::cout << "Your Balance Can't Manage this Operation" << std::endl;
	}
}
//------------------------------------------------------------------------------
void SavingsBankAccount::setAccountId(int Id) { accountID = Id; }
void SavingsBankAccount::setBalance(double b) { balance = b; }
double SavingsBankAccount::getAccountId() { return accountID; }

double SavingsBankAccount::getBalance() { return balance; }
//------------------------------------------------------------------------------
void SavingsBankAccount::withDraw()
{
	std::cout << "Please Enter The Withdrawn Needed Value: ";
	double value = 0;
	std::cin >> value;
	if ((this->balance - value) > this->minimumBalance)
	{
		this->balance = (this->balance - value);
		std::cout << "Account ID : " << getAccountId() << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Sorry. This is More Than What You Can Withdraw." << std::endl;
	}
}
//------------------------------------------------------------------------------------
void SavingsBankAccount::deposit()
{
	std::cout << "Please Enter The Deposit Value: ";
	double value;
	std::cin >> value;
	if (value >= 100)
	{
		this->balance = (this->balance) + value;
		std::cout << "Account ID : " << getAccountId() << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Very Small Value Of Money To Be Deposited " << std::endl;
	}
}
void SavingsBankAccount::cinData()
{
	string x;
	std::cout << "please enter the client name ==========> ";
	cin >> x;
	setName(x);

	string y;
	std::cout << "please enter the client address =======> ";
	cin >> y;
	setAddress(y);
	int phno;
	std::cout << "please enter the client phone =========> ";
	std::cin >> phno;
	setPhNum(phno);
	cout << "you must add 1000 $ first to make this " << endl;
	cout << "please " << getName() << " add 1000$ or more ==> ";
	cin >> phno;
	while (phno < 1000) {
		cout << "very small value you must add 1000 $ first to make this " << endl;
		cout << "please " << getName() << " add 1000$ or more ==> ";
		cin >> phno;
	}


}
//--------------------------------------------------------------------------------------
void SavingsBankAccount::coutData() {
	cout << endl <<"---------------------------------------------"<<endl;
	cout << " name :: "<<getName() << endl;
	cout << " address :: " << getAddress() << endl;
	cout << "phone :: " << getPhNum() << endl;
	cout << " ID :: " << getAccountId() << endl;
	cout << "account tyoe is saving Bank Acount" << endl;
	cout << "balance :: " << getBalance() << endl;

}

