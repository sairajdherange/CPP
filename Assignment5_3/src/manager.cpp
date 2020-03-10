/*
 * manager.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "manager.h"
#include <iostream>
using namespace std;

manager::manager():employee(0,0) {
	this->bonus = 0;
}

manager::manager(int id,float sal,float bonus):employee(id , sal ){
	this->bonus = bonus;
}

float manager::get_bonus(){
	return this->bonus;
}

void manager::set_bonus(float bonus){
	this->bonus = bonus ;
}

void manager::accept(){
	employee::accept();
	cout<<"Enter bonus amount :";
	cin>>this->bonus;
}

void manager::display(){
	employee::display();
	cout<<"Bonus : "<<this->bonus<<endl;
}

void manager::display_manager(){
	cout<<"Bonus : "<<this->bonus<<endl;
}

void manager::accept_manager(){
	cout<<"Enter bonus : ";
	cin>>this->bonus;
}

manager::~manager() {
	// TODO Auto-generated destructor stub
}
