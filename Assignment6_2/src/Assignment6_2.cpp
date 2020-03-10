//============================================================================
// Name        : Assignment6_2.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Assignment6_2.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"

int main() {
	float total_area1 = 0, total_peri = 0,a,p;
	int choice , num = 0;
	shape* ptr[5];

	cout<<"Enter 5 shapes and details"<<endl;
	for(int i =0 ; i < 5 ; i++)
	{
		choice = menulist();
		switch(choice)
		{
		case 1 : ptr[num] = new circle;
			ptr[num]->accept();
			a = ptr[num]->calc_area();
			total_area(&a , &total_area1);
			p = ptr[num]->calc_peri();
			total_perimeter(&p , &total_peri);
		break;

		case 2 : ptr[num] = new rectangle;
			ptr[num]->accept();
			a = ptr[num]->calc_area();
			total_area(&a, &total_area1);
			p = ptr[num]->calc_peri();
			total_perimeter(&p, &total_peri);
		break;

		case 3 : ptr[num] = new square;
			ptr[num]->accept();
			a = ptr[num]->calc_area();
			total_area(&a, &total_area1);
			p = ptr[num]->calc_peri();
			total_perimeter(&p , &total_peri);
		break;


		num++;
		}
	}

	cout<<"Total area is "<<total_area1<<endl;
	cout<<"Total perimeter is "<<total_peri<<endl;

	return 0;
}
