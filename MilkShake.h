#pragma once

#include "MenuItem.h"

class Milkshake : public MenuItem
{
private:
    string flavor;
    string size;

public:
    Milkshake(string itemName, double price, string flavor, string size);

    void displayItem() const override;
};