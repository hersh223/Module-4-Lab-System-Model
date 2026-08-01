Design Document: Restaurant Ordering System

Author: Herschel Marcus

Course: C++ Programming – Module 4 Lab

1. System Purpose

The purpose of this project is to create a Restaurant Ordering System using object-oriented programming in C++. The program models how a restaurant manages its customers, menu items, and orders. It allows customers to place orders, stores different types of menu items, and calculates the total cost of an order.

This project demonstrates important object-oriented programming concepts such as inheritance, aggregation, and polymorphism while organizing the code into separate header (.h) and implementation (.cpp) files.

2. Class Overview
Base Class
MenuItem

The MenuItem class is the parent class for all menu items.

Data Members
string itemName – stores the name of the menu item.
double price – stores the price of the item.
Member Functions
Constructors
Virtual destructor
displayItem() – displays information about the menu item.
getPrice() – returns the price of the item.
Derived Classes
Burger

The Burger class inherits from MenuItem and represents burgers on the menu.

Additional Data

pattyType – stores the type of burger patty.

Member Function

Overrides displayItem() to display burger information.
Drink

The Drink class inherits from MenuItem and represents drinks.

Additional Data

size – stores the drink size.

Member Function

Overrides displayItem() to display drink information.
Milkshake

The Milkshake class inherits from MenuItem and represents milkshakes.

Additional Data

flavor – stores the flavor.
size – stores the milkshake size.

Member Function

Overrides displayItem() to display milkshake information.
Other Classes
Customer

The Customer class stores customer information.

Data Members

customerName
customerID

Member Function

displayCustomer() – displays customer information.
Order

The Order class represents a customer's order.

Data Member

vector<MenuItem*> items – stores all menu items in the order.

Member Functions

addItem()
calculateTotal()
displayOrder()

This class demonstrates aggregation because it contains multiple MenuItem objects.

Restaurant

The Restaurant class manages the restaurant.

Data Members

vector<Customer> customers
vector<Order*> orders

Member Functions

addCustomer()
addOrder()
displayCustomers()
displayOrders()

This class also demonstrates aggregation because it contains customer and order objects.

3. Object-Oriented Relationships
Inheritance
               MenuItem
                   |
      --------------------------
      |           |            |
   Burger      Drink     Milkshake

Burger, Drink, and Milkshake all inherit from MenuItem. This lets them share common information like the item name and price while still having their own unique data and display functions.

Aggregation
Restaurant
│
├── Customers
│
└── Orders
      │
      └── MenuItems

The Restaurant class contains customers and orders. Each Order contains multiple MenuItem objects.

Polymorphism

Polymorphism is demonstrated by using a MenuItem* pointer. Since displayItem() is a virtual function, the correct version of the function is called depending on whether the object is a Burger, Drink, or Milkshake.

Example:

MenuItem* item;

item = new Burger("Bacon Cheeseburger", 9.99, "Beef");
item->displayItem();

item = new Drink("Lemonade", 2.49, "Large");
item->displayItem();

item = new Milkshake("Chocolate Milkshake", 5.99, "Chocolate", "Medium");
item->displayItem();
4. Program Flow
Create a Restaurant object.
Create customer objects.
Add customers to the restaurant.
Create an Order.
Add different menu items (Burger, Drink, and Milkshake) to the order.
Add the order to the restaurant.
Display all customers.
Display all orders and calculate the total cost.
Demonstrate polymorphism by using a MenuItem* pointer to display different menu item types.
5. Assignment Requirements
Requirement	Completed
At least five classes	✔ Yes
Three inheritance classes	✔ Yes
Polymorphic variable	✔ Yes
Two aggregate classes	✔ Yes
Main demonstrates relationships	✔ Yes
Conclusion

This project models a simple restaurant ordering system using object-oriented programming. It demonstrates inheritance through the different menu item classes, aggregation by storing menu items inside orders and orders inside the restaurant, and polymorphism by using a MenuItem* pointer. The program is organized into separate header and source files, making it easy to read, maintain, and expand in the future.