#include "Player.h"
#include "Items.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

//Constructors
Player::Player()
{
	//Name and class
	pName = "Felicia";
	pClass = "None";

	//Stats set to default value, set to 0 as placeholder for now
	pHp = 0;
	pAtk = 0;
	pDef = 0;
	pSpd = 0;
}
Player::Player(string pName, string pClass)
{
	//Name and class
	this->pName = pName;
	this->pClass = pClass;

	//Stats set, set to 0 as placeholder for now
	if (pClass == "Adventurer")
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
		pSpd = 0;
	}
	else if (pClass == "Warrior")
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
		pSpd = 0;
	}
	else if (pClass == "Pacifist")
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
		pSpd = 0;
	}
	else //use default stats from "Felicia"
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
		pSpd = 0;
	}
}

//Getters
string Player::getName()
{
	return pName;
}
string Player::getClass()
{
	return pClass;
}
int Player::getStat(int stat)
{
	switch (stat)
	{
	case 0: //HP
		return pHp;
	case 1: //ATK
		return pAtk;
	case 2: //DEF
		return pDef;
	case 3: //SPD
		return pSpd;
	}
}

//Prints
void Player::showProfile()
{
	cout << "---[ PROFILE ]---" << endl;
	cout << "Princess " << getName() << ", the " << getClass() << endl; //name and class

	cout << endl; //spacing

	cout << "-- stats --" << endl; //stats
	cout << "Health: " << getStat(0) << endl;
	cout << "Attack: " << getStat(1) << endl;
	cout << "Defense: " << getStat(2) << endl;
	cout << "Speed: " << getStat(3) << endl;

	cout << endl; //spacing
}

//Setters
void Player::setHp(int val)
{
	pHp = val;
}
void Player::setAtk(int val)
{
	pAtk = val;
}
void Player::setDef(int val)
{
	pDef = val;
}
void Player::setSpd(int val)
{
	pSpd = val;
}