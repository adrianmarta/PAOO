#include "Product.h"

Product::Product(const std::string& name, double price, const std::string& category)
    : Item(name, price), category(category) {
    std::cout << "derived constructor called for: " << name << " in category: " << category << "\n";
}

Product::~Product() {
    std::cout << "Product destructor called for: " << name << " in category: " << category << "\n";
}



// Move constructor
Product::Product(Product&& other) noexcept
    : Item(std::move(other)), category(std::move(other.category)) {
    std::cout << "Product move constructor called for: " << name << " in category: " << category << "\n";
}



std::string Product::getName() const {
    return name + " (" + category + ")";
}

Product* Product::clone() const {
    return new Product(name,price,category);
}
