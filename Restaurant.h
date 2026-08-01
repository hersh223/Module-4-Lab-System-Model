#pragma once

#include <vector>
#include "Customer.h"
#include "Order.h"

using namespace std;

// Represents the restaurant
class Restaurant
{
private:
    vector<Customer> customers; // Stores all customers
    vector<Order*> orders; // Stores all orders

public:
    Restaurant();
    ~Restaurant();

    void addCustomer(const Customer& customer);
    void addOrder(Order* order);

    void displayCustomers() const;
    void displayOrders() const;
};