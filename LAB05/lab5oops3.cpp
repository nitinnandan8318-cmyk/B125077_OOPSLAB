#include <iostream>
using namespace std;

// Operation 1: Check integer (positive, negative, zero)
void check(int val) {
    if (val > 0)
        cout << val << " is Positive." << endl;
    else if (val < 0)
        cout << val << " is Negative." << endl;
    else
        cout << val << " is Zero." << endl;
}

// Operation 2: Check character (uppercase or lowercase)
void check(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        cout << "'" << ch << "' is an Uppercase letter." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "'" << ch << "' is a Lowercase letter." << endl;
    else
        cout << "'" << ch << "' is not an alphabetic letter." << endl;
}

// Operation 3: Search character in a character array
void check(const char arr[], int size, char target) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Character '" << target << "' was found in the array." << endl;
    else
        cout << "Character '" << target << "' was NOT found in the array." << endl;
}

int main() {
    cout << "--- Character Analyzer ---" << endl;
    check(-15);
    check('G');

    char str[] = {'I', 'I', 'I', 'T', 'B'};
    check(str, 5, 'T');
    check(str, 5, 'Z');

    return 0;
}