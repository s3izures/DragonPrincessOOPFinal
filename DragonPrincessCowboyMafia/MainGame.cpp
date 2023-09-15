#include "Player.h"
#include "Dragon.h"
#include <iostream>
#include <time.h>
using namespace std;

//Utility Functions
void startScreen();
string getInput();
bool confirmInput();
Player characterCreation();
Dragon dragonCreation();

//Missing: Inventory, Items, Enemy
//Please do a check on getInput on Profile and Inventory commands from player (ex: if they enter profile, run player.profile)

//Lambda
auto diceRoll = [](int d) {
	//Sides stands for the number of sides on a dice
	srand(time(NULL));
	return rand() % d + 1;
};

auto setLower = [](string str) {
	const int length = str.length() + 1;
	char* char_array = new char[length];
	for (int x = 0; x < length; x++) {
		char_array[x] = tolower(str[x]);
	}
	return char_array;
};

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

		//Other Variables
		string opt; //use with getInput(); (like opt = getInput();)


		
	//GAME STORY
	// R"(text here)" is used so that raw text will be printed
	//Highlight decisions that players can make in CAPS

		//Setting: nighttime
		//variables that can be used: Player (name, class), Dragon (name, scales color, eye color) [check get functions]

		//Introduction
		cout << R"("We need to leave, )" << dragon.getName() << R"(. It's not safe for you to stay here.")" << endl;
		cout << endl;
		cout << "Princess " << player.getName() << " stood up, allowing for her dragon to climb up her arm and onto her shoulder. " << dragon.getName() << " settled comfortably, tail curled up across her back." << endl;
		cout << endl;
		cout << "pease enter scwript" << endl; //ok now please continue, you can use getInput to get the player input, it only works with strings.

		//Part 1 - Escaping
		//Part 2 - Running
		//Part 3 - Final Battle
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
		cout << "Glancing away from the mirror and pausing her self-reflection, her eyes landed on her beloved companion. It had been her mother's last gift, being by her side since it first hatched on her fifth birthday." << endl;
		cout << endl;
		cout << "Curled up and sleeping soundly in a bed made just for it, was a baby dragon. Still far too young to be mighty and devour kingdoms, yet far more loyal to her than anyone else in this entire world. She saw it as more than just a fancy last gift- she saw it as family." << endl;
		cout << endl;
		cout << "That dragon's name was..." << endl;
		name = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	do {
		cout << name << R"(, her little dragon who had done nothing wrong. And yet, her father- the king of the country- had rather evil intentions towards the poor thing. She can't let that haappen.

With a sigh, she strode over and sat next to her companion, gently petting its head. "Wake up, silly." She gently shook it.)" << endl;
		cout << "The color of the dragon was..." << endl;
		scales = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	do {
		cout << "With a great yawn, the " << scales << " dragon slowly woke up, stretching as it leaned against its mistress's hand. It took a few more second to fully wake, blinking open its eyes." << endl;
		cout << "The dragon's eyes were colored..." << endl;
		eyes = getInput();
		done = confirmInput();
		system("CLS");
	} while (!done);

	return Dragon(name, scales, eyes);
}
vector<Item> createAllItems() {
	vector<Item> items;
	items.push_back(Item("Banana", "damage", 15, 1, "[Description]", "[UseMessage]"));
	items.push_back(Item("Health Potion", "heal", 15, 1, "[Description]", "[UseMessage]"));
	items.push_back(Item("Shield", "block", 15, 2, "[Description]", "[UseMessage]"));
	items.push_back(Item("Enchanted Sword", "damage", 15, -1, "[Description]", "[UseMessage]"));
	return items;
}