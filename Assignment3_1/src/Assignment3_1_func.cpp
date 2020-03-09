

#include"Assignment3_1.h"

Time::Time()
{
	this->hours = 0;
	this->minutes = 0;
	this->seconds = 0;
	this->date = 5;
	this->month = 3;
	this->year = 2020;
}

Time::Time(int h,int m,int s)
{
	this->hours = h;
	this->minutes = m;
	this->seconds = s;
	this->date = 5;
	this->month = 3;
	this->year = 2020;
}

int Time::getHour()
{
	return this->hours;
}

int Time::getMinute()
{
	return this->minutes;
}

int Time::getSeconds()
{
return this->seconds;
}

void Time::print_date()
{
	cout<<this->date<<"/"<<this->month<<"/"<<this->year<<"\n";
}

void Time::setHour(int hours)
{
	this->hours = hours;
}

void Time::setMinute(int minute)
{
	this->minutes = minute;
}

void Time::setSeconds(int seconds)
{
	this->seconds = seconds;
}

int menu_list()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Set time\n"<<"2. Get time\n"<<"3. Print date";
	cin>>choice;
	return choice;
}

void get_h_m_s(int* p , int* q , int* r)
{
	cout<<"Enter hour, minute and second  : ";
	cin>>*p;
	cin>>*q;
	cin>>*r;
}

