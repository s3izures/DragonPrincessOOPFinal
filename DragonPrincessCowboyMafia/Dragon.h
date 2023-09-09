#pragma once
#include <string>
#include <iostream>
using namespace std;

class Dragon
{
private:
	string dName;
	string dColorScales;
	string dColorEyes;
	int dHp;
public:
	Dragon();
	Dragon(string name, string scales, string eyes);
	int getHp();
	string getName();
	string getScales();
	string getEyes();
};

