/*
 * book.h
 *
 *  Created on: 09-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef BOOK_H_
#define BOOK_H_
#include "product.h"

namespace std {

class book : public product{
	int pages;
public:
	book();
	int get_pages();
	void set_pages(int);
	void accept();
	void display();
	float get_discount();
	virtual ~book();
};

} /* namespace std */

#endif /* BOOK_H_ */
