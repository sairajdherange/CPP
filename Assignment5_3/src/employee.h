/*
 * employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class employee {
	int id;
	float sal;
public:
	employee();
	employee(int,float);
	int get_id();
	void set_id(int);
	float get_sal();
	void set_sal(float);
	void display();
	void accept();
	virtual ~employee();
};

#endif /* EMPLOYEE_H_ */
