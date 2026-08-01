#include "Restaurant.h"

Restaurant::Restaurant()
{
}

Restaurant::~Restaurant() // Frees memory used by orders
{
    for (Order* order : orders)
    {
        delete order;
    }
}

void Restaurant::addCustomer(const Customer& customer) // Adds a customer to the restaurant
{
    customers.push_back(customer);
}

void Restaurant::addOrder(Order* order) // Adds an order to the restaurant
{
    orders.push_back(order);
}

void Restaurant::displayCustomers() const // Displays every customer
{
    cout << "\n===== Customers =====\n";

    for (const Customer& customer : customers)
    {
        customer.displayCustomer();
    }
}

void Restaurant::displayOrders() const // Displays every order
{
    cout << "\n===== Orders =====\n";

    for (Order* order : orders)
    {
        order->displayOrder();
        cout << endl;
    }
}