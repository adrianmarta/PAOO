#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <memory>

class Item {
private:
    std::string name;
    double price;

public:
    // Constructor
    Item(const std::string& name, double price)
        : name(name), price(price) {}

    // Virtual Destructor
    virtual ~Item() = default;

    // Clone function
    virtual std::shared_ptr<Item> clone() const {
        return std::make_shared<Item>(*this);
    }

    // Virtual methods to allow overriding
    virtual std::string getName() const { return name; }
    virtual double getPrice() const { return price; }

    // Setters
    void setName(const std::string& newName) { name = newName; }
    void setPrice(double newPrice) { price = newPrice; }
};

#endif // ITEM_H
