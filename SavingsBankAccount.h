#pragma once
#include"Client.h"

class SavingsBankAccount   :public Client
{
protected:
	double accountID;
	double balance;
private:
	const double minimumBalance=1000;
public:
	SavingsBankAccount();
	SavingsBankAccount(double, double);
	void setAccountId(int);
	void setBalance(double);
	double getAccountId();
	double getBalance();
	void cinData();
	void coutData();
	void withDraw();
	void deposit();
};

