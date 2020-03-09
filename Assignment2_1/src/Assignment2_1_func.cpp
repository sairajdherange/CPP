/*
 * Assignment2_1_func.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: Sairaj Dherange
 */

#include <iostream>
using namespace std;
#include "Assignment2_1.h"

int menu_list()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Parameterless constructor\n"<<"2. Parameterized Constructor\n";
	cout<<"3. Get Volume\n"<<"4. Print Volume\n"<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

void default_constructor()
{
	Cylinder c1;
}

void parameterized_constructor()
{
	double a,b;
	cout<<"Enter the radius and height : ";
	cin>>a;
	cin>>b;
	Cylinder c2(a,b);
	c2.getVolume();
	c2.printVolume();
}

Cylinder::Cylinder():radius(0),height(0){}

Cylinder::Cylinder(double radius, double height):radius(radius),height(height)
{
	this->volume = 3.14 * radius * radius * height;
}

void Cylinder::getVolume()
{
	this->volume = 3.14 * this->radius * this->radius * this->height;
}

void Cylinder::printVolume()
{
	cout<<"The volume of cylinder is "<<this->volume<<".\n";
}
