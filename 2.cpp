//Question 7 constructor for BankAccount class.
#include"1.h"


//Question 1 in programming exercises of function definitions from question 5 in chapter review

BankAccount(string name,double balance=x)
{
	balance =x;
	DepositorName=name;
}
BankAccount(string name)
		{
                balance=1000;
				DepositorName= name;
		}
		
		double Deposit(double amount)
		{
			balance+=amount;
			return balance;
		}
		void Withdraw(double amount)
		{
			balance-=amount;
		}

		