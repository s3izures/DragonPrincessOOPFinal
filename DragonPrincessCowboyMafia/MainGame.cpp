#include "Player.h"
#include "Items.h"
#include <iostream>
#include <time.h>
using namespace std;

//Utility Functions
void startScreen(); //WIP
Player characterCreation();
int diceRoll(int sides);



//Main
int main()
{
	//GAME INITIALIZATION
		//Randomly generated number that will determine which random events appear in a single session
		int chaosControl = diceRoll(3);

		//WIP: will change dialogue to be more immersive
		startScreen();
		system("CLS");

		//Player creation
		Player player = characterCreation();
		system("CLS");



	//GAME STORY
		//wip one sec
}



void startScreen()
{
	cout << "WIP";

	//Add option to start game
}
Player characterCreation()
{
	//Values needed to create the o class
	string pName;
	string pClass;

	//Name: loop until player confirms
	bool nameDone = false;

		do
		{
			cout << "Enter name: ";
			cin >> pName;

			bool confirm = false;
			do
			{
				cout << "Is this your name? (yes/no): ";
				string temp;
				cin >> temp;

				if (temp == "yes" || temp == "Yes" || temp == "YES")
				{
					nameDone = true;
					confirm = true;
				}
				else if (temp == "no" || temp == "No" || temp == "NO")
				{
					nameDone = false;
					confirm = true;
				}
				else
				{
					cout << "Invalid input, please try again!" << endl;
				}
			} while (!confirm);

		} while (!nameDone);

		system("CLS"); //Clear screen

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

		do //Will loop until player gets class right
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

			if (classDone) //confirm
			{
				bool confirm = false;
				do
				{
					cout << "Your chosen path is " << pClass << ". Confirm? (yes/no): ";
					string temp;
					cin >> temp;
					if (temp == "yes" || temp == "Yes" || temp == "YES")
					{
						classDone = true;
						confirm = true;
					}
					else if (temp == "no" || temp == "No" || temp == "NO")
					{
						classDone = false;
						confirm = true;
					}
					else
					{
						cout << "Invalid input, please try again!" << endl;
					}
				} while (!confirm);
			}

		} while (!classDone);

	Player temp(pName, pClass);
	return temp;
}
int diceRoll(int sides)
{
	//Sides stands for the number of sides on a dice
	srand(time(NULL));
	return rand() % sides + 1;
}