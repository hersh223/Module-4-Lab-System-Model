# Restaurant Ordering System

## Author

Herschel Marcus

## Description

This project models a restaurant ordering system using object-oriented programming in C++. It demonstrates inheritance, aggregation, and polymorphism through menu items, customer orders, and restaurant management.

## Classes

- MenuItem
- Burger
- Drink
- Milkshake
- Customer
- Order
- Restaurant

## Object-Oriented Concepts

### Inheritance

Burger, Drink, and Milkshake inherit from MenuItem.

### Aggregation

Order contains MenuItem objects.

Restaurant contains Customer and Order objects.

### Polymorphism

A MenuItem pointer is used to access Burger, Drink, and Milkshake objects through one common interface.

## Features

- Create customers
- Create restaurant orders
- Add menu items to orders
- Calculate order totals
- Display customers
- Display menu items
- Demonstrate polymorphism

## Files

MenuItem.h

MenuItem.cpp

Burger.h

Burger.cpp

Drink.h

Drink.cpp

Milkshake.h

Milkshake.cpp

Customer.h

Customer.cpp

Order.h

Order.cpp

Restaurant.h

Restaurant.cpp

main.cpp