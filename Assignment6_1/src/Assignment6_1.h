/*
 * Assignment6_1.h
 *
 *  Created on: 10-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT6_1_H_
#define ASSIGNMENT6_1_H_

float total_discount =0, total_bill = 0 , final_price = 0;


int menulist()
{
	int choice;
	cout<<"0. Exit \n1. Add book\n2. Add tape\n3. Create bill\nEnter your choice : ";
	cin>>choice;
	return choice;
}




#endif /* ASSIGNMENT6_1_H_ */
