#pragma once

#include <vector>
#include "MenuItem.h"

using namespace std;

class Order
{
private:
    vector<MenuItem*> items;

public:
    Order();
    ~Order();

    void addItem(MenuItem* item);

    void displayOrder() const;

    double calculateTotal() const;
};