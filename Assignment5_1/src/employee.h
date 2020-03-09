/*
 * employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "date.h"

class employee {
	int id;
	float sal;
	char dept[24];
	date joining;
public:
	employee();
	employee(int,float,const char*,int,int,int);
	int get_id();
	void set_id(int);
	float get_sal();
	void set_sal(float);
	char* get_dept();
	void set_dept(const char*);
	date get_joining_date();
	void set_joining_date(int,int,int);
	void display();
	void accept();
	virtual ~employee();
};

#endif /* EMPLOYEE_H_ */
