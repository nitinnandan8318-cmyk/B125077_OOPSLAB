#include <iostream>

class Duration {
private:
    int hours;
    int minutes;

public:
    Duration(int h = 0, int m = 0) : hours(h), minutes(m) {
        normalize();
    }

    void normalize() {
        hours += minutes / 60;
        minutes %= 60;
    }

    Duration operator+(const Duration& other) const {
        return Duration(hours + other.hours, minutes + other.minutes);
    }

    void display() const {
        std::cout << hours << " hrs " << minutes << " mins";
    }
};

int main() {
    Duration d1(2, 45);
    Duration d2(1, 30);
    Duration result = d1 + d2;

    std::cout << "Original Duration 1: "; d1.display(); std::cout << "\n";
    std::cout << "Original Duration 2: "; d2.display(); std::cout << "\n";
    std::cout << "Resulting Duration:  "; result.display(); std::cout << "\n";

    return 0;
}