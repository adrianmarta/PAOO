#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
public:
    Item(const std::string& name, double price);
    virtual ~Item();

    // Virtual methods with default implementation
    virtual std::string getName() const;
    virtual double getPrice() const;

    // Concrete clone implementation for `Item`
    virtual Item* clone() const;

    
    
    Item(Item&& other) noexcept;
    

protected:
    std::string name;
    double price;
};

#endif // ITEM_H
