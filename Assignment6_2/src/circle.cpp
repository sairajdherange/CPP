/*
 * circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "circle.h"
#include "iostream"
namespace std {

circle::circle() {
	this->radius = 0;

}
circle::circle(float radius){
	this->radius = radius;
}

float circle::get_radius(){
	return this->radius;
}

void circle::set_radius(float radius){
	this->radius = radius;
}

void circle::accept(){
	cout<<"Enter Radius : ";
	cin>>this->radius;
}

void circle::display(){
	cout<<"Radius is "<<this->radius;
}

float circle::calc_area(){
	float area = PI * this->radius * this->radius;
	return area;
}

float circle::calc_peri(){
	float peri = 2 * PI * this->radius;
	return peri;
}

circle::~circle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
