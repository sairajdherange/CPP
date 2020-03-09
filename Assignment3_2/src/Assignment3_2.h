/*
 * Assignment3_2.h
 *
 *  Created on: 05-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT3_2_H_
#define ASSIGNMENT3_2_H_
#include <iostream>
using namespace std;

class matrix
{
private:
	int num[4];
public:
	matrix();
	matrix(int n1, int n2, int n3, int n4);
	void accept();
	void print();
	void add(matrix *m1);
	void subtract(matrix *m1);
	void multiply(matrix *m1);
	void transpose(matrix *m1);
};

int menu_list();
void swap(int *a , int *b);



#endif /* ASSIGNMENT3_2_H_ */
