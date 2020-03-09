//============================================================================
// Name        : Assignment3_1.cpp
// Author      : Sairaj Dherange 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Assignment3_1.h"

int main()
{
	Time *t1 = new Time;
	int h,m,s;
	int choice;
	while((choice=menu_list()) != 0)
	{
		switch(choice)
		{
		case 1 :
		get_h_m_s(&h,&m,&s);
		t1->setHour(h);
		t1->setMinute(m);
		t1->setSeconds(s);
		cout<<"Time Set";
		break;

		case 2 :

		h = t1->getHour();
		m = t1->getMinute();
		s = t1->getHour();

		cout<<"Time is "<<h<<":"<<m<<":"<<s<<".\n";
		break;

		case 3 : t1->print_date();
		break;

		default : cerr<<"Invalid Option!!!\n";
		}
	}
	return 0;
}
