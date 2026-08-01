#pragma once

#include <vector>
#include "Customer.h"
#include "Order.h"

using namespace std;

class Restaurant
{
private:
    vector<Customer> customers;
    vector<Order*> orders;

public:
    Restaurant();
    ~Restaurant();

    void addCustomer(const Customer& customer);
    void addOrder(Order* order);

    void displayCustomers() const;
    void displayOrders() const;
};