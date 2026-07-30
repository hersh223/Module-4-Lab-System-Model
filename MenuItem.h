#pragma once 
#define MENUITEM_H

#include <iostream>
#include <string>

using namespace std;

class MenuItem
{
protected:
    string itemName;
    double price;

public:
    MenuItem();
    MenuItem(string itemName, double price);

    virtual ~MenuItem();

    virtual void displayItem() const;

    double getPrice() const;
};

