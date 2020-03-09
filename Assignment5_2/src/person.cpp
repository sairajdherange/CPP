/*
 * person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "person.h"
#include <cstring>
#include <iostream>
using namespace std;

person::person() {
	strcpy(this->name, "");
	strcpy(this->addr, "");
	this->birth_date.set_day(1);
	this->birth_date.set_month(1);
	this->birth_date.set_year(2000);

}

person::person(const char* name,const char* addr,int day,int month, int year){
	strcpy(this->name, name);
	strcpy(this->addr , addr);
	this->birth_date.set_day(day);
	this->birth_date.set_month(month);
	this->birth_date.set_year(year);
}

char* person::get_name(){
	return this->name;
}

void person::set_name(const char* name){
	strcpy(this->name , name);
}

char* person::get_addr(){
	return this->addr;
}

void person::set_addr(const char* addr){
	strcpy(this->addr , addr);
}

date person::get_birth_date(){
	return this->birth_date;
}

void person::set_birth_date(date birth_date){
	this->birth_date = birth_date;
}

void person::accept(){
//	int day, month, year;
	cout<<"Enter name : ";
	cin>>this->name;
	cout<<"Enter address : ";
	cin>>this->addr;
	cout<<"Birth date "<<endl;
	this->birth_date.accept();
	/*cout<<"Enter birthdate - day month year : ";
	cin>>day>>month>>year;
	this->birth_date.set_day(day);
	this->birth_date.set_month(month);
	this->birth_date.set_year(year);*/

}

void person::display(){
	cout<<"Name : "<<this->name<<endl;
	cout<<"Address : "<<this->addr<<endl;
	cout<<"Birth ";
	this->birth_date.display();
	cout<<endl;
}

person::~person() {
	// TODO Auto-generated destructor stub
}

