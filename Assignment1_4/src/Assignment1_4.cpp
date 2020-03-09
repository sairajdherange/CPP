//============================================================================
// Name        : Assignment1_4.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class box
{
private:
	int length,breadth,height;
public:
	void acceptRecord();
	void printVolume();
};

int menu()
{
	int choice;
	cout<<"0. Exit\n"<<"1. Accept Records\n"<<"Print volume\n"<<"Enter choice\n";
	cin>>choice;
	return choice;
}

void box :: acceptRecord()
{
	cout<<"Enter length , breadth & height of box in metres : ";
	cin>>this->length;
	cin>>this->breadth;
	cin>>this->height;
}

void box ::printVolume()
{
	int volume = this->breadth * this->length * this->height;
	cout<<"Volume is "<<volume<<" cubic metres\n";
}

int main() {
	int choice;
	box b1;
	while ((choice=menu())!=0)
	{
		switch(choice)
		{
		case 1 : b1.acceptRecord();
		break;

		case 2 :b1.printVolume();
		break;

		default : cout<<"Invalid Option!!!\n";
		}
	}
	return 0;
}
