#include "Order.h"

Order::Order()
{
}

Order::~Order() // Frees memory used by menu items
{
    for (MenuItem* item : items)
    {
        delete item;
    }
}

void Order::addItem(MenuItem* item) // Adds a menu item to the order
{
    items.push_back(item);
}

void Order::displayOrder() const // Displays every item in the order
{
    cout << "\n----- Order -----\n";

    for (MenuItem* item : items)
    {
        item->displayItem();
    }

    cout << "-----------------\n";
    cout << "Order Total: $" << calculateTotal() << endl;
}

double Order::calculateTotal() const // Calculates the total cost of the order
{
    double total = 0;

    for (MenuItem* item : items)
    {
        total += item->getPrice();
    }

    return total;
}