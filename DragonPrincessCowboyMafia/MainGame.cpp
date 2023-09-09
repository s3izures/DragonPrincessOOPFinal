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
		//Randomly generated number that will determine which random events appear in a single session (1-3)
		int chaosControl = diceRoll(3);

		//Random events summary:
		//1 = events here
		//2 =
		//3 =

		//WIP: will change dialogue to be more immersive
		startScreen();
		system("CLS");

		//Player creation
		Player player = characterCreation();
		//need to add dragon creation
		system("CLS");

		//Lore Variables
		string kingdomName = "PLACEHOLDER kingdom";
		string kingName = "PLACEHOLDER queen elizabeth";
		string knightName = "PLACEHOLDER knight";



	//GAME STORY
	// R"(text here)" is used so that raw text will be printed
	//Highlight decisions that players can make in CAPS

		//Introduction
		cout << "pease enter scwript" << endl;
}



void startScreen()
{
	bool done = false;
	do
	{
		cout << R"( ___              __ _                   ___       _                              
|   \  _ _  __ _ / _` | ___  _ _        | _ \ _ _ (_) _ _   __  ___  ___ ___      
| |) || '_|/ _` |\__. |/ _ \| ' \       |  _/| '_|| || ' \ / _|/ -_)(_-/(_-/      
|___/ |_|  \__/_||___/ \___/|_||_|      |_|  |_|  |_||_||_|\__|\___|/__//__/      
)";
		cout << "-----------------------[ Night of The Great Escape ]-----------------------" << endl;

		cout << endl; //spacing

		//Options
		string opt;
		cout << "========= MENU ==========" << endl;
		cout << "Begin - Starts the game." << endl;
		cout << "Help - Shows how to play." << endl;
		cout << "=========================" << endl;
		cout << endl; //spacing
		cout << "> ";
		cin >> opt;

		if (opt == "Begin" || opt == "begin" || opt == "BEGIN")
		{
			system("CLS");

			cout << "Is this your first time playing? (YES/NO)" << endl;
			cout << "> ";
			cin >> opt;

			if (opt == "Yes" || opt == "yes" || opt == "YES")
			{
				cout << "===== IMPORTANT =====" << endl;
				cout << "To check your player profile and stats (outside of battle), type PROFILE" << endl;
				cout << "To check your inventory, type INVENTORY" << endl;

				cout << endl;

				cout << "If you understand this, type Understood (needs to be exactly the same): ";
				cin >> opt;
				while (opt != "Understood")
				{
					cout << "Please try again. Type Understood (needs to be exactly the same): ";
					cin >> opt;
				}

				done = true;
			}
			else if (opt == "No" || opt == "no" || opt == "NO")
			{
				done = true;
			}
		}
		else if (opt == "Help" || opt == "help" || opt == "HELP")
		{
			system("CLS");

			cout << "===== GAME DESCRIPTION =====" << endl;
			cout << "This is a text-based adventure game, meaning you will have to type out your actions/responses in order to proceed." << endl;
			cout << "You will be provided decisions emphasized in CAPS which you can type into the input field in order to execute the decision." << endl;
			cout << "You may type in lowercase, UPPER CASE, or Proper Capitalization." << endl;

			cout << endl;

			cout << "===== IMPORTANT =====" << endl;
			cout << "To check your player profile and stats (outside of battle), type PROFILE" << endl;
			cout << "To check your inventory, type INVENTORY" << endl;

			cout << endl;

			cout << "If you understand this, type Understood (needs to be exactly the same): ";
			cin >> opt;
			while (opt != "Understood")
			{
				cout << "Please try again. Type Understood (needs to be exactly the same): ";
				cin >> opt;
			}

			system("CLS");
		}
		else
		{
			cout << "Invalid response, please try again!" << endl;
		}

	} while (!done);
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
			cout << "A girl sits in front of the window, moonlight shining down upon her. With a sigh, she peers down on her- No. Her father's kingdom, gathering courage for what she is about to do next. Looking towards her right, she gazes upon her reflection in the mirror. Her name is... oh, what is her name? That's odd. She can't seem to remember." << endl;
			cout << "Remind the princess of her name..." << endl;
			cout << endl;
			cout << "> ";
			cin >> pName;

			//confirmation
			bool confirm = false;
			do
			{
				cout << "Is this truly her name? (YES/NO)" << endl;
				cout << "> ";
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

	cout << "Oh, of course. Princess " << pName << ", that was her. What kind of princess was she?" << endl;

		//Display paths
		cout << "Select a path for the princess to take..." << endl;
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
			cout << "Enter the number/index of the chosen path." << endl;
			cout << "> ";
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

			//confirmation
			if (classDone)
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