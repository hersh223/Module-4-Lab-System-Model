#pragma once

#include <iostream>
#include <string>

using namespace std;

// Represents a restaurant customer
class Customer
{
private:
    string customerName; // Customer's name
    int customerID; // Customer ID number

public:
    Customer(); // Default constructor
    Customer(string name, int id); // Creates a customer with a name and ID

    void displayCustomer() const; // Displays customer information
};