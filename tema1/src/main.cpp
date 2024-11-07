#include "Inventory/Inventory.h"
#include "Product/Product.h"
#include "Order/Order.h"
#include <iostream>

int main() {
    Inventory inventory;

    inventory.addItem(new Product("Laptop", 1200.50));
    inventory.addItem(new Product("Milk", 1.5));

    Order order1;
    order1.addItem(inventory.getItem(0));
    order1.addItem(inventory.getItem(1));

    Order order2;
    order2=order1;

    std::cout << "Order 1 items:\n";
    order1.listItems();

    std::cout << "\nOrder 2 items:\n";
    order2.listItems();

    std::cout << "\nRemoving 'Laptop' from Order 1:\n";
    order1.removeItem(0);
    order1.listItems();

    std::cout << "\nOrder 2 remains unchanged:\n";
    order2.listItems();

   
    

    return 0;
}
