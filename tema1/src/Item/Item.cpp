#include "Item.h"

Item::Item(const std::string& name, double price) 
    : name(name), price(price) {
    std::cout << "Item constructor called for: " << name << "\n";
}

Item::~Item() {
    std::cout << "Item destructor called for: " << name << "\n";
}

// Implementing virtual methods
std::string Item::getName() const {
    return name;
}

double Item::getPrice() const {
    return price;
}

// Concrete clone implementation
Item* Item::clone() const {
     return new Item(name, price); // Return a copy of the current object
}

// Copy constructor


// Move constructor
Item::Item(Item&& other) noexcept 
    : name(std::move(other.name)), price(other.price) {
    std::cout << "Item move constructor called for: " << name << "\n";
}



