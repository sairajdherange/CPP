//============================================================================
// Name        : Assignment2_1.cpp
// Author      : Sairaj Dherange 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Assignment2_1.h"

int main()
{
	Cylinder c_main;
	int choice;
	while ((choice=menu_list())!=0)
	{
		switch(choice)
		{
		case 1 : default_constructor();
		break;

		case 2 : parameterized_constructor();
		break;

		case 3 : c_main.getVolume();
		break;

		case 4 :c_main.printVolume();
		break;
		}
	}
	return 0;
}
