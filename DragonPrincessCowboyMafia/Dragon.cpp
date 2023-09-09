#include "Dragon.h"
#include <string>
#include <iostream>
using namespace std;

Dragon::Dragon()
{
	dName = "Mimu";
	dColorScales = "White";
	dColorEyes = "Green";
	dHp = 100;
}
Dragon::Dragon(string name, string scales, string eyes)
{
	dName = name;
	dColorScales = scales;
	dColorEyes = eyes;
	dHp = 100;
}
int Dragon::getHp()
{
	return dHp;
}
string Dragon::getName()
{
	return dName;
}
string Dragon::getScales()
{
	return dColorScales;
}
string Dragon::getEyes()
{
	return dColorEyes;
}