#include "BankApplication.h"
#include <iostream>
using namespace std;


BankApplication::BankApplication()
{

	
	
}
void BankApplication::setChoice(int x) {
	while (!(x >= 0 && x < 5)) {
		cout << "wrong choice enter a num between 0:4 ==============>";
		cin >> x;
	}
	this->choice = x;
}
int BankApplication::getChoice() {
	return choice;
}

BankApplication::~BankApplication()
{
}
