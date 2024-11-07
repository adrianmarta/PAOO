#include "Inventory.h"

Inventory::~Inventory() {
    for (auto item : items) {
        delete item;
    }
    items.clear();
    std::cout<<"items deleted from inventory(heap memory cleared)\n";
}

void Inventory::addItem(Item* item) {
    items.push_back(item);
}

Item* Inventory::getItem(int index) const {
    if (index >= 0 && index < items.size()) {
        return items[index];
    }
    return nullptr;
}
