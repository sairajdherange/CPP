/*
 * salesman.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "employee.h"

namespace std {

class salesman : virtual public employee {
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
protected:
	void display_salesman();
	void accept_salesman();
};

} /* namespace std */

#endif /* SALESMAN_H_ */
