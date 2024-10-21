#include "inventory.h"

Inventory::Inventory(): membre(std::vector<Item>())
{
}

void Inventory::addItem(Item* item)
{
	membre.push_back(*item);
}

void Inventory::addItem(const char* name, int weight)
{
	addItem(&Item(name, weight));
}

void Inventory::deleteItemByName(const char* name)
{
	for (int i = 0; i < membre.size(); i++)
	{
		if (membre.at(i).getName() == name)
		{
			membre.erase(membre.begin() + i);
		}
	}
}

void Inventory::findItem(const char* name)
{
	for (Item i : membre)
	{
		if (i.getName() == name)
		{
			/// print
		}
	}
}

void Inventory::sortByName()
{
}

void Inventory::sortByWeight(bool bb)
{
}

void Inventory::showInventory()
{
}
