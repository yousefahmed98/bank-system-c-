#pragma once
#include <iostream>
#include<string>

#include"BankApplication.h"
using namespace std;

class Client :public BankApplication
{
protected:
	string name;
	string address;
	int phNum;
	static int ClientNums;

public:
	
	void virtual setAccountId(int);
	Client();
	Client(string, string, double);
	static int getClientNums();
	int getaccType();
	void setName( string);
	void setAddress(const string);
	void setPhNum(int);
	std::string getName();
	std::string getAddress();
  int getPhNum();
	virtual void cinData();
	virtual void withDraw();
	virtual void deposit();
	virtual void coutData();
	//----------------------------------------------------

};



