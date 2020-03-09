/*
 * employee.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;

employee::employee() {
	this->id = 0;
	this->joining.set_day(1);
	this->joining.set_month(1);
	this->joining.set_year(2010);
	//this->joining.date(joining_day, joining_month , joining_year);
	strcpy(this->dept, "");
	this->sal = 0;
}

employee::employee(int id,float sal,const char* dept,int joining_day, int joining_month, int joining_year)
{
	this->id = id;
	this->joining.set_day(joining_day);
	this->joining.set_month(joining_month);
	this->joining.set_year(joining_year);
	//this->joining.date(joining_day, joining_month , joining_year);
	strcpy(this->dept,dept);
	this->sal = sal;
}

int employee::get_id(){
	return this->id;
}

void employee::set_id(int id){
	this->id = id;
}

float employee::get_sal(){
	return this->sal;
}

void employee::set_sal(float sal){
	this->sal=sal;
}

char* employee::get_dept(){
	return this->dept;
}

void employee::set_dept(const char* dept){
	strcpy(this->dept,dept);
}

date employee::get_joining_date(){
	return this->joining;
}

void employee::set_joining_date(int day,int month,int year){
	this->joining.set_day(day);
	this->joining.set_month(month);
	this->joining.set_year(year);
}

void employee::display(){
	cout<<"ID : "<<this->get_id()<<endl;
	cout<<"Salary : "<<this->get_sal()<<endl;
	cout<<"Department : "<<this->get_dept()<<endl;
	cout<<"Joining ";
	this->joining.display();
	cout<<endl;
}
void employee::accept(){
	cout<<"Enter ID : ";
	cin>>this->id;
	cout<<"Enter salary : ";
	cin>>this->sal;
	cout<<"Enter department : ";
	cin>>this->dept;
	cout<<"Joining details : ";
	this->joining.accept();

}

employee::~employee() {
	// TODO Auto-generated destructor stub
}

