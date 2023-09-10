#include <vector>
#include "Item.h"
#include "Player.h"
#pragma once
class Inventory
{
private:
	struct invenItem {
		Item item;
		int uses;
		int count;
	};

	vector<invenItem> inventory;

public:

};

