#include "Customer.h"

Customer::Customer() // Default constructor
{
    customerName = "";
    customerID = 0;
}

Customer::Customer(string name, int id) // Parameterized constructor
{
    customerName = name;
    customerID = id;
}

void Customer::displayCustomer() const // Displays the customer's information
{
    cout << "Customer ID: " << customerID
         << " | Name: " << customerName << endl;
}