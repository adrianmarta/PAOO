#include "Inventory/Inventory.h"
#include "Product/Product.h"
#include "Order/Order.h"
#include <iostream>

int main() {
    // Demonstrating move constructor for Product
    Product p1("Laptop", 1200.50);
    Product p2 = std::move(p1);  // Move constructor is called

    // Demonstrating copy constructor for Order
    Inventory inventory;
    inventory.addItem(new Product("Phone", 899.99));
    inventory.addItem(new Product("Headphones", 299.99));

    Order order1;
    order1.addItem(inventory.getItem(0));
    order1.addItem(inventory.getItem(1));

    std::cout << "\nCopying order1 into order2 using copy constructor:\n";
    Order order2 = order1;  // Copy constructor is called

    std::cout << "\nOrder 1 items:\n";
    order1.listItems();

    std::cout << "\nOrder 2 items (copied):\n";
    order2.listItems();

    return 0;
}
