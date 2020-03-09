//============================================================================
// Name        : Assignment2_2.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;
#include <string>
#include"Assignment2_2.h"


int main()
{
	int choice,i,rtemp,flag = 0;
	student s_main[3];
	while((choice=menu())!=0)
	{
		switch(choice)
		{
		case 1 : for(i = 0 ; i < 3 ; i++)
				{
					s_main[i].accept_records();
				}
		break;

		case 2 : cout<<"The students record is as follows";
			for(i = 0 ; i < 3 ; i++)
				{
					s_main[i].print_records();
				}
		break;

		case 3 :
				int search_roll_no;
				cout<<"Enter the roll number to be searched : ";
				cin>>search_roll_no;
				for(i = 0 ; i < 3 ; i++)
				{
					rtemp = s_main[i].get_roll();
					if(rtemp == search_roll_no)
					{	s_main[i].print_records();
						flag = 1;
					}
				}if(flag ==0)
					cout<<"Roll Number not found";
		break;

		case 4 :// qsort(s_main , 3 , sizeof(student) , );
		break;
		}
	}
	return 0;
}
