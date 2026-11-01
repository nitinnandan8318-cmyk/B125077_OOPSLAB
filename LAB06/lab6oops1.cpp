#include <iostream>
#include <numeric>
#include <cmath>

class Fraction {
private:
    int num;
    int den;

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }
        int common = std::gcd(std::abs(num), std::abs(den));
        if (common != 0) {
            num /= common;
            den /= common;
        }
    }

public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) {
            std::cerr << "Error: Denominator cannot be zero. Setting to 1.\n";
            den = 1;
        }
        simplify();
    }

    Fraction operator+(const Fraction& other) const {
        int res_num = num * other.den + other.num * den;
        int res_den = den * other.den;
        return Fraction(res_num, res_den);
    }

    Fraction operator-(const Fraction& other) const {
        int res_num = num * other.den - other.num * den;
        int res_den = den * other.den;
        return Fraction(res_num, res_den);
    }

    void display() const {
        std::cout << num << "/" << den;
    }
};

int main() {
    Fraction f1(2, 4);
    Fraction f2(1, 3);

    Fraction fAdd = f1 + f2;
    Fraction fSub = f1 - f2;

    std::cout << "Fraction 1: "; f1.display(); std::cout << "\n";
    std::cout << "Fraction 2: "; f2.display(); std::cout << "\n";
    std::cout << "Addition: "; fAdd.display(); std::cout << "\n";
    std::cout << "Subtraction: "; fSub.display(); std::cout << "\n";

    return 0;
}