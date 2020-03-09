/*
 * person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef PERSON_H_
#define PERSON_H_
# include "date.h"

class person {
private:
	char name[40];
	char addr[100];
	date birth_date;
public:
	person();
	person(const char*,const char*,int,int,int);
	char* get_name();
	void set_name(const char*);
	char* get_addr();
	void set_addr(const char*);
	date get_birth_date();
	void set_birth_date(date);
	void accept();
	void display();
	virtual ~person();
};

#endif /* PERSON_H_ */
