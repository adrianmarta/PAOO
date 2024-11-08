#include "Order.h"
#include <iostream>

Order::Order(const Order& other) {
    for (const auto& item : other.items) {
        items.push_back(item->clone());
    }
}

Order& Order::operator=(const Order& other) {
    if (this != &other) {
        for (auto& item : items) {
            delete item;
        }
        items.clear();

        for (const auto& item : other.items) {
            items.push_back(item->clone());
        }
    }
    std::cout << "\n Deep copy using operator=\n";
    return *this;
}

Order::~Order() {
    for (auto& item : items) {
        delete item;
    }
    std::cout << "\n Order deleted\n";
}

void Order::addItem(Item* item) {
    items.push_back(item->clone());
}

void Order::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        delete items[index];
        items.erase(items.begin() + index);
    }
}

void Order::listItems() const {
    for (const auto& item : items) {
        std::cout << "Item: " << item->getName() << ", Price: $" << item->getPrice() << "\n";
    }
}
