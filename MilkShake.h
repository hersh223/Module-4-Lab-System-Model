#pragma once

#include "MenuItem.h"

// Represents a milkshake on the menu
class Milkshake : public MenuItem
{
private:
    string flavor; // Milkshake flavor
    string size; // Milkshake siz

public:
    Milkshake(string itemName, double price, string flavor, string size);


    // Displays milkshake information
    void displayItem() const override;
};