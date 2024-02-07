#pragma once
#include <iostream>
using namespace std;
class Wheel
{
private:
	float diameter;

public:

	float getDiameter();
	void setDiameter(float d);

	Wheel();

	Wheel(float d);
	void printType();


};

