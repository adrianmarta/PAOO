#ifndef PRODUCT_H
#define PRODUCT_H

#include "../Item/Item.h"
#include <string>
#include <iostream>

class Product : public Item {
public:
    Product(const std::string& name, double price);
    Product(Product&& other) noexcept;  // Move constructor
    ~Product();

    // Deleted copy operations
    Product(const Product& other) = delete;
    Product& operator=(const Product& other) = delete;

    std::string getName() const override;
    double getPrice() const override;
    Product* clone() const override;

private:
    std::string name;
    double price;
};

#endif // PRODUCT_H
