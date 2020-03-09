/*
 * address.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_

class address {
private:
	char building[30];
	char street[30];
	char city[20];
	int pin;
public:
	address();
	address(const char*,const char*, const char*,int);
	void accept();
	void display();
	char* get_building();
	char* get_street();
	char* get_city();
	int get_pin();
	void set_building(const char*);
	void set_street(const char*);
	void set_city(const char*);
	void set_pin(int);
	virtual ~address();
};

#endif /* ADDRESS_H_ */
