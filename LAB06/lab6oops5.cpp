#include <iostream>

class Score {
private:
    int score;

public:
    Score(int s = 0) : score(s) {}

    // Prefix increment
    Score& operator++() {
        ++score;
        return *this;
    }

    // Postfix increment
    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        std::cout << "Score: " << score;
    }
};

int main() {
    Score s1(10);
    std::cout << "Initial s1: "; s1.display(); std::cout << "\n";

    Score prefixResult = ++s1;
    std::cout << "After ++s1 -> s1: "; s1.display(); 
    std::cout << " | Result Object: "; prefixResult.display(); std::cout << "\n";

    Score s2(10);
    std::cout << "Initial s2: "; s2.display(); std::cout << "\n";

    Score postfixResult = s2++;
    std::cout << "After s2++ -> s2: "; s2.display(); 
    std::cout << " | Result Object: "; postfixResult.display(); std::cout << "\n";

    return 0;
}