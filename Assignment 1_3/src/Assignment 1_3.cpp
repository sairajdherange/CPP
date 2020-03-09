//============================================================================
// Name        : Assignment.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date()
	{
		day = 3;
		month = 3;
		year = 2020;
	}
	Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	bool IsLeapYear();
};

Date d_global;

void parameterless_constructor()
{
	Date date1;
	date1.PrintDateOnConsole();
}

void parameterized_constructor()
{
	int a,b,c;
	cout<<"Enter date month and year";
	cin>>a;
	cin>>b;
	cin>>c;
	Date date2(a,b,c);
	date2.PrintDateOnConsole();
}
bool Date ::IsLeapYear()
{
	if(d_global.year % 4 == 0)
	return true;
	else
		return false;
}

void Date :: AcceptDateFromConsole()
{
	cout<<"Enter date , month , year \n";
	cin>>d_global.day;
	cin>>d_global.month;
	cin>>d_global.year;
	d_global.PrintDateOnConsole();
}

void Date :: PrintDateOnConsole()
{
	cout<<"Date is "<<this->day<<"/"<<this->month<<"/"<<this->year<<".\n";
}

int menu()
{
	int choice ;
	cout<<"1. Initialize Date(Defalt constructor) \n"<<"2. Initialize with values(parameterized construction)\n"<<"3. Print Date\n"<<"4. Accept Date\n"<<"5. Leap year\n"<<"Select an option to perform :";
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	while((choice = menu()) != 0)
	{
		switch(choice)
		{
		case 1 : parameterless_constructor();
		break;

		case 2 : parameterized_constructor();
		break;

		case 3 : d_global.PrintDateOnConsole();
		break;

		case 4 :d_global.AcceptDateFromConsole();
		break;

		case 5 :if(d_global.IsLeapYear() == true)
			cout<<"This is a leap year.\n";
		else
			cout<<"This is not a leap year.\n";
		break;

		default : cout<<"Invalid option!!!\n";
		}
	}
	return 0;
}
