#ifndef INVENTORY_H
#define INVENTORY_H

#include "../Item/Item.h"
#include <vector>
#include <memory> // For std::unique_ptr
#include <mutex>  // For std::mutex

class Inventory {
public:
    ~Inventory() = default;

    void addItem(std::unique_ptr<Item> item);
    std::shared_ptr<Item> getItem(int index) const;
    size_t getSize() const; // New function for retrieving inventory size

private:
    std::vector<std::unique_ptr<Item>> items;
    mutable std::mutex itemsMutex; // Mutex for thread-safe access
};

#endif // INVENTORY_H
