#include <iostream>
using namespace std;

// Swap two integers using references
void swapData(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap two floating-point values using references
void swapData(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// Swap two integers using pointers
void swapData(int *a, int *b) {
    if (a != nullptr && b != nullptr) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 10, y = 20;
    double d1 = 4.5, d2 = 9.8;
    int p1 = 100, p2 = 200;

    cout << "--- Swap using int references ---" << endl;
    cout << "Before: x = " << x << ", y = " << y << endl;
    swapData(x, y);
    cout << "After:  x = " << x << ", y = " << y << endl;

    cout << "\n--- Swap using double references ---" << endl;
    cout << "Before: d1 = " << d1 << ", d2 = " << d2 << endl;
    swapData(d1, d2);
    cout << "After:  d1 = " << d1 << ", d2 = " << d2 << endl;

    cout << "\n--- Swap using int pointers ---" << endl;
    cout << "Before: p1 = " << p1 << ", p2 = " << p2 << endl;
    swapData(&p1, &p2);
    cout << "After:  p1 = " << p1 << ", p2 = " << p2 << endl;

    return 0;
}