/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "rectangle.h"

namespace std {

rectangle::rectangle() {
	this->breadth = 0 ;
	this->length = 0 ;
}

rectangle::rectangle(float length,float breadth){
	this->length = length;
	this->breadth = breadth;
}

void rectangle::set_length(float length){
	this->length = length;
}

void rectangle::set_breadth(float breadth){
	this->breadth = breadth;
}

float rectangle::get_breadth(){
	return this->breadth;
}

float rectangle::get_length(){
	return this->length;
}

void rectangle::accept(){
	cout<<"Enter length and breadth : ";
	cin>>this->length>>this->breadth;
}

void rectangle::display(){
	cout<<"Length : "<<this->length<<endl;
	cout<<"Breadth : "<<this->breadth<<endl;
}

float rectangle::calc_area(){
	float area = this->breadth * this->length;
	return area;
}

float rectangle::calc_peri(){
	float peri = (2 * this->length) + (2 * this->breadth);
	return peri;
}

rectangle::~rectangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
