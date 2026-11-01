#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    double price;

public:
    Book(std::string t, double p) : title(t), price(p) {}

    bool operator<(const Book& other) const {
        if (price != other.price) {
            return price < other.price;
        }
        return title < other.title;
    }

    void display() const {
        std::cout << "Title: \"" << title << "\", Price: $" << price;
    }
};

int main() {
    Book b1("C++ Primer", 45.50);
    Book b2("Algorithms", 45.50);

    b1.display(); std::cout << "\n";
    b2.display(); std::cout << "\n";

    if (b1 < b2) {
        std::cout << "Book 1 is smaller than Book 2.\n";
    } else {
        std::cout << "Book 1 is NOT smaller than Book 2.\n";
    }

    return 0;
}