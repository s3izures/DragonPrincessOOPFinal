#pragma once
#include "Items.h"
#include <string>
#include <vector>
using namespace std;

//Weapon and Shield, WILL BE CHANGED INTO CLASS FOR CONVENIENCE
struct weapon //Player weapon
{
	string name;
	int atk;
};
struct shield //Player shield
{
	string name;
	int def;
};

//Princess
class Player
{
private:
	string pName; //Player name, entered by player
	string pClass; //Selected by player: Adventurous, Warrior, and Pacifist (will affect stats)
	weapon pWeapon; //Gives player bonus atk
	shield pShield; //Gives player bonus def

	//Player stats, determined by class and may or may not change according to equipment
	int pHp;
	int pAtk;
	int pDef;
	int pSpd;

	vector<Items&&> pInv; //Inventory vector, add Item objects into it

public:
	//Constructors
	Player(); //Default name will be Felicia, Class is adventure maybe?
	Player(string pName, string pClass);

	//Getters
	string getName(); //Will be used for dialogue (EX: This is princess namehere)
	string getClass(); //Will be used for dialogue, or maybe variation (EX: warrior class gets different encounter/dialogue variation, etc)
	int getHp();
	int getAtk();
	int getDef();
	int getSpd();
	weapon getWeapon();
	shield getShield();
	Items getItem(int index); //To print all, for loop the entire vector

	//Prints
	void showProfile();
	void showInventoryAll(); //WIP!!!
	void showItem(); //WIP!!!

	//Setter & the like
	void setHp(int val);
	void setAtk(int val);
	void setDef(int val);
	void setSpd(int val);
	void setWeapon(weapon newWeapon);
	void setShield(shield newShield);
	void addItem(Items&& newItem); //If player has too many items, maybe ask which to remove?
	void removeItem(int index); //Type in index of items, remove item there with vector.erase(vec.begin() + index);

};

