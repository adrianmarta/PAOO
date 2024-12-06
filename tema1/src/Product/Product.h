#ifndef PRODUCT_H
#define PRODUCT_H

#include "../Item/Item.h"

class Product : public Item {
public:
    // Pass the name and price to the base class constructor
    Product(const std::string& name, double price)
        : Item(name, price) {}

    // Override clone to create a copy of Product
    std::shared_ptr<Item> clone() const override {
        return std::make_shared<Product>(*this);
    }
};

#endif // PRODUCT_H
