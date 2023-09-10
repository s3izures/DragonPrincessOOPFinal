#include "Player.h"
#include "Item.h"
#include "Dragon.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <time.h>
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
	}
	else if (pClass == "Warrior")
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
	}
	else if (pClass == "Pacifist")
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
	}
	else //use default stats from "Felicia"
	{
		pHp = 0;
		pAtk = 0;
		pDef = 0;
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
	}
}

//Prints
void Player::showProfile(Dragon&& dragon)
{
	cout << "---[ PROFILE ]---" << endl;
	cout << "Princess " << getName() << ", the " << getClass() << endl; //name and class

	cout << endl; //spacing

	cout << "-- stats --" << endl; //stats
	cout << "Health: " << getStat(0) << endl;
	cout << "Attack: " << getStat(1) << endl;
	cout << "Defense: " << getStat(2) << endl;

	cout << endl; //spacing

	cout << "---[ DRAGON ]---" << endl;
	cout << dragon.getName() << endl;
	cout << "Appearance: " << dragon.getScales() << " scales, " << dragon.getEyes() << " eyes." << endl;
	//Randomly generated flavor text
	srand(time(NULL));
	int txt = rand() % 3;
	switch (txt)
	{
	case 0:
		cout << dragon.getName() << " is napping nearby." << endl;
		break;
	case 1:
		cout << dragon.getName() << " is juggling rocks somehow." << endl;
		break;
	case 2:
		cout << dragon.getName() << " nibbles on her dress." << endl;
		break;
	case 3:
		cout << dragon.getName() << " sniffs you." << endl;
		break;
	default:
		cout << dragon.getName() << " sits nicely." << endl;
		break;
	}
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