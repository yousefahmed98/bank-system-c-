#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount()
{
	this->accountID = 0;
	this->balance = 0;
}
BankAccount::BankAccount(double Id, double b)
{
	this->accountID = Id;
	this->balance = b;
}
void BankAccount::setAccountId(int Id) { accountID = Id; }
void BankAccount::setBalance(double b) { balance = b; }
int BankAccount::getAccountId() { return accountID; }
double BankAccount::getBalance() { return balance; }
void BankAccount::withDraw()
{
	std::cout << "Please Enter The Withdrawn Needed Value: ";
	double value = 0;
	std::cin >> value;
	if (value < this->balance)
	{
		this->balance = (this->balance - value);
		std::cout << "Account ID : " << getAccountId() << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Sorry. This is More Than What You Can Withdraw." << std::endl;
	}
}
void BankAccount::deposit()
{
	std::cout << "Please Enter The Deposit Value: ";
	double value;
	std::cin >> value;
	this->balance = (this->balance) + value;
	std::cout << "Account ID : " << getAccountId() << std::endl;
	std::cout << "Your New Balance : " << this->balance << std::endl;
}
void BankAccount::cinData()
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


}
void BankAccount::coutData() {
	cout << endl  << "---------------------------------------------"<<endl;
	cout << " name :: "<<getName() << endl;
	cout << " address :: " << getAddress() << endl;
	cout << "phone :: " << getPhNum() << endl;
	cout << " ID :: " << getAccountId() << endl;
	cout << " account type is nourmal bank Account" << endl;
	cout << "balance :: " << getBalance() << endl;

}


BankAccount::~BankAccount()
{
}
