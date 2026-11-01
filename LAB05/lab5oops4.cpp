#include <iostream>
using namespace std;

// Sum of all elements in an integer array
int process(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Sum of all elements in a floating-point array
double process(const double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Sum of first k elements of an integer array
int process(const int arr[], int size, int k) {
    int sum = 0;
    int limit = (k < size) ? k : size;
    for (int i = 0; i < limit; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {1.5, 2.5, 3.5, 4.5};

    cout << "Sum of integer array: " << process(intArr, 5) << endl;
    cout << "Sum of double array: " << process(doubleArr, 4) << endl;
    cout << "Sum of first 3 elements of integer array: " << process(intArr, 5, 3) << endl;

    return 0;
}