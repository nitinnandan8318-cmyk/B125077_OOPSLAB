#include <iostream>

class Matrix {
private:
    int mat[2][2];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }

    Matrix operator+(const Matrix& other) const {
        return Matrix(
            mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
            mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]
        );
    }

    void display() const {
        std::cout << mat[0][0] << " " << mat[0][1] << "\n";
        std::cout << mat[1][0] << " " << mat[1][1] << "\n";
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    std::cout << "Matrix 1:\n"; m1.display();
    std::cout << "Matrix 2:\n"; m2.display();

    Matrix result = m1 + m2;
    std::cout << "Resulting Matrix:\n"; result.display();

    return 0;
}