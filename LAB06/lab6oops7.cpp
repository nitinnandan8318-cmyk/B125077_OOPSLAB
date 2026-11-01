#include <iostream>
#include <string>

class InventoryItem {
private:
    std::string productID;
    double unitPrice;
    int quantity;

public:
    InventoryItem(std::string id, double price, int qty)
        : productID(id), unitPrice(price), quantity(qty) {}

    InventoryItem operator+(const InventoryItem& other) const {
        if (productID == other.productID && unitPrice == other.unitPrice) {
            return InventoryItem(productID, unitPrice, quantity + other.quantity);
        } else {
            std::cout << "\n[Error] Incompatible items (ID or Unit Price mismatch). Returning empty item.\n";
            return InventoryItem("INVALID", 0.0, 0);
        }
    }

    void display() const {
        std::cout << "ID: " << productID << " | Price: $" << unitPrice << " | Qty: " << quantity;
    }
};

int main() {
    InventoryItem item1("P101", 15.50, 10);
    InventoryItem item2("P101", 15.50, 5);
    InventoryItem item3("P102", 20.00, 3);

    std::cout << "Item 1: "; item1.display(); std::cout << "\n";
    std::cout << "Item 2: "; item2.display(); std::cout << "\n";
    std::cout << "Item 3: "; item3.display(); std::cout << "\n";

    std::cout << "\nCombining Item 1 and Item 2:";
    InventoryItem combined = item1 + item2;
    std::cout << "\nCombined: "; combined.display(); std::cout << "\n";

    std::cout << "\nCombining Item 1 and Item 3:";
    InventoryItem invalidCombine = item1 + item3;
    std::cout << "Result: "; invalidCombine.display(); std::cout << "\n";

    return 0;
}