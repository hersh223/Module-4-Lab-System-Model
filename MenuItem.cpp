#include "MenuItem.h"

MenuItem::MenuItem()
{
    itemName = "";
    price = 0.0;
}

// Parameterized constructor.
MenuItem::MenuItem(string itemName, double price)
{
    this->itemName = itemName;
    this->price = price;
}

MenuItem::~MenuItem()
{
}

// Displays the basic menu item information.
void MenuItem::displayItem() const
{
    cout << itemName << " - $" << price << endl;
}

double MenuItem::getPrice() const // Returns the item's price.
{
    return price;
}