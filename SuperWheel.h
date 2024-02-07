#pragma once
#include "Wheel.h"
#include <string>
using namespace std;
class SuperWheel :public Wheel
{
private:
	string material;

public:
	void setMaterial(string m);

	string getMaterial();

	void printType();

};

