#include <iostream>
using namespace std;

// Display value of an integer variable
void inspect(int val) {
    cout << "Integer value: " << val << endl;
}

// Display value stored at an integer pointer
void inspect(const int *ptr) {
    if (ptr != nullptr) {
        cout << "Value at pointer address (" << ptr << "): " << *ptr << endl;
    } else {
        cout << "Pointer is null." << endl;
    }
}

// Display all elements of an integer array using a pointer and size
void inspect(const int *arrPtr, int size) {
    cout << "Array elements using pointer navigation: ";
    for (int i = 0; i < size; ++i) {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;
}

int main() {
    int a = 42;
    int arr[] = {10, 20, 30, 40};

    inspect(a);             // Pass by value
    inspect(&a);            // Pass pointer to single value
    inspect(arr, 4);        // Pass array pointer and size

    return 0;
}