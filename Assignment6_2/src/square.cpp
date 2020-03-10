/*
 * square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "square.h"

namespace std {

square::square() {
	this->side =0;
}

square::square(float side){
	this->side = side;
}

float square::get_side(){
	return this->side;
}

void square::set_side(float side){
	this->side = side;
}

void square::accept(){
	cout<<"Enter side : ";
	cin>>this->side;
}

void square::display(){
	cout<<"Side : "<<this->side<<endl;
}
float square::calc_area(){
	float area = this->side * this->side;
	return area;
}
float square::calc_peri(){
	float peri = this->side * 4 ;
	return peri;
}

square::~square() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
