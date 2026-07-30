#include "MenuItem.h"

MenuItem::MenuItem()
{
    itemName = "";
    price = 0.0;
}

MenuItem::MenuItem(string itemName, double price)
{
    this->itemName = itemName;
    this->price = price;
}

MenuItem::~MenuItem()
{
}

void MenuItem::displayItem() const
{
    cout << itemName << " - $" << price << endl;
}

double MenuItem::getPrice() const
{
    return price;
}