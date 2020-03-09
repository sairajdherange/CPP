//============================================================================
// Name        : Assignment.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include"Assignment3_3.h"

int main()
{
	passwordMismatch p1;
	string pass;

		cout<<"Enter password to check : ";
		cin>>pass;
		try
		{
			p1.checkPassword(pass);
		}
		catch(int i)
		{
			cerr<<"Wrong Password!!!\n";
		}
	return 0;
}
