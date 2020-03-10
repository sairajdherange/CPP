/*
 * matrix.h
 *
 *  Created on: 11-Mar-2020
 *      Author: Sairaj Dherange
 */

#ifndef MATRIX_H_
#define MATRIX_H_

namespace std {

class matrix {
	int rows;
	int columns;
	int **ptra;
	int **ptrb;

public:
	matrix();
	matrix(int,int);
	void set_rows(int);
	int get_rows();
	void set_columns(int);
	int get_columns();
	void accept();
	void display();
	void add_matrix();
	void subtract_matrix();
	void multiply_matrix();
	void transpose_matrix();
	virtual ~matrix();
};

} /* namespace std */

#endif /* MATRIX_H_ */
