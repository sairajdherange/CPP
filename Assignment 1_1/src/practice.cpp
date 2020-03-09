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

void AcceptDateFromConsole(struct Date* ptDate)
{
	cout<<"\n Enter the date, month and year : \n";
	cin>>ptDate->day;
	cin>>ptDate->month;
	cin>>ptDate->year;
}

void PrintDateOnConsole(struct Date* ptDate)
{

	cout<<"Date is "<<ptDate->day<<"/"<<ptDate->month<<"/"<<ptDate->year<<".\n";
}

void InitDate(struct Date* ptDate)
{
	ptDate->day = 3 ;
	ptDate->month = 3 ;
	ptDate->year = 2020 ;
}


int menu()
{
	int choice ;
	cout<<"1. Initialize Date\n"<<"2. Print Date\n"<<"3. Input date from console\n"<<"Select an option to perform :";
	cin>>choice;
	return choice;
}

int main()
{
	struct Date d1;
	int choice;
	while((choice = menu())!=0)
	{
		switch(choice)
		{
		case 1 : InitDate(&d1);
		break;

		case 2 : PrintDateOnConsole(&d1);
		break;

		case 3 : 	AcceptDateFromConsole(&d1);
					PrintDateOnConsole(&d1);
		break;

		default : cout<<"Invalid Option !!!\n";
		}
	}
	return 0;
}
