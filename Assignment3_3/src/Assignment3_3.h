/*
 * Assignment3_3.h
 *
 *  Created on: 06-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT3_3_H_
#define ASSIGNMENT3_3_H_

#include <iostream>
using namespace std;

class passwordMismatch
{
private:
	string password;
public :
	passwordMismatch();
	void checkPassword(string &pass);
};



#endif /* ASSIGNMENT3_3_H_ */
