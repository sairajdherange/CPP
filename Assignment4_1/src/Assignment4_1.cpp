//============================================================================
// Name        : Assignment4_1.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

enum account_type
{
	SAVING,CURRENT,DMAT
};

int main_menu()
{
	int choice;
	cout<<"0. Exit\n1. Accept Records\n2. Display Records\n3. Transaction\nEnter your choice : ";
	cin>>choice;
	return choice;
}

class insufficient_funds
{
private:
	int accid;
	double current_balance;
	double withdraw_ammount;
public:
	insufficient_funds(int accid, double current_balance, double withdraw_ammount);
	void display();
};

insufficient_funds::insufficient_funds(int accid, double current_balance, double withdraw_ammount)
{
	this->accid = accid;
	this->current_balance = current_balance;
	this->withdraw_ammount = withdraw_ammount;
}

void insufficient_funds::display()
{
	cerr<<"Insufficient funds in your account\n"<<"ID : "<<accid<<"\nCurrent balance : "<<current_balance<<"\nWithdraw amount : "<<withdraw_ammount<<endl;
	return;
}

class account
{
private:
	int id;
	string type;
	double balance;
public:
	account();
	account(int id, string type);
	void accept();
	void display();
	void set_id(int id);
	void set_type(string type);
	int get_id();
	string get_type();
	double get_balance();
	void deposit(double amount);
	void withdraw(double amount);
};

account::account()
{
	this->balance = 0;
	this->id = 0;
	this->type = " ";
}

account::account(int id, string type)
{
	this->id =id;
	this->type = type;
	this->balance = 0;
}

void account::accept()
{

	cout<<"Enter the ID : ";
	cin>>this->id;
	cout<<"Enter the type :";
	cin>>this->type;
	cout<<"Enter the balance : ";
	cin>>this->balance;
}



void account::display()
{
	cout<<"ID		: "<<this->id<<endl;
	cout<<"Type		: "<<this->type<<endl;
	cout<<"Balance 	: "<<this->balance<<endl;
}

void account::set_id(int id)
{
	this->id = id ;
}

void account::set_type(string type)
{
	this->type = type;
}
int account::get_id()
{
	return this->id;
}
string account::get_type()
{
	return this->type;
}

double account::get_balance()
{
	return this->balance;
}

void account::deposit(double amount)
{
	this->balance = this->balance + amount ;
}

void account::withdraw(double amount)
{
	if(amount > this->balance)
		throw insufficient_funds(this->id,this->balance,amount);
	else
		this->balance = this->balance - amount ;
}

int transaction_menu(account *acc)
{
	int choice , i;
	cout << "0. Exit" << endl;
	for (i = 0; i < 2; i++)
		cout << (i + 1) << ". " << acc[i].get_id() << endl;
	cout << "Select id to perform transaction : ";
	cin >> choice;
	return choice;
}

void do_trans(account *acc , int i)
{
	int action, amount;
	cout << "Select an action to perform :\t1. Withdraw\t2.Deposit" << endl;
	cin >> action;
	if (action == 1) {
		cout << "Enter the amount to withdraw : ";
		cin >> amount;
		try {
			acc[0].withdraw(amount);
			cout << "Current Balance : " << acc[i].get_balance() << endl;
		} catch (insufficient_funds &insuff_fund) {
			insuff_fund.display();
		}
	} else if (action == 2) {
		cout << "Enter the amount to deposit : ";
		cin >> amount;
		acc[0].deposit(amount);
		cout << "Current Balance : " << acc[i].get_balance() << endl;
	} else {
		cerr << "Invalid Input!!!" << endl;
	}
}
/*

void transaction_mode(account *acc)
{
	int i , amount , action , choice = 1;
	while((choice !=0 ))
	{
		cout << "0. Exit" << endl;
		for (i = 0; i < 2; i++)
			cout << (i + 1) << ". " << acc[i].get_id() << endl;
		cout << "Select id to perform transaction : ";
		cin >> choice;
		switch (choice)
		{
		case 1 :
				cout << "Select an action to perform :\t1. Withdraw\t2.Deposit"
						<< endl;
				cin >> action;
				if (action == 1) {
					cout << "Enter the amount to withdraw : ";
					cin >> amount;
					try {
						acc[0].withdraw(amount);
						cout << "Current Balance : " << acc[0].get_balance()
								<< endl;
					} catch (insufficient_funds &insuff_fund) {
						insuff_fund.display();
						return;
					}
				} else if (action == 2) {
					cout << "Enter the amount to deposit : ";
					cin >> amount;
					acc[0].deposit(amount);
					cout << "Current Balance : " << acc[0].get_balance()
							<< endl;
				} else{
					cerr << "Invalid Input!!!" << endl;
				}break;

		case 2 :
				cout << "Select an action to perform :\t1. Withdraw\t2.Deposit"<< endl;
				cin >> action;
				if (action == 1) {
					cout << "Enter the amount to withdraw : ";
					cin >> amount;
					try {
						acc[1].withdraw(amount);
						cout << "Current Balance : " << acc[1].get_balance()<<endl;
					} catch (insufficient_funds &insuff_fund) {
							insuff_fund.display();
					}
				} else if (action == 2) {
					cout << "Enter the amount to deposit : ";
					cin >> amount;
					acc[1].deposit(amount);
					cout << "Current Balance : " << acc[1].get_balance()<<endl;
				} else
					cerr << "Invalid Input!!!" << endl;
				break;

		case 3 :
				cout << "Select an action to perform :\t1. Withdraw\t2.Deposit"<< endl;
				cin >> action;
				if (action == 1) {
					cout << "Enter the amount to withdraw : ";
					cin >> amount;
					try {
						acc[2].withdraw(amount);
						cout << "Current Balance : " << acc[2].get_balance()<<endl;
					} catch (insufficient_funds &insuff_fund) {
						insuff_fund.display();
						return;
				}
				} else if (action == 2) {
					cout << "Enter the amount to deposit : ";
					cin >> amount;
					acc[2].deposit(amount);
					cout << "Current Balance : " << acc[2].get_balance()<<endl;
				} else
					cerr << "Invalid Input!!!" << endl;
		break;

		case 4 :
				cout << "Select an action to perform :\t1. Withdraw\t2.Deposit"<< endl;
				cin >> action;
				if (action == 1) {
					cout << "Enter the amount to withdraw : ";
					cin >> amount;
					try {
						acc[3].withdraw(amount);
						cout << "Current Balance : " << acc[3].get_balance()<<endl;
					} catch (insufficient_funds &insuff_fund) {
						insuff_fund.display();
						return;
				}
				} else if (action == 2) {
					cout << "Enter the amount to deposit : ";
					cin >> amount;
					acc[3].deposit(amount);
					cout << "Current Balance : " << acc[3].get_balance()<<endl;
				} else
					cerr << "Invalid Input!!!" << endl;
		break;

		case 5 :
				cout << "Select an action to perform :\t1. Withdraw\t2.Deposit"<< endl;
				cin >> action;
				if (action == 1) {
					cout << "Enter the amount to withdraw : ";
					cin >> amount;
					try {
						acc[4].withdraw(amount);
						cout << "Current Balance : " << acc[4].get_balance()<<endl;
					} catch (insufficient_funds &insuff_fund) {
						insuff_fund.display();
						return;
				}
				} else if (action == 2) {
					cout << "Enter the amount to deposit : ";
					cin >> amount;
					acc[4].deposit(amount);
					cout << "Current Balance : " << acc[4].get_balance()<<endl;
				} else
					cerr << "Invalid Input!!!" << endl;
		break;

		case 0 : return;
		break;

		default : cerr<<"Invalid Option!!!\n";

		}

	}
}

*/


int main()
{
	int i,choice;
	account acc[2];

	while((choice = main_menu()) != 0)
	{
		switch(choice)
		{
		case 1 :
			for( i = 0 ; i < 2 ; i++)
				acc[i].accept();
		break;

		case 2 :
			for( i = 0 ; i < 2 ; i++)
				acc[i].display();
		break;

		case 3 :
		{
			int choice = 1;
			while ((choice = transaction_menu(acc))!= 0) {
				switch (choice) {
				case 1: do_trans(acc , 0);
					break;

				case 2: do_trans(acc , 1);
					break;

				case 3: do_trans(acc , 2);
					break;

				case 4: do_trans(acc , 3);
					break;

				case 5: do_trans(acc , 4);
					break;

				default:
					cerr << "Invalid Option!!!\n";

				}

			}
		}
		break;

		default : cerr<<"Invalid Option !!!"<<endl;
		}
	}
	return 0;
}
