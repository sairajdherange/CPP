/*
 * rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "shape.h"
#include <iostream>

namespace std {

class rectangle : public shape{
private:
	float length;
	float breadth;
public:
	rectangle();
	rectangle(float,float);
	void set_length(float);
	void set_breadth(float);
	float get_breadth();
	float get_length();
	void accept();
	void display();
	float calc_area();
	float calc_peri();
	virtual ~rectangle();
};

} /* namespace std */

#endif /* RECTANGLE_H_ */
