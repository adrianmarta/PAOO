#include "Product.h"

Product::Product(const std::string& name, double price)
    : name(name), price(price) {
    std::cout << "Product created: " << name << "\n";
}

Product::Product(Product&& other) noexcept
    : name(std::move(other.name)), price(other.price) {
    std::cout << "Product moved: " << name << "\n";
}

Product::~Product() {
    std::cout << "Product destroyed: " << name << "\n";
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

Product* Product::clone() const {
    return new Product(name, price);
}
