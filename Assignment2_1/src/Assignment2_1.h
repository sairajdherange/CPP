/*
 * Assignment2_1.h
 *
 *  Created on: 04-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT2_1_H_
#define ASSIGNMENT2_1_H_

int menu_list();
void default_constructor();
void parameterized_constructor();

class Cylinder
{
private:
	double  radius, height, volume;
public:
	Cylinder();
	Cylinder(double radius, double height);
	void getVolume();
	void printVolume();
};



#endif /* ASSIGNMENT2_1_H_ */
