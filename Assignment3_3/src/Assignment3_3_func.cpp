

#include"Assignment3_3.h"

passwordMismatch::passwordMismatch()
	{
		this->password="sunbeam";
	}

void passwordMismatch::checkPassword(string &pass)
{
	if(pass != this->password)
		throw 1;
	else
		cout<<"Password Matched\n";
}

