/*
 * circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.h"
namespace std {

class circle : public shape{
private:
	float radius;
public:
	circle();
	circle(float);
	float get_radius();
	void set_radius(float);
	void accept();
	void display();
	float calc_area();
	float calc_peri();
	virtual ~circle();
};

} /* namespace std */

#endif /* CIRCLE_H_ */
