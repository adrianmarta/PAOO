#include "Inventory.h"
#include<iostream>
void Inventory::addItem(std::unique_ptr<Item> item) {
    std::lock_guard<std::mutex> lock(itemsMutex); // Lock for thread safety
    items.push_back(std::move(item)); // Move ownership to the vector
}

std::shared_ptr<Item> Inventory::getItem(int index) const {
    std::lock_guard<std::mutex> lock(itemsMutex); // Lock for thread safety
    if (index >= 0 && index < items.size()) {
        return std::shared_ptr<Item>(items[index].get(), [](Item*) {
            std::cout<<"\n the shared pointer is used\n";
            // Shared ownership from unique pointer. No deletion here; unique_ptr handles it.
        });
    }
    return nullptr;
}

size_t Inventory::getSize() const {
    std::lock_guard<std::mutex> lock(itemsMutex); // Lock for thread-safe size retrieval
    return items.size();
}
