#ifndef PRODUCT_H
#define PRODUCT_H

#include "../Item/Item.h"
#include <string>
#include <iostream>

class Product : public Item {
public:
    Product(const std::string& name, double price, const std::string& category);
    ~Product();

    // Copy and move constructors/operators
    
    Product(Product&& other) noexcept;
    

    std::string getName() const override; // Override for category
    Product* clone() const override;

private:
    std::string category;
};

#endif // PRODUCT_H
