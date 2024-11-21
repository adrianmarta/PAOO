#ifndef ORDER_H
#define ORDER_H

#include "../Item/Item.h"
#include <vector>
#include <iostream>

// Class definition
class Order {
public:
    Order();
    Order(const Order& other);               // Copy constructor
    Order& operator=(const Order& other);    // Copy assignment operator

    Order(Order&& other) = delete;           // Deleted move constructor
 

    ~Order();

    void addItem(Item* item);
    void removeItem(int index);
    void listItems() const;

private:
    std::vector<Item*> items;
};

#endif // ORDER_H
