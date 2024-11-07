#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
public:
    virtual ~Item() = default;
    
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
    virtual Item* clone() const = 0;

protected:
    Item() = default;
};

#endif // ITEM_H
