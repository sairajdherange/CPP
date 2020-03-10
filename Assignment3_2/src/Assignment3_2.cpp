//============================================================================
// Name        : Assignment3_2_new.cpp
// Author      : Sairaj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "matrix.h"

int menulist(){
	int choice;
	cout<<"0. Exit\n1. Display matrices\n2. Add matrices\n3. Subtract matrices\n4. Multiply matrices\n5. Transpose of matrices\nEnter your choice : ";
	cin>>choice;
	return choice;
}

int main() {
	int rows,choice;
	cout<<"Enter the number of rows and columns :";
	cin>>rows;
	matrix m1(rows,rows);
	m1.accept();
	while((choice = menulist()) != 0)
	{
		switch(choice)
		{
		case 1 : m1.display();
		break;

		case 2 :m1.add_matrix();
		break;

		case 3 :m1.subtract_matrix();
		break;

		case 4 :m1.multiply_matrix();
		break;

		case 5 :m1.transpose_matrix();
		break;

		default : cout<<"Invalid Option!!!"<<endl;
		}
	}


	/*m1.accept();
	m1.display();
	m1.add_matrix();
	m1.multiply_matrix();
	m1.transpose_matrix();*/
	return 0;
}
