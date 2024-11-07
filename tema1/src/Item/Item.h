#ifndef ITEM_H
#define ITEM_H

#include <string>
#include<iostream>

class Item {
public:
    virtual ~Item() = default;
    
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
    virtual Item* clone() const = 0;

    void addReference() { ++refCount; }
    void removeReference() {
        if (--refCount == 0) {
            std::cout<<"/n s-a produs eliberarea heap-ului(reference count=0) \n";
            delete this;
        }
    }

protected:
    Item() : refCount(1) {}

private:
    int refCount;
};

#endif // ITEM_H
