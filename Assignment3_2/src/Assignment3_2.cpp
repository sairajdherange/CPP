//============================================================================
// Name        : Assignment3_2.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Assignment3_2.h"

int main()
{
	matrix *m1 = new matrix[2];
	int choice;
	while((choice=menu_list()) != 0 )
	{
		switch(choice)
		{
		case 1 : cout<<"Enter Data for matrix 1\n";
				m1[1].accept();
				cout<<"Enter Data for matrix 1\n";
				m1[2].accept();
		break;

		case 2 : cout<<"Matrix 1 : \n";
				m1[1].print();
				cout<<"Matrix 1 : \n";
				m1[2].print();
		break;

		case 3 :
			m1->add(m1);
		break;

		case 4 :
			m1->subtract(m1);
		break;

		case 5 : m1->multiply(m1);
		break;

		case 6 : m1->transpose(m1);
				cout<<"Transpose of Matrix 1 : \n";
				m1[1].print();
				cout<<"Transpose of Matrix 2 : \n";
				m1[2].print();
				m1->transpose(m1);
		break;

		default : cerr<<"Invalid option!!!\n";
		}
	}
}
