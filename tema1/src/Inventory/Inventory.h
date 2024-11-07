#ifndef INVENTORY_H
#define INVENTORY_H

#include "../Item/Item.h"
#include <vector>

class Inventory {
public:
    ~Inventory();

    void addItem(Item* item);
    Item* getItem(int index) const;

private:
    std::vector<Item*> items;
};

#endif // INVENTORY_H
