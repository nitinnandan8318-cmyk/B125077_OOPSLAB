#include <iostream>
using namespace std;

// Find length of a character array
int information(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Count occurrence of a character in array
int information(const char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

// Count occurrence of a character within first k positions
int information(const char str[], char ch, int k) {
    int count = 0;
    for (int i = 0; i < k && str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char text[] = "programming";

    cout << "String: " << text << endl;
    cout << "Length of string: " << information(text) << endl;
    cout << "Occurrence of 'g': " << information(text, 'g') << endl;
    cout << "Occurrence of 'r' in first 5 positions: " << information(text, 'r', 5) << endl;

    return 0;
}