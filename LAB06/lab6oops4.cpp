#include <iostream>

class AccountBalance {
private:
    double balance;

public:
    AccountBalance(double b = 0.0) : balance(b) {}

    AccountBalance operator-() const {
        return AccountBalance(-balance);
    }

    void display() const {
        std::cout << "Balance: $" << balance;
    }
};

int main() {
    AccountBalance original(250.75);
    AccountBalance adjusted = -original;

    std::cout << "Original Account: "; original.display(); std::cout << "\n";
    std::cout << "Adjusted Account: "; adjusted.display(); std::cout << "\n";

    return 0;
}