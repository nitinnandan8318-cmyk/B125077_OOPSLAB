#include <iostream>
using namespace std;

// Increase an integer variable
void update(int &val, int amount) {
    val += amount;
}

// Increase a floating-point variable
void update(double &val, double amount) {
    val += amount;
}

// Increase every element of an integer array
void update(int arr[], int size, int amount) {
    for (int i = 0; i < size; ++i) {
        arr[i] += amount;
    }
}

int main() {
    int num = 10;
    double dNum = 15.5;
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Before int update: " << num << endl;
    update(num, 5);
    cout << "After int update (+5): " << num << endl;

    cout << "\nBefore double update: " << dNum << endl;
    update(dNum, 2.3);
    cout << "After double update (+2.3): " << dNum << endl;

    cout << "\nBefore array update: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    update(arr, 5, 10);

    cout << "After array update (+10): ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}