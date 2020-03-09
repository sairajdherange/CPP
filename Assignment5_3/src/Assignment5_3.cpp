/*
 * Assignment5_3.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: Sairaj Dherange
 */


#include <iostream>
#include "salesmanager.h"
using namespace std;

int main(){
	sales_manager sm1;
	sm1.display();

	sm1.accept();

	sm1.display();

	sales_manager sm2(505 , 6000 , 500 , 10);

	sm2.display();

	return 0;
}
