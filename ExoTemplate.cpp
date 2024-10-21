#include <iostream>
#include <vector>
#include <list>
#include <set>

#include "inventory.h"
#include "Item.h"

int main()
{
    Inventory inv = Inventory();
    Item pomme("pomme", 3);

    inv.addItem(&pomme);
    inv.addItem("patate", 25);
    inv.addItem("carotte", 2);
    inv.addItem("boule de demolition", 2500);

    inv.deleteItemByName("carotte");




    return 0;
}
