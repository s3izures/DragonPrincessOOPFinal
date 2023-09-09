#include "Player.h"
#include "Dragon.h"
#include <iostream>
#include <time.h>
using namespace std;

//Utility Functions
void startScreen();
int diceRoll(int sides);
string getInput();
bool confirmInput();
Player characterCreation();
Dragon dragonCreation();



//Main
int main()
{
	//GAME INITIALIZATION
		startScreen();
		system("CLS");

		//Player creation
		Player player = characterCreation();
		Dragon dragon = dragonCreation();

		//Lore Variables
		string kingdomName = "PLACEHOLDER kingdom";
		string kingName = "PLACEHOLDER queen elizabeth";
		string knightName = "PLACEHOLDER knight";



	//GAME STORY
	// R"(text here)" is used so that raw text will be printed
	//Highlight decisions that players can make in CAPS

		//Setting: nighttime
		//variables that can be used: Player (name, class), Dragon (name, scales color, eye color) [check get functions]

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
				cout << endl << "===== IMPORTANT =====" << endl;
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
			system("CLS");
			cout << "Invalid response, please try again!" << endl;
		}

	} while (!done);
}
int diceRoll(int sides)
{
	//Sides stands for the number of sides on a dice
	srand(time(NULL));
	return rand() % sides + 1;
}
string getInput()
{
	string i;
	cout << "> ";
	cin >> i;
	return i;
}
bool confirmInput()
{
	cout << "Confirm? (YES/NO): ";
	string temp;
	cin >> temp;
	if (temp == "yes" || temp == "Yes" || temp == "YES")
	{
		return true;
	}
	else if (temp == "no" || temp == "No" || temp == "NO")
	{
		return false;
	}
	else
	{
		cout << "Invalid input, please try again!" << endl;
		return confirmInput();
	}
}
Player characterCreation()
{
	//Values needed to create the o class
	string pName;
	string pClass;
	bool done;

	//Name
		do
		{
			cout << "A girl sits in front of the window, moonlight shining down upon her. With a sigh, she peers down on her- No. Her father's kingdom, gathering courage for what she is about to do next. Looking towards her right, she gazes upon her reflection in the mirror. Her name is... oh, what is her name? That's odd. She can't seem to remember." << endl;
			cout << endl;
			cout << "Remind the princess of her name..." << endl;
			pName = getInput();

			//confirmation
			done = confirmInput();
			system("CLS");

		} while (!done);

		system("CLS");

	//Class Selection
	//done via entering number to avoid spelling error mistakes from player

	cout << "Oh, of course. Princess " << pName << ", that was her. What kind of princess was she?" << endl;

		do
		{
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

			cout << "Enter the number/index of the chosen path." << endl;
			cout << "> ";
			int tempClass = 0;
			cin >> tempClass;

			if (tempClass == 1)
			{
				system("CLS");
				pClass = "Adventurer";
				cout << pName << " was a free-spirited girl, with stars in her eyes and the great seas in her blood. She was swift and graceful, often leaving the castle to gaze upon the outside world, wondering what lies beyond the horizon." << endl;
			}
			else if (tempClass == 2)
			{
				system("CLS");
				pClass = "Warrior";
				cout << pName << " was hardworking despite her royal position, her hands callused from training with wooden swords. Fire blazed in her fierce eyes, a hidden strength underneath the silken fabrics and neat appearance." << endl;
			}
			else if (tempClass == 3)
			{
				system("CLS");
				pClass = "Pacifist";
				cout << pName << " was a gentle, kind soul with a heart of gold. Her smile warmed the room and her eyes were filled with kindness for all creatures. Despite bearing power dur to her position, she refused to use it against those who did not deserve cruelty," << endl;
			}
			else
			{
				tempClass = 0;
				cout << "Invalid input, please try again." << endl;
			}

			//confirmation
			cout << endl;
			if (tempClass != 0)
				done = confirmInput();

			system("CLS");

		} while (!done);

	return Player(pName, pClass);
}
Dragon dragonCreation()
{
	//Variables
	string name;
	string scales;
	string eyes;
	bool done = false;
	
	do {
		cout << "LORE HERE" << endl;
		cout << "That dragon's name was..." << endl;
		name = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	do {
		cout << "LORE HERE" << endl;
		cout << "The color of the dragon was..." << endl;
		scales = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	do {
		cout << "LORE HERE" << endl;
		cout << "The dragon's eyes were colored..." << endl;
		eyes = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	return Dragon(name, scales, eyes);
}