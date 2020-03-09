/*
 * Assignment2_2.h
 *
 *  Created on: 04-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef ASSIGNMENT2_2_H_
#define ASSIGNMENT2_2_H_
#include <string>
#include <iostream>
using namespace std;

class student
{
private:
	string name, gender;
	double percentage,roll_no, maths_marks, sci_marks, english_marks;
public:
	void accept_records();
	void print_records();
	void search_roll_no();
	void sort_roll_no();
	int get_roll();
};

void SortRecord();
int menu();

#endif /* ASSIGNMENT2_2_H_ */
