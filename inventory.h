#pragma once
#include <vector>
#include "Item.h"

class Inventory
{
public:
	Inventory();

	//Ajouter un item dans l'inventaire.
	void addItem(Item* item);
	//Ajouter un item dans l'inventaire.
	void addItem(const char* name, int weight);
	//Supprimer un item en fonction de son nom.
	void deleteItemByName(const char* name);
	//Trouver un item spécifique et afficher ses détails (nom et poids).
	void findItem(const char* name);
	//Trier les items dans l'inventaire par nom.
	void sortByName();
	//Trier les items dans l'inventaire par poids.
	//True = Ascending
	//False = Descending
	void sortByWeight(bool bb);
	//Afficher le contenu complet de l'inventaire avec le poids total des items.
	void showInventory();

private:
	std::vector<Item> membre;

};
