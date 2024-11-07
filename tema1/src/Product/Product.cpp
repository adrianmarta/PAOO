#include "Product.h"

Product::Product(const std::string& name, double price)
    : name(name), price(price) {}

Product::Product(const Product& other)
    : name(other.name), price(other.price) {}

std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
Product* Product::clone() const { return new Product(*this); }
