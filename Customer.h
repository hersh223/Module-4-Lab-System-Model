#pragma once

#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    string customerName;
    int customerID;

public:
    Customer();
    Customer(string name, int id);

    void displayCustomer() const;
};