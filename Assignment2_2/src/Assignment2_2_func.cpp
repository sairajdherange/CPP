/*
 * Assignment2_2_func.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: Sairaj Dherange
 */
#include "Assignment2_2.h"
#include <iostream>
using namespace std;
#include <string>


void student::accept_records()
{
	{
		cout<<"Enter Name : ";
		cin>>this->name;
		cout<<"Enter Roll Number : ";
		cin>>this->roll_no;
		cout<<"Enter Gender M / F ? : ";
		cin>>this->gender;
		cout<<"Enter Maths marks : ";
		cin>>this->maths_marks;
		cout<<"Enter Science marks : ";
		cin>>this->sci_marks;
		cout<<"Enter English marks : ";
		cin>>this->english_marks;

		this->percentage = ((this->maths_marks + this->sci_marks + this->english_marks)*100)/300;
		cout<<"Student Data saved\n";
	}
}

void student::print_records()
{
	{
		cout<<"Name : "<<this->name<<"\n";
		cout<<"Gender : "<<this->gender<<"\n";
		cout<<"Roll Number : "<<this->roll_no<<"\n";
		cout<<"Percentage : "<<this->percentage<<"\n\n";
	}
}

void student::search_roll_no()
{

}

int student::get_roll()
{
	int a = this->roll_no;
	return a;
}

void student::sort_roll_no()
{

}

/*void SortRecord()
{
	student temp[3];

	if()

}*/

int menu()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Accept records\n"<<"2. Print records\n"<<"3. Search roll no\n"<<"4. Sort\n"<<"Enter your choice";
	cin>>choice;
	return choice;
}
