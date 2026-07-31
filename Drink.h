#pragma once
#define DRINK_H

#include "MenuItem.h"

class Drink : public MenuItem
{
private:
    string size;

public:
    Drink(string itemName, double price, string size);

    void displayItem() const override;
};

