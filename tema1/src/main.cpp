#include "Inventory/Inventory.h"
#include "Product/Product.h"
#include "Order/Order.h"
#include <iostream>

int main() {
    Inventory inventory;

    // Adaugă produse în inventar
    inventory.addItem(new Product("Laptop", 1200.50));
    inventory.addItem(new Product("Milk", 1.5));

    // Crează prima comandă
    Order order1;
    order1.addItem(inventory.getItem(0));  // Adaugă "Laptop"
    order1.addItem(inventory.getItem(1));  // Adaugă "Milk"

    // Crează o copie a comenzii 1
    Order order2 = order1;

    std::cout << "Order 1 items:\n";
    order1.listItems();

    std::cout << "\nOrder 2 items:\n";
    order2.listItems();

    // Șterge un produs din prima comandă (Laptop)
    std::cout << "\nRemoving 'Laptop' from Order 1:\n";
    order1.removeItem(0);
    order1.listItems();

    // Afișează produsele din comanda 2 pentru a verifica că ele rămân neschimbate
    std::cout << "\nOrder 2 remains unchanged:\n";
    order2.listItems();

    // Șterge comanda 1
    std::cout << "\nDeleting Order 1\n";
   

    return 0;
}
