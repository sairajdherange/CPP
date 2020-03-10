/*
 * product.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "product.h"
#include <cstring>
#include <iostream>

namespace std {

product::product() {
	strcpy(this->title,"");
	this->price = 0 ;
}

product::product(const char* title, float price){
	strcpy(this->title,title);
	this->price = price;
}

float product::get_price(){
	return this->price;
}

void product::set_price(float price){
	this->price = price;
}

const char* product::get_title(){
	return this->title;
}

void product::set_title(const char* title){
	strcpy(this->title , title);
}

/*
virtual void product::accept(){
	cout<<"Enter title : ";
	cin>>this->title;
	cout<<"Enter price : ";
	cin>>this->price;
}

virtual void product::display(){
	cout<<"Title : "<<this->title<<endl;
	cout<<"Price : "<<this->price<<endl;
}

virtual float product::get_discount(){
	return this->get_price() * 0.00;
}
*/

product::~product() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
