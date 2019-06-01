#pragma once
#include"BankApplication.h"
#include"Client.h"
class BankAccount:public Client	 
{
protected:
	double accountID;
	double balance;
public:											  
	BankAccount();
	~BankAccount();
	BankAccount(double, double);
	void setAccountId(int);
	void setBalance(double);
	int getAccountId();
	double getBalance();
	 void cinData();
	 void withDraw();
	 void deposit();
	 void coutData();

};

