/*
 * book.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "book.h"

namespace std {

book::book() {
	this->pages = 0 ;
}

int book::get_pages(){
	return this->pages;
}

void book::set_pages(int pages){
	this->pages = pages;
}

float book::get_discount(){
	return this->get_price() * 0.1;
}

void book::accept(){
	product::accept();
	cout<<"Enter pages : ";
	cin >> this->pages;
}

void book::display(){
	product::display();
	cout<<"Pages : "<<this->pages<<endl;
}

book::~book() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
