/*
 * salesmanager.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "salesmanager.h"
#include <iostream>

namespace std {

sales_manager::sales_manager()
: manager(0 , 0 , 0 ) , salesman(0 , 0 , 0 ){
	// TODO Auto-generated constructor stub

}

sales_manager::sales_manager(int id,float sal ,float bonus,float comm)
: manager(id , sal , bonus ) , salesman(id , sal , comm ){
}

void sales_manager::display(){
	employee::display();
	manager::display_manager();
	salesman::display_salesman();
}

void sales_manager::accept(){
	float comm;
	manager::accept();
	cout<<"Enter Commission : ";
	cin>>comm;
	salesman::set_comm(comm);
}

sales_manager::~sales_manager() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
