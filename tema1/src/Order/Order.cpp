#include "Order.h"
#include <iostream>

Order::Order(const Order& other) {
    std::lock_guard<std::mutex> lock(other.orderMutex); // Lock other's mutex
    for (const auto& item : other.items) {
        items.push_back(std::shared_ptr<Item>(item->clone())); // Clone and wrap in shared_ptr
    }
}

Order& Order::operator=(const Order& other) {
    if (this != &other) {
        std::lock_guard<std::mutex> lockThis(orderMutex);       // Lock this mutex
        std::lock_guard<std::mutex> lockOther(other.orderMutex); // Lock other's mutex
        items.clear();
        for (const auto& item : other.items) {
            items.push_back(std::shared_ptr<Item>(item->clone())); // Clone and wrap in shared_ptr
        }
    }
    return *this;
}

void Order::addItem(std::shared_ptr<Item> item) {
    std::lock_guard<std::mutex> lock(orderMutex); // Lock for thread safety
    items.push_back(std::move(item)); // Push the shared_ptr
}

void Order::removeItem(int index) {
    std::lock_guard<std::mutex> lock(orderMutex); // Lock for thread safety
    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    }
}

void Order::listItems() const {
    std::lock_guard<std::mutex> lock(orderMutex); // Lock for thread-safe read
    for (const auto& item : items) {
        std::cout << "Item: " << item->getName() << ", Price: $" << item->getPrice() << "\n";
    }
}

size_t Order::getSize() const {
    std::lock_guard<std::mutex> lock(orderMutex); // Lock for thread-safe size retrieval
    return items.size();
}
