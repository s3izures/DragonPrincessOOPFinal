#include "Player.h"
#include "Items.h"
#include <iostream>
using namespace std;

//Functions
void startScreen();
Player characterCreation();



//Main
int main()
{
	//will change dialogue to be more immersive
	startScreen();

	//Player creation
	Player player = characterCreation();

	player.showProfile();
}



void startScreen()
{
	cout << "WIP";

}

Player characterCreation()
{
	//Values needed to create the o class
	string pName;
	string pClass;

	//Name
	cout << "Enter name: ";
	cin >> pName;

	cout << endl; //spacing

	//Class Selection:
	//done via entering number to avoid spelling error mistakes from player
	bool classDone = false;

	//Display paths
	cout << "Select a path: " << endl;
	cout << endl;
	cout << "[1] Adventurer" << endl;
	cout << "DESCRIPTION HERE" << endl;
	cout << endl;
	cout << "[2] Warrior" << endl;
	cout << "DESCRIPTION HERE" << endl;
	cout << endl;
	cout << "[3] Pacifist" << endl;
	cout << "DESCRIPTION HERE" << endl;
	cout << endl;

	do
	{
		cout << "Enter the number/index of your chosen class: ";
		int tempClass = 0;
		cin >> tempClass;

		if (tempClass == 1)
		{
			pClass = "Adventurer";
			classDone = true;
		}
		else if (tempClass == 2)
		{
			pClass = "Warrior";
			classDone = true;
		}
		else if (tempClass == 3)
		{
			pClass = "Pacifist";
			classDone = true;
		}
		else
		{
			tempClass = 0;
			classDone = false;
			cout << "Invalid input, please try again." << endl;
		}
	} while (!classDone);

	Player temp(pName, pClass);
	return temp;
}