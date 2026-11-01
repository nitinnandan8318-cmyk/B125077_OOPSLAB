#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    void display() const {
        std::cout << day << "/" << month << "/" << year;
    }
};

int main() {
    Date d1(9, 10, 2026);
    Date d2(9, 10, 2026);
    Date d3(10, 10, 2026);

    std::cout << "d1: "; d1.display(); std::cout << "\n";
    std::cout << "d2: "; d2.display(); std::cout << "\n";
    std::cout << "d3: "; d3.display(); std::cout << "\n";

    std::cout << "d1 == d2: " << (d1 == d2 ? "True" : "False") << "\n";
    std::cout << "d1 != d3: " << (d1 != d3 ? "True" : "False") << "\n";

    return 0;
}