#pragma once
class Item
{
public:
	Item(const char* name, int weight);

	void setName(const char* _name);
	void setWeight(int _weight);
	const char* getName();
	int getWeight();

private:
	const char* name;
	int weight;
};

