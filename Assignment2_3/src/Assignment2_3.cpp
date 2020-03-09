//============================================================================
// Name        : Assignment2_3.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sqr(int num)
{
	if(num < 0)
		throw 1;
	else
		return num*num;
}

int main()
{
	int num, square1;
	cout<<"Enter a number : ";
	cin>>num;
	try
	{
		square1 = sqr(num);
		cout<<square1;
	}
	catch(int i)
	{
		cout<<"Negative number entered.";
	}

	return 0;
}
