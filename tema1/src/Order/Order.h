#ifndef ORDER_H
#define ORDER_H

#include "../Item/Item.h"
#include <vector>

class Order {
public:
    Order() = default;
    Order(const Order& other);
    Order& operator=(const Order& other);
    ~Order();

    void addItem(Item* item);
    void removeItem(int index);
    void listItems() const;

private:
    std::vector<Item*> items;
};

#endif // ORDER_H
