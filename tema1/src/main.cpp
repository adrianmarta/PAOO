#include "Inventory/Inventory.h"
#include "Product/Product.h"
#include "Order/Order.h"
#include <iostream>
#include <memory>

#include <iostream>
#include <thread>


void threadFunction(Inventory& inventory) {
    auto item = inventory.getItem(0);
    if (item) {
        std::cout << "Thread got item: " << item->getName() << std::endl;
    }
}

int main() {
    Inventory inventory;
    inventory.addItem(std::make_unique<Product>("Item1", 10.0));
    inventory.addItem(std::make_unique<Product>("Item2", 15.0));

    Order order;
    order.addItem(inventory.getItem(0));
    order.addItem(inventory.getItem(1));

    // Simulate multithreaded access
    std::thread t1(threadFunction, std::ref(inventory));
    std::thread t2(threadFunction, std::ref(inventory));

    t1.join();
    t2.join();

    return 0;
}

