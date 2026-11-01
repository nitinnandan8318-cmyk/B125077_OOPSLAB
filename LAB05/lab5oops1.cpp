#include <iostream>
using namespace std;

// Overloaded convert() functions
long convert(int kilometers) {
    return static_cast<long>(kilometers) * 1000;
}

int convert(int meters, bool toCentimeters) {
    // Boolean flag or secondary parameter used to distinguish signature
    return meters * 100;
}

double convert(double kilometers) {
    return kilometers * 1000.0;
}

int main() {
    int kmInt = 5;
    int mInt = 12;
    double kmFloat = 7.5;

    cout << "--- Distance Converter ---" << endl;
    cout << kmInt << " km in meters (int): " << convert(kmInt) << " m" << endl;
    cout << mInt << " m in centimeters (int): " << convert(mInt, true) << " cm" << endl;
    cout << kmFloat << " km in meters (double): " << convert(kmFloat) << " m" << endl;

    return 0;
}