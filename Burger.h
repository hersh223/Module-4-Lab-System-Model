#pragma once
#define BURGER_H

#include "MenuItem.h"

class Burger : public MenuItem
{
private:
    string pattyType;

public:
    Burger(string itemName, double price, string pattyType);

    void displayItem() const override;
};

