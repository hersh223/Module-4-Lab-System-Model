#pragma once

#include <vector>
#include "MenuItem.h"

using namespace std;

// Represents a customer's order
class Order
{
private:
    vector<MenuItem*> items;  // Stores all menu items in the order

public:
    Order(); // Default constructor
    ~Order();

    void addItem(MenuItem* item); // Adds a menu item to the order

    void displayOrder() const; // Displays the order

    double calculateTotal() const; // Calculates the total price
};