#include <iostream>

#include "Restaurant.h"
#include "Burger.h"
#include "Drink.h"
#include "MilkShake.h"

using namespace std;

int main()
{
    Restaurant restaurant; // Create the restaurant

    // Create customers
    Customer customer1("John Doe", 1001);
    Customer customer2("Herschel Marcus", 1002);


    // Add customers to the restaurant
    restaurant.addCustomer(customer1);
    restaurant.addCustomer(customer2);


    // Create a new order
    Order* order1 = new Order();


    // Add menu items to the order
    order1->addItem(new Burger("Cheeseburger", 8.99, "Beef"));
    order1->addItem(new Drink("Coke", 2.49, "Medium"));
    order1->addItem(new Milkshake("Chocolate Milkshake", 5.99, "Chocolate", "Large"));

    // Add the order to the restaurant
    restaurant.addOrder(order1);

    // Display customer information
    restaurant.displayCustomers();

    // Display all orders
    restaurant.displayOrders();

    cout << "\n===== Polymorphism Demo =====\n";

    MenuItem* item;

    item = new Burger("Bacon Cheese Burger", 10.99, "Beef");
    item->displayItem();
    delete item;

    item = new Drink("Lemonade", 2.99, "Large");
    item->displayItem();
    delete item;

    item = new Milkshake("Strawberry Milkshake", 5.49, "Strawberry", "Medium");
    item->displayItem();
    delete item;

    return 0;
}