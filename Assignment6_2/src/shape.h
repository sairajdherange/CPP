/*
 * shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#define PI 3.14
namespace std {

class shape {
public:
	shape();
	virtual void accept() = 0;
	virtual void display() = 0;
	virtual float calc_area() = 0;
	virtual float calc_peri() = 0;
	virtual ~shape();
};

} /* namespace std */

#endif /* SHAPE_H_ */
