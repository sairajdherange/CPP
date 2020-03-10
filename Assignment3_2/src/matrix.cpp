/*
 * matrix.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: Sairaj Dherange
 */

#include "matrix.h"
#include <iostream>

namespace std {

matrix::matrix() {
	this->columns = 3;
	this->rows = 3;
	ptra = new int*[rows];
	for (int i = 0; i < rows; ++i) {
		ptra[i] = new int[columns];
	}
	ptrb = new int*[rows];
	for (int i = 0; i < rows; ++i) {
		ptrb[i] = new int[columns];
	}
}

matrix::matrix(int rows,int columns){
	this->columns = columns;
	this->rows = rows;
	ptra = new int*[rows];
	for (int i = 0; i < rows; ++i) {
		ptra[i] = new int[columns];
	}
	ptrb = new int*[rows];
	for (int i = 0; i < rows; ++i) {
		ptrb[i] = new int[columns];
	}
}

void matrix::set_rows(int rows){
	this->rows = rows;
}

int matrix::get_rows(){
	return this->rows;
}

void matrix::set_columns(int columns){
	this->columns = columns;
}

int matrix::get_columns(){
	return this->columns;
}

void matrix::accept(){
	cout<<"Enter the elements of first matrix : ";
	for(int i = 0 ; i < this->rows ; i++)
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<"Enter element of a ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>ptra[i][j];
		}
	cout<<"Enter the elements of second matrix : ";
	for(int i = 0 ; i < this->rows ; i++)
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<"Enter element of b ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>ptrb[i][j];
		}
}

void matrix::display(){
	cout<<"The elements of first matrix are"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<ptra[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
	cout<<"The elements of second matrix are"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<ptrb[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
}

void matrix::add_matrix(){
	int temp[rows][columns];
	for(int i = 0 ; i < this->rows ; i++)
		for(int j = 0 ; j < this->columns ; j++)
		{
			temp[i][j] = ptra[i][j] + ptrb[i][j];
		}
	cout<<"The addition of matrix is"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<temp[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
}

void matrix::subtract_matrix(){
	int temp[rows][columns];
	for(int i = 0 ; i < this->rows ; i++)
		for(int j = 0 ; j < this->columns ; j++)
		{
			temp[i][j] = ptra[i][j] - ptrb[i][j];
		}
	cout<<"The addition of matrix is"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<temp[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
}

void matrix::multiply_matrix(){
	int mult[rows][columns];
	for( int i = 0; i < this->rows; ++i)
		for( int j = 0; j < this->columns; ++j)
		{
			mult[i][j]=0;
			for(int k = 0; k < this->columns; ++k)
			{
				mult[i][j] += ptra[i][k] * ptrb[k][j];
			}
		}
	cout<<"The Multiplication of matrix is"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<mult[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
}

void matrix::transpose_matrix(){
	int transpose_ptra[rows][columns], transpose_ptrb[rows][columns];
	for( int i = 0; i < this->rows; ++i)
		for( int j = 0; j < this->columns; ++j)
		{
			transpose_ptra[j][i] = ptra[i][j];
			transpose_ptrb[j][i] = ptrb[i][j];
		}
	cout<<"The transpose of first matrix is"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<transpose_ptra[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
	cout<<"The transpose of second matrix is"<<endl;
	for(int i = 0 ; i < this->rows ; i++){
		cout<<"|";
		for(int j = 0 ; j < this->columns ; j++)
		{
			cout<<transpose_ptrb[i][j];
			if(j != columns-1)
				cout<<"\t";
		}
		cout<<"|"<<endl;
	}
}

matrix::~matrix() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
