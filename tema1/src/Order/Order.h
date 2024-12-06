#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <memory> // Include for shared_ptr
#include <mutex>  // For std::mutex
#include "../Item/Item.h"

class Order {
public:
    Order() = default;
    Order(const Order& other);            // Copy constructor
    Order& operator=(const Order& other); // Copy assignment operator
    ~Order() = default;

    void addItem(std::shared_ptr<Item> item); // Accept shared_ptr
    void removeItem(int index);
    void listItems() const;
    size_t getSize() const; // New function for order size

private:
    std::vector<std::shared_ptr<Item>> items;
    mutable std::mutex orderMutex; // Mutex for thread-safe access to items
};

#endif // ORDER_H
