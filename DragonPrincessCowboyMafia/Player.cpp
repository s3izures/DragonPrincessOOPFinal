#include "Player.h"

Player::Player()
{
	//Name and class
	pName = "Felicia";
	pClass = "Adventurer";

	//Stats set, set to 0 as placeholder for now
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
