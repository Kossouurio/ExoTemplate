#include "Item.h"

Item::Item(const char* name, int weight): name(name), weight(weight)
{
}

void Item::setName(const char* _name)
{
	name = _name;
}

void Item::setWeight(int _weight)
{
	weight = _weight;
}

const char* Item::getName()
{
	return name;
}

int Item::getWeight()
{
	return weight;
}

