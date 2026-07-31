#include "Burger.h"

Burger::Burger(string itemName, double price, string pattyType)
    : MenuItem(itemName, price)
{
    this->pattyType = pattyType;
}

void Burger::displayItem() const
{
    cout << "Burger: "
         << itemName
         << " | Patty: "
         << pattyType
         << " | Price: $"
         << price
         << endl;
}