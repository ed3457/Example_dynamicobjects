#include "SuperWheel.h"

void SuperWheel::setMaterial(string m)
{
	material = m;
}

string SuperWheel::getMaterial()
{
	return material;
}

void SuperWheel::printType()
{
	cout << "Super Wheel\n";
}
