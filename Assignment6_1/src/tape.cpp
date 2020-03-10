/*
 * tape.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "tape.h"

namespace std {

tape::tape() {
	this->duration = 0;
}

void tape::set_duration(int duration){
	this->duration = duration;
}

int tape::get_duration(){
	return this->duration;
}

void tape::accept(){
	product::accept();
	cout<<"Enter duration : ";
	cin>>this->duration;
}
void tape::display(){
	product::display();
	cout<<"Duration : "<<this->duration<<endl;
}

float tape::get_discount(){
	return this->get_price() * 0.05;
}

tape::~tape() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
