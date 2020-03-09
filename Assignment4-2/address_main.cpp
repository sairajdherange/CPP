/*
 * address_main.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */
#include "address.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	address a1;
	a1.display();
	cout<<endl;

	a1.accept();
	a1.display();

	a1.set_building("Paradise");
	a1.set_street("Pimpri road");
	a1.set_city("Pune");
	a1.set_pin(411018);

	a1.display();
	cout<<endl;

	address a2("Antheia" , "Nehrunagar road" , "Pune" , 411021);
	cout<<a2.get_building()<<endl;
	cout<<a2.get_street()<<endl;
	cout<<a2.get_city()<<endl;
	cout<<a2.get_pin()<<endl;

}

