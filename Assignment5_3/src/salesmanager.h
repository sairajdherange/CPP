/*
 * salesmanager.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_
#include "manager.h"
#include "salesman.h"


namespace std {

class sales_manager : public salesman , public manager{
public:
	sales_manager();
	sales_manager(int,float,float,float);
	void display();
	void accept();
	virtual ~sales_manager();
};

} /* namespace std */

#endif /* SALESMANAGER_H_ */
