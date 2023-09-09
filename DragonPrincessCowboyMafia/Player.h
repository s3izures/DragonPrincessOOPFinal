#pragma once
#include "Items.h"
#include <string>
#include <vector>
using namespace std;

//Weapon and Shield
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
	weapon pWeapon;
	shield pShield;

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
	string getName();
	string getClass();
	string getWeapon();
	string getShield();
	Items getItem(int index); //To print all, for loop the entire vector

	//Prints
	void showProfile();
	void showInventoryAll();
	void showItem();

	//Setter / Add
	void setWeapon(weapon newWeapon);
	void setShield(shield newShield);
	void addItem(Items&& newItem); //If player has too many items, maybe ask which to remove?
	void removeItem(int index); //Type in index of items, remove item there with vector.erase(vec.begin() + index);

};

