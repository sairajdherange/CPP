//============================================================================
// Name        : Assignment5_2.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "person.h"
#include "employee.h"

int main() {
	employee emp;
	emp.display();

	emp.accept();

	emp.display();

	/*emp.employee(36055 , 50000 , "R&D" , 6 , 6 , 2020);

	emp.display();
*/
	person man;
	man.display();

	man.accept();

	man.display();
/*
	man.person("Sairaj" , "Pune" , 3, 5, 1997);

	man.display();*/
	return 0;

}
