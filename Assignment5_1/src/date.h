/*
 * date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef DATE_H_
#define DATE_H_

class date {
private:
	int day;
	int month;
	int year;
public:
	date();
	date(int,int,int);
	int get_day();
	void set_day(int);
	int get_month();
	void set_month(int);
	int get_year();
	void set_year(int);
	void display();
	void accept();
	bool is_leap_year();
	virtual ~date();
};

#endif /* DATE_H_ */
