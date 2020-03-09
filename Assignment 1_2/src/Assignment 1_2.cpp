//============================================================================
// Name        : practice.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Date
{
	int day,month,year;
};
/*
bool IsLeapYear()
{
	if(d1.year % 4 == 0)
		return true;
	else
		return false;
}
*/

struct Date d1;

bool IsLeapYear()
{
	int year1;
	cout<<"Enter the year to check : ";
	cin>>year1;
	if(year1%4 == 0)
		return true;
	else
		return false;
}
void PrintDateOnConsole()
{

	cout<<"Date is "<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<".\n";
}

void AcceptDateFromConsole()
{
	cout<<"\n Enter the date, month and year : \n";
	cin>>d1.day;
	cin>>d1.month;
	cin>>d1.year;
	PrintDateOnConsole();
}

void InitDate()
{
	d1.day = 3 ;
	d1.month = 3 ;
	d1.year = 2020 ;
	PrintDateOnConsole();
}


int menu()
{
	int choice ;
	cout<<"1. Initialize Date\n"<<"2. Print Date\n"<<"3. Input date from console\n"<<"4. Check if year is leap year\n"<<"Select an option to perform :";
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	while((choice = menu())!=0)
	{
		switch(choice)
		{
		case 1 : InitDate();
		break;

		case 2 : PrintDateOnConsole();
		break;

		case 3 : 	AcceptDateFromConsole();
		break;

		case 4 : //if(IsLeapYear(&d1) == true)
				if(IsLeapYear() == true)
					cout<<"This is a leap year\n";
				else
					cout<<"This is not a leap year\n";
		break;

		default : cout<<"Invalid Option !!!\n";
		}
	}
	return 0;
}
