// Example_dynamicobjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SuperWheel.h"
using namespace std; 
int main()
{
	const int count = 4;
	Wheel wheels[count]; 

	int noWheels = 6;

	Wheel* setOfWheels = new Wheel[noWheels];

	//for (int i = 0; i < noWheels; i++)
	//	setOfWheels[i].printType();


	//delete[] setOfWheels;

	//setOfWheels = new Wheel[4];

	int size2 = 4; 
	Wheel** setOfWheels2 = new Wheel * [size2];

	for (int i = 0; i < size2; i++)
		setOfWheels2[i] = new Wheel();

	for (int i = 0; i < size2; i++)
		setOfWheels2[i]->printType();

}

