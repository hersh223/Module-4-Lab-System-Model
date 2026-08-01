#pragma once
#define DRINK_H

#include "MenuItem.h"

// Represents a drink on the menu
class Drink : public MenuItem
{
private:
    string size;  // Drink size.

public:
    Drink(string itemName, double price, string size);

    void displayItem() const override;  // Displays drink information
};

