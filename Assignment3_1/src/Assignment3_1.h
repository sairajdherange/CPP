/*
 * Assignment3_1.h
 *
 *  Created on: 05-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT3_1_H_
#define ASSIGNMENT3_1_H_
#include <iostream>
using namespace std;

class Time
{
private:
	int hours,minutes,seconds,date,month,year;
public:
	Time();
	Time(int h,int m,int s);
	int getHour();
	int getMinute();
	int getSeconds();
	void print_date();
	void setHour(int hours);
	void setMinute(int minute);
	void setSeconds(int seconds);
};

int menu_list();
void get_h_m_s(int* p , int* q , int* r);
/*
void print_time();
void print_date();
*/


#endif /* ASSIGNMENT3_1_H_ */
