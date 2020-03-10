//============================================================================
// Name        : Assignment6_1.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "book.h"
#include "tape.h"
#include "Assignment6_1.h"

int main() {
	int choice , i = 0;
	product* ptr[10];

	do
	{
		switch(choice)
		{
		case 1:
			ptr[i] = new book;
			ptr[i]->accept();
			total_discount = total_discount + ptr[i]->get_discount();
			total_bill = total_bill + ptr[i]->get_price();
			final_price = final_price+ (ptr[i]->get_price()- ptr[i]->get_discount());

			break;

		case 2:
			ptr[i] = new tape;
			ptr[i]->accept();
			total_discount = total_discount + ptr[i]->get_discount();
			total_bill = total_bill + ptr[i]->get_price();
			final_price = final_price + (ptr[i]->get_price() - ptr[i]->get_discount());
		break;

		case 3 :
			cout<<"Total bill : Rs."<<total_bill<<endl;
			cout<<"Total discount : Rs."<<total_discount<<endl;
			cout<<"Total bill after discount : Rs."<<final_price<<endl;
			choice = 3;
		break;
		i++;
		}
	}while(choice != 3 && (choice = menulist()) != 0);
	return 0;
}
