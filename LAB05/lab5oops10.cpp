#include <iostream>
using namespace std;

// Average of two integers
double evaluate(int a, int b) {
    return (a + b) / 2.0;
}

// Average of three integers
double evaluate(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Average of two floating-point values
double evaluate(double a, double b) {
    return (a + b) / 2.0;
}

// Average of all elements of an integer array
double evaluate(const int arr[], int size) {
    if (size <= 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// Average of two integer values accessed through pointers
double evaluate(const int *a, const int *b) {
    if (a != nullptr && b != nullptr) {
        return (*a + *b) / 2.0;
    }
    return 0.0;
}

int main() {
    int x = 10, y = 20, z = 30;
    double d1 = 5.5, d2 = 7.5;
    int arr[] = {2, 4, 6, 8, 10};

    cout << "Avg of 2 ints (10, 20): " << evaluate(x, y) << endl;
    cout << "Avg of 3 ints (10, 20, 30): " << evaluate(x, y, z) << endl;
    cout << "Avg of 2 doubles (5.5, 7.5): " << evaluate(d1, d2) << endl;
    cout << "Avg of integer array: " << evaluate(arr, 5) << endl;
    cout << "Avg of 2 ints via pointers (&x, &y): " << evaluate(&x, &y) << endl;

    return 0;
}