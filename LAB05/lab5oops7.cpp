#include <iostream>
#include <cmath>
using namespace std;

// Two integers: closer to zero
int nearValue(int a, int b) {
    return (abs(a) <= abs(b)) ? a : b;
}

// Two floating-point values: closer to zero
double nearValue(double a, double b) {
    return (fabs(a) <= fabs(b)) ? a : b;
}

// Array version: element closest to zero
int nearValue(const int arr[], int size) {
    if (size <= 0) return 0;
    int closest = arr[0];
    for (int i = 1; i < size; ++i) {
        if (abs(arr[i]) < abs(closest)) {
            closest = arr[i];
        }
    }
    return closest;
}

int main() {
    cout << "Closer to zero (-5, 3): " << nearValue(-5, 3) << endl;
    cout << "Closer to zero (-2.4, 4.1): " << nearValue(-2.4, 4.1) << endl;

    int arr[] = {12, -8, 4, -3, 9};
    cout << "Closest to zero in array {12, -8, 4, -3, 9}: " << nearValue(arr, 5) << endl;

    return 0;
}