/*
 * salesman.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "employee.h"

namespace std {

class salesman : public employee {
private:
	float comm;
public:
	salesman();
	salesman(int,float,float);
	float get_comm();
	void set_comm(float);
	void display();
	void accept();
	virtual ~salesman();
};

} /* namespace std */

#endif /* SALESMAN_H_ */
