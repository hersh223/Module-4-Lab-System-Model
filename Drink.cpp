#include "Drink.h"

Drink::Drink(string itemName, double price, string size)
    : MenuItem(itemName, price)
{
    this->size = size;
}

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