#include "Order.h"

Order::Order()
{
}

Order::~Order()
{
    for (MenuItem* item : items)
    {
        delete item;
    }
}

void Order::addItem(MenuItem* item)
{
    items.push_back(item);
}

void Order::displayOrder() const
{
    cout << "\n----- Order -----\n";

    for (MenuItem* item : items)
    {
        item->displayItem();
    }

    cout << "-----------------\n";
    cout << "Order Total: $" << calculateTotal() << endl;
}

double Order::calculateTotal() const
{
    double total = 0;

    for (MenuItem* item : items)
    {
        total += item->getPrice();
    }

    return total;
}