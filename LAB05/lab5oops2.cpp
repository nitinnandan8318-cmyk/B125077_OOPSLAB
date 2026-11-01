#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

// Area of Square (1 double parameter)
double area(double side) {
    return side * side;
}

// Area of Rectangle (2 double parameters)
double area(double length, double width) {
    return length * width;
}

// Area of Circle (1 double parameter + flag to distinguish from square)
double area(double radius, bool isCircle) {
    return PI * radius * radius;
}

int main() {
    double side, length, width, radius;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << area(side) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << area(length, width) << endl;

    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area(radius, true) << endl;

    return 0;
}