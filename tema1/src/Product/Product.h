#ifndef PRODUCT_H
#define PRODUCT_H

#include "../Item/Item.h"

class Product : public Item {
public:
    Product(const std::string& name, double price);
    Product(const Product& other);

    std::string getName() const override;
    double getPrice() const override;
    Product* clone() const override;

private:
    std::string name;
    double price;
};

#endif // PRODUCT_H
