/*
 * salesman.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "salesman.h"
#include <iostream>
namespace std {

salesman::salesman() : employee(0 , 0){
	this->comm = 0;
}

salesman::salesman(int id,float sal,float comm) : employee(id , sal){
	this->comm = comm;
}

float salesman::get_comm(){
	return this->comm;
}

void salesman::set_comm(float comm){
	this->comm = comm;
}

void salesman::display(){
	employee::display();
	cout<<"Commission : "<<this->comm<<endl;
}

void salesman::accept(){
	employee::accept();
	cout<<"Enter commission : ";
	cin>>this->comm;
}

salesman::~salesman() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
