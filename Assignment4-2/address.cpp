/*
 * address.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "address.h"
#include <iostream>
#include <cstring>
using namespace std;

address::address() {
	strcpy(this->building, "");
	strcpy(this->street, "");
	strcpy(this->city, "");
	this->pin = 0;
}

address::address(const char* building,const char* street,const char* city,int pin)
{
	strcpy(this->building,building);
	strcpy(this->street,street);
	strcpy(this->city,city);
	this->pin = pin;
}

void address::accept(){
	cout << "enter building : ";
	cin >> this->building;
	cout << "enter street : ";
	cin >> this->street;
	cout << "enter city : ";
	cin >> this->city;
	cout << "enter pincode : ";
	cin >> this->pin;
}
void address::display(){
	cout<<"Building : "<<this->building<<endl;
	cout<<"Street : "<<this->street<<endl;
	cout<<"City : "<<this->city<<endl;
	cout<<"Pincode : "<<this->pin<<endl;
}
char* address::get_building(){
	return this->building;
}

char* address::get_street(){
	return this->street;
}
char* address::get_city(){
	return this->city;
}
int address::get_pin(){
	return this->pin;
}
void address::set_building(const char* building){
	strcpy(this->building,building);
}

void address::set_street(const char* street){
	strcpy(this->street,street);
}

void address::set_city(const char* city){
	strcpy(this->city,city);
}

void address::set_pin(int){
	this->pin = pin;
}

address::~address() {
	// TODO Auto-generated destructor stub
}

