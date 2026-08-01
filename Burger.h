#pragma once
#define BURGER_H

#include "MenuItem.h"

// Represents a burger on the menu.
class Burger : public MenuItem
{
private:
    string pattyType;// Type of burger patty.


public:
    Burger(string itemName, double price, string pattyType);// Constructor


    void displayItem() const override; // Displays burger information.
};

