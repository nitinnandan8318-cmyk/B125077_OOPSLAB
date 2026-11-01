#include <iostream>

class Temperature {
private:
    double celsius;

public:
    Temperature(double c = 0.0) : celsius(c) {}

    bool operator>(const Temperature& other) const {
        return celsius > other.celsius;
    }

    bool operator<(const Temperature& other) const {
        return celsius < other.celsius;
    }

    Temperature operator-() const {
        return Temperature(-celsius);
    }

    void display() const {
        std::cout << celsius << " °C";
    }
};

int main() {
    Temperature t1(25.5);
    Temperature t2(18.0);

    std::cout << "Temp 1: "; t1.display(); std::cout << "\n";
    std::cout << "Temp 2: "; t2.display(); std::cout << "\n";

    std::cout << "Temp 1 > Temp 2: " << (t1 > t2 ? "True" : "False") << "\n";
    std::cout << "Temp 1 < Temp 2: " << (t1 < t2 ? "True" : "False") << "\n";

    Temperature negated = -t1;
    std::cout << "Negated Temp 1: "; negated.display(); std::cout << "\n";

    return 0;
}