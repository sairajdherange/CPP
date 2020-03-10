/*
 * Assignment6_2.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef ASSIGNMENT6_2_H_
#define ASSIGNMENT6_2_H_

int menulist()
{
	int choice;
	cout<<"0. Exit\n1. Circle\n2. Rectangle\n3. Square\nEnter your choice : ";
	cin>>choice;
	return choice;
}

void total_area(float *current_area , float *total_area1){
	*total_area1 = *total_area1 + *current_area;
}

void total_perimeter(float *current_peri , float *total_peri){
	*total_peri = *total_peri + *current_peri;
}


#endif /* ASSIGNMENT6_2_H_ */
