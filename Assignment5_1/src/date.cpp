/*
 * date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "date.h"
#include <iostream>
using namespace std;

date::date() {
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

date::date(int day,int month,int year){
	this->day = day;
	this->month = month;
	this->year = year;
}

int date::get_day(){
	return this->day;
}

void date::set_day(int day){
	this->day = day ;
}

int date::get_month(){
	return this->month;
}

void date::set_month(int month){
	this->month = month;
}

int date::get_year(){
	return this->year;
}
void date::set_year(int year){
	this->year = year;
}

void date::display(){
	cout<<"Date is "<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}

void date::accept(){
	cout<<"Enter day month year : ";
	cin>>this->day;
	cin>>this->month;
	cin>>this->year;
}

bool date::is_leap_year()
{
	if((this->year % 4) == 0)
		return true;
	else
		return false;
}

date::~date() {
	// TODO Auto-generated destructor stub
}

