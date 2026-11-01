#include <iostream>

class Bill {
private:
    int itemCount;
    double totalAmount;

public:
    Bill(int items = 0, double amount = 0.0) : itemCount(items), totalAmount(amount) {}

    Bill operator+(const Bill& other) const {
        return Bill(itemCount + other.itemCount, totalAmount + other.totalAmount);
    }

    bool operator>(const Bill& other) const {
        return totalAmount > other.totalAmount;
    }

    void display() const {
        std::cout << "Items: " << itemCount << ", Total Amount: $" << totalAmount;
    }
};

int main() {
    Bill b1(3, 150.50);
    Bill b2(5, 220.00);

    std::cout << "Bill 1: "; b1.display(); std::cout << "\n";
    std::cout << "Bill 2: "; b2.display(); std::cout << "\n";

    Bill combined = b1 + b2;
    std::cout << "Combined Bill: "; combined.display(); std::cout << "\n";

    if (b1 > b2) {
        std::cout << "Bill 1 is larger than Bill 2.\n";
    } else {
        std::cout << "Bill 1 is NOT larger than Bill 2.\n";
    }

    return 0;
}