#include "Order.h"
#include <iostream>

Order::Order(const Order& other) {
    for (const auto& item : other.items) {
        items.push_back(item);
        item->addReference();
    }
}

Order& Order::operator=(const Order& other) {
    if (this != &other) {
        for (auto& item : items) {
            item->removeReference();
        }
        items.clear();

        for (const auto& item : other.items) {
            items.push_back(item);
            item->addReference();
        }
    }
    std::cout<<"\n s-a efectuat deep copy folosind =\n";
    return *this;

}

Order::~Order() {
    for (auto& item : items) {
        item->removeReference();
    }
    std::cout<<"\n s-a apelat removeRefence in cadrul deconstructorului Order\n";
}

void Order::addItem(Item* item) {
    items.push_back(item);
    item->addReference();
}

void Order::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        items[index]->removeReference();
        items.erase(items.begin() + index);
    }
}

void Order::listItems() const {
    for (const auto& item : items) {
        std::cout << "Item: " << item->getName() << ", Price: $" << item->getPrice() << "\n";
    }
}
