#include "Restaurant.h"

Restaurant::Restaurant()
{
}

Restaurant::~Restaurant()
{
    for (Order* order : orders)
    {
        delete order;
    }
}

void Restaurant::addCustomer(const Customer& customer)
{
    customers.push_back(customer);
}

void Restaurant::addOrder(Order* order)
{
    orders.push_back(order);
}

void Restaurant::displayCustomers() const
{
    cout << "\n===== Customers =====\n";

    for (const Customer& customer : customers)
    {
        customer.displayCustomer();
    }
}

void Restaurant::displayOrders() const
{
    cout << "\n===== Orders =====\n";

    for (Order* order : orders)
    {
        order->displayOrder();
        cout << endl;
    }
}