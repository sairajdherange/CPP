//============================================================================
// Name        : Assignment1_5.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class tollbooth
{
	unsigned int cars;
	double money;
public:
	tollbooth()
	{
		cars = 0;
		money = 0;
	}

	void payingCar()
	{
		cars++;
		money = money + 0.5;
	}

	void nopayCar()
	{
		cars++;
	}

	void PrintOnConsole()
	{
		int nopaying_cars = cars - (money/0.5);
		int paying_cars = cars - nopaying_cars;

		cout<<"Numer of paying cars are "<<paying_cars<<".\n";
		cout<<"Numer of non paying cars are "<<nopaying_cars<<".\n";
		cout<<"Total cars are "<<cars<<".\n";
		cout<<"Total money collected is "<<money<<".\n";
	}
};

int menu()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Paying car visits\n"<<"2. Non paying car visits\n"<<"3. Show Report\n";
	cin>>choice;
	return choice;
}

int main()
{
	tollbooth t1;
	int choice;


	while((choice = menu()) != 0)
	{
		switch (choice)
		{
		case 1 : t1.payingCar();
		break;

		case 2 :t1.nopayCar();
		break;

		case 3 : t1.PrintOnConsole();
		break;

		default : cout<<"Invalid option\n";
		}
	}
	return 0;
}
