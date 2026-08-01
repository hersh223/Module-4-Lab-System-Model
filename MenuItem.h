#pragma once 
#define MENUITEM_H

#include <iostream>
#include <string>

using namespace std;

// Base class representing any item on the restaurant menu.
class MenuItem
{
protected:
    string itemName;
    double price;

public:
    MenuItem();
    MenuItem(string itemName, double price); // Constructor that initializes the menu item.

    virtual ~MenuItem();

    // Displays menu item information.
    // This function is overridden by derived classes.
    virtual void displayItem() const;

     // Returns the price of the menu item.
    double getPrice() const;
};

