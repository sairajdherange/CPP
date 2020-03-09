/*
 * Assignment3_2_func.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: Sairaj Dherange
 */

#include"Assignment3_2.h"

matrix::matrix()
{
	this->num[0] = 0;
	this->num[1] = 0;
	this->num[2] = 0;
	this->num[3] = 0;
}
matrix::matrix(int n1, int n2, int n3, int n4)
{
	this->num[0]= n1;
	this->num[1]= n2;
	this->num[2]= n3;
	this->num[3]= n4;
}
void matrix::accept()
{
	cout<<"| a1\ta2 |\n| a3\ta4 |\n";
	cout<<"Enter the value for a1 , a2 , a3 , a4  :  ";
	cin>>this->num[0];
	cin>>this->num[1];
	cin>>this->num[2];
	cin>>this->num[3];
	cout<<"Done\n";
}
void matrix::print()
{
	cout<<"| "<<this->num[0]<<"\t"<<this->num[1]<<" |\n| "<<this->num[2]<<"\t"<<this->num[3]<<" |\n";
}
void matrix::add(matrix *m1)
{
	int a, b, c, d;
			a = m1[1].num[0] + m1[2].num[0];
			b = m1[1].num[1] + m1[2].num[1];
			c = m1[1].num[2] + m1[2].num[2];
			d = m1[1].num[3] + m1[2].num[3];

		cout<<"| "<<a<<"\t"<<b<<" |\n| "<<c<<"\t"<<d<<" |\n";
}
void matrix::subtract(matrix *m1)
{
	int a, b, c, d;
		a = m1[1].num[0] - m1[2].num[0];
		b = m1[1].num[1] - m1[2].num[1];
		c = m1[1].num[2] - m1[2].num[2];
		d = m1[1].num[3] - m1[2].num[3];

		cout<<"| "<<a<<"\t"<<b<<" |\n| "<<c<<"\t"<<d<<" |\n";
}
void matrix::multiply(matrix *m1)
{
	int a, b, c, d;

	a = (m1[1].num[0] * m1[2].num[0]) + (m1[1].num[1] * m1[2].num[2]);
	b = (m1[1].num[0] * m1[2].num[1]) + (m1[1].num[1] * m1[2].num[3]);
	c = (m1[1].num[2] * m1[2].num[0]) + (m1[1].num[3] * m1[2].num[2]);
	d = (m1[1].num[2] * m1[2].num[1]) + (m1[1].num[3] * m1[2].num[3]);

	cout<<"| "<<a<<"\t"<<b<<" |\n| "<<c<<"\t"<<d<<" |\n";
}
void matrix::transpose(matrix *m1)
{
	swap(&m1[1].num[1] , &m1[1].num[2]);
	swap(&m1[2].num[1] , &m1[2].num[2]);
}

int menu_list()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Accept data\n"<<"2. Print matrices\n"<<"3. Add matrices\n"<<"4. Subtract matrix 2 from 1\n"<<"5. Multiply\n"<<"6. Transpose\n"<<"Enter choice : ";
	cin>>choice;
	return choice;
}

void swap(int *a, int *b)
{
	int temp = *a;
	    *a = *b;
	    *b = temp;
}
