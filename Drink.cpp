#include "Drink.h"

// Constructor
Drink::Drink(string itemName, double price, string size)
    : MenuItem(itemName, price)
{
    this->size = size;
}

// Displays drink information
void Drink::displayItem() const
{
    cout << "Drink: "
         << itemName
         << " | Size: "
         << size
         << " | Price: $"
         << price
         << endl;
}