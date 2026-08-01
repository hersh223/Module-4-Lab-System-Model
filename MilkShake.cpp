#include "MilkShake.h"

// Constructor
Milkshake::Milkshake(string itemName, double price, string flavor, string size)
    : MenuItem(itemName, price)
{
    this->flavor = flavor;
    this->size = size;
}

void Milkshake::displayItem() const // Displays milkshake information
{
    cout << "Milkshake: "
         << itemName
         << " | Flavor: "
         << flavor
         << " | Size: "
         << size
         << " | Price: $"
         << price
         << endl;
}