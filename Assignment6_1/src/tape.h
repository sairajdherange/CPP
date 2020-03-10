/*
 * tape.h
 *
 *  Created on: 09-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef TAPE_H_
#define TAPE_H_
#include "product.h"

namespace std {

class tape : public product{
private:
	int duration;
public:
	tape();
	void set_duration(int);
	int get_duration();
	void accept();
	void display();
	float get_discount();
	virtual ~tape();
};

} /* namespace std */

#endif /* TAPE_H_ */
