#include "Customer.h"

Customer::Customer()
{
    customerName = "";
    customerID = 0;
}

Customer::Customer(string name, int id)
{
    customerName = name;
    customerID = id;
}

void Customer::displayCustomer() const
{
    cout << "Customer ID: " << customerID
         << " | Name: " << customerName << endl;
}