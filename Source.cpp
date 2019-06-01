#include <iostream>
#include"BankApplication.h"
#include"BankAccount.h"
#include"Client.h"
#include"SavingsBankAccount.h"

using namespace std;
int Clientnums = 0;


int main() {
	
	BankApplication A1;
	Client** c1 = new Client*[100];
	int x=9;
	while (x) {
		std::cout <<endl << "-------------------------------------------"<<endl <<"Welcome to FCI Banking Application" << std::endl;
		std::cout << "1. Create a New Account" << std::endl;
		std::cout << "2. List Clients and Accounts" << std::endl;
		std::cout << "3. Withdraw Money" << std::endl;
		std::cout << "4. Deposit Money " << std::endl;
		cout << "0. for exist"<<endl;
		std::cout << "Please Enter The Choice =============>  ";
		bool check = true;
		cin >> x;
		A1.setChoice(x);
		if (A1.getChoice() == 1) {
			int choice=0;
			std::cout << "what type of account do you like ? (1)basic  (2)saving - type(1) or type(2) ====> ";
			std::cin >> choice;
			while (choice != 1 && choice != 2) { cout << "wroung input "; cin >> choice; }
			
			if (choice == 2) {
				c1[Clientnums] = new SavingsBankAccount;
			    c1[Clientnums]->cinData();
				c1[Clientnums]->setAccountId(Clientnums+1);
				Clientnums++;
				
				cout <<endl<<"----------------------------------------------";
			}
			else {
				c1[Clientnums] = new BankAccount;
				c1[Clientnums]->cinData();
				c1[Clientnums]->setAccountId(Clientnums + 1);
				Clientnums++;
				
				cout << "your ID " << Clientnums ;
			}

		}
		else if (A1.getChoice() == 2) {
			for (int i = 0; i < Clientnums; i++) {
				c1[i]->coutData();
			}

		}
		else if (A1.getChoice() == 3) {
			int id;
			cout << "enter your id ===> ";
			cin >> id;
			cout << "hello " << c1[id - 1]->getName()<< " " ;
			c1[id-1]->withDraw();

		}
		else if (A1.getChoice() == 4) {
			int id;
			cout << "enter your id ==> ";
			cin >> id;
			cout << "hello " << c1[id - 1]->getName()<<" ";
			c1[id-1]->deposit();

		}
		else if (A1.getChoice() == 0) {
			for (int i=0; i < Clientnums; i++) delete c1[i];
			delete[] c1;
			return 0;
		}
	}
}