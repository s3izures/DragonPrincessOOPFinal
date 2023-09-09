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

	//Placeholder stats atm
	pWeapon.name = "Dull Dagger";
	pWeapon.atk = 0;
	pShield.name = "None";
	pShield.def = 0;
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

	//Placeholder stats atm
	pWeapon.name = "Dull Dagger";
	pWeapon.atk = 0;
	pShield.name = "None";
	pShield.def = 0;
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
int Player::getHp()
{
	return pHp;
}
int Player::getAtk()
{
	return pAtk;
}
int Player::getDef()
{
	return pDef;
}
int Player::getSpd()
{
	return pSpd;
}
weapon Player::getWeapon()
{
	return pWeapon;
}
shield Player::getShield()
{
	return pShield;
}
//Items Player::getItem(int index)
//{
//	return pInv[index];
//}

//Prints
void Player::showProfile()
{
	cout << "---[ PROFILE ]---" << endl;
	cout << "Princess " << getName() << ", the " << getClass() << endl; //name and class

	cout << endl; //spacing

	cout << "-- stats --" << endl; //stats
	cout << "Health: " << getHp() << endl;
	cout << "Attack: " << getAtk() << endl;
	cout << "Defense: " << getDef() << endl;
	cout << "Speed: " << getSpd() << endl;

	cout << endl; //spacing

	cout << "-- currently equipped --" << endl; //weapon and shield
	cout << "Weapon: " << pWeapon.name << " [+" << pWeapon.atk << " atk]" << endl;
	cout << "Shield: " << pShield.name << " [+" << pShield.def << " def]" << endl;
}
//void Player::showInventoryAll()
//{
//	for (int i = 0; i < pInv.size(); i++)
//	{
//		//get item name and print in list like [0] item
//	}
//}
//void Player::showItem()
//{
//	//Plan: have item class have getName and getDescription functions to print out
//	//Basically this function will go [ItemIndex] Item name - Item description
//}

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
void Player::setWeapon(weapon newWeapon)
{
	pWeapon = newWeapon;
}
void Player::setShield(shield newShield)
{
	pShield = newShield;
}
//void Player::addItem(Items&& newItem)
//{
//	//change 3 to max inventory slots if needed
//	if (pInv.size() < 3)
//	{
//		pInv.push_back(newItem);
//	}
//	else
//	{
//		cout << "Inventory Full!" << endl;
//		cout << "Discard an item from inventory? (yes/no): ";
//		string temp;
//		cin >> temp;
//		if (temp == "yes" || temp == "Yes" || temp == "YES")
//		{
//			bool done = false;
//			do
//			{
//				showInventoryAll();
//				cout << "Type in the index of the item you wish to remove: ";
//				int index = -1;
//				cin >> index;
//				if (index < pInv.size() || index >= 0)
//				{
//					removeItem(index);
//					done = true;
//				}
//				else
//				{
//					cout << "Invalid index, please try again." << endl;
//				}
//			} while (!done);
//
//			//Put new item in
//			pInv.push_back(newItem);
//		}
//		else if (temp == "no" || temp == "No" || temp == "NO")
//		{
//			cout << "Item dropped." << endl;
//		}
//		else
//		{
//			cout << "Invalid input, please try again!" << endl;
//		}
//	}
//}
//void Player::removeItem(int index)
//{
//	if (index < pInv.size() && index >= 0)
//	{
//		pInv.erase(pInv.begin() + index);
//		cout << "Dropped item";
//	}
//	else if (pInv.size() == 0)
//	{
//		throw new exception("Inventory is empty, nothing can be dropped!");
//	}
//	else
//	{
//		throw new exception("Item cannot be dropped!");
//	}
//}