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
	this->sal = 0;
}

employee::employee(int id,float sal){
	this->id = id;
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

void employee::display(){
	cout<<"ID : "<<this->get_id()<<endl;
	cout<<"Salary : "<<this->get_sal()<<endl;
}
void employee::accept(){
	cout<<"Enter ID : ";
	cin>>this->id;
	cout<<"Enter salary : ";
	cin>>this->sal;
}

employee::~employee() {
	// TODO Auto-generated destructor stub
}

