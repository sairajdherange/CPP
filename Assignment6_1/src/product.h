/*
 * product.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>

namespace std {

class product {
private:
	char title[50];
	float price;
public:
	product();
	product(const char*, float);
	float get_price();
	void set_price(float);
	const char* get_title();
	void set_title(const char*);
	virtual void accept() {
		float price;
		char title[50];
		cout << "Enter title : ";
		cin >> title;
		this->set_title(title);
		cout << "Enter price : ";
		cin >> price;
		this->set_price(price);

	}

	virtual void display() {
		cout << "Title : " << this->get_title() << endl;
		cout << "Price : " << this->get_price() << endl;
	}

	virtual float get_discount() = 0; /*{
		return this->get_price() * 0.00;
	}*/

	virtual ~product();
};

} /* namespace std */

#endif /* PRODUCT_H_ */
