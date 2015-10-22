
//Question number 5 in chapter review without methode implementation.
#ifndef __BankAccount__
#define __BankAccount__
#include<string>
using namespace std;
class BankAccount
	Public :
		BankAccount(string name,double balance);
		BankAccount(string name);
		void Display();
		double Deposit(double amount);
		void Withdraw(double amount);
		double CurrentBalance();
	Private:
			string DepositorName;
			string AccountNumber;
			double balance;
			
};
#endif