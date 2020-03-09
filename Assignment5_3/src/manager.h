/*
 * manager.h
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "employee.h"

namespace std {

class manager : public employee {
private:
	float bonus;
public:
	manager();
	manager(int,float,float);
	float get_bonus();
	void set_bonus(float);
	void accept();
	void display();
	void display_manager();
	void accept_manager();
	virtual ~manager();
};

} /* namespace std */

#endif /* MANAGER_H_ */
