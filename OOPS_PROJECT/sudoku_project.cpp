
#include <iostream>
#include <vector>
using namespace std;

// CLASS 1: SudokuBoard (Encapsulation)

class SudokuBoard {
private:
    vector<vector<int>> grid;
    static const int SIZE = 9;
    static const int BOX = 3;

public:
    // Constructor: Creates an empty Sudoku board
    SudokuBoard() {
        grid = vector<vector<int>>(SIZE, vector<int>(SIZE, 0));
    }

    // Get value from a cell
    int get(int row, int col) const {
        return grid[row][col];
    }

    // Set value in a cell
    void set(int row, int col, int value) {
        grid[row][col] = value;
    }

    // Find an empty cell (represented by 0)
    bool findEmptyCell(int &row, int &col) const {
        for (row = 0; row < SIZE; row++) {
            for (col = 0; col < SIZE; col++) {
                if (grid[row][col] == 0)
                    return true;
            }
        }
        return false;
    }

    // Check whether a number can be placed
    bool isValidPlacement(int row, int col, int num) const {

        // Check row
        for (int j = 0; j < SIZE; j++) {
            if (grid[row][j] == num)
                return false;
        }

        // Check column
        for (int i = 0; i < SIZE; i++) {
            if (grid[i][col] == num)
                return false;
        }

        // Check 3x3 box
        int startRow = (row / BOX) * BOX;
        int startCol = (col / BOX) * BOX;

        for (int i = startRow; i < startRow + BOX; i++) {
            for (int j = startCol; j < startCol + BOX; j++) {
                if (grid[i][j] == num)
                    return false;
        }
        }

        return true;
    }

    // Display Sudoku board
    void display() const {
        cout << "\n+-------+-------+-------+\n";

        for (int i = 0; i < SIZE; i++) {
            cout << "| ";

            for (int j = 0; j < SIZE; j++) {
                if (grid[i][j] == 0)
                    cout << ". ";
                else
                    cout << grid[i][j] << " ";

                if ((j + 1) % BOX == 0)
                    cout << "| ";
            }

            cout << endl;

            if ((i + 1) % BOX == 0)
                cout << "+-------+-------+-------+\n";
        }
    }
};


// CLASS 2: Solver (Abstraction)

class Solver {
public:
    virtual bool solve(SudokuBoard &board) = 0;

    virtual ~Solver() {}
};


// CLASS 3: BacktrackingSolver (Inheritance)

class BacktrackingSolver : public Solver {
public:

    // Polymorphism: overriding the virtual function
    bool solve(SudokuBoard &board) override {

        int row, col;

        // If no empty cell remains, puzzle is solved
        if (!board.findEmptyCell(row, col))
            return true;

        // Try numbers from 1 to 9
        for (int num = 1; num <= 9; num++) {

            if (board.isValidPlacement(row, col, num)) {

                // Place the number
                board.set(row, col, num);

                // Recursively solve remaining puzzle
                if (solve(board))
                    return true;

                // Backtracking: undo incorrect choice
                board.set(row, col, 0);
            }
        }

        // No valid number found
        return false;
    }
};


// CLASS 4: SudokuGame (Composition)

class SudokuGame {
private:
    SudokuBoard board;
    Solver *solver;

public:

    // Constructor
    SudokuGame(Solver *s) : solver(s) {}

    // Take input from user
    void takeInput() {

        int count;

        cout << "\n========== SUDOKU SOLVER ==========\n";

        cout << "\nEmpty Sudoku Board:";
        board.display();

        cout << "\nHow many cells do you want to fill? ";
        cin >> count;

        // Validate number of cells
        while (count < 0 || count > 81) {
            cout << "Enter a number between 0 and 81: ";
            cin >> count;
        }

        cout << "\nEnter row, column and number (1-9).";
        cout << "\nExample: 1 3 5 means row 1, column 3 = 5\n";

        for (int i = 0; i < count; i++) {

            int row, col, num;

            cout << "\nCell " << i + 1 << ": ";
            cin >> row >> col >> num;

            // Convert row and column to 0-based indexing
            row--;
            col--;

            // Validate input
            if (row < 0 || row >= 9 ||
                col < 0 || col >= 9 ||
                num < 1 || num > 9) {

                cout << "Invalid input! Try again.\n";
                i--;
                continue;
            }

            // Check if cell is already filled
            if (board.get(row, col) != 0) {
                cout << "Cell already filled! Try another cell.\n";
                i--;
                continue;
            }

            // Check Sudoku rules
            if (!board.isValidPlacement(row, col, num)) {
                cout << "Invalid placement! Number conflicts with "
                     << "row, column or 3x3 box.\n";
                i--;
                continue;
            }

            // Store user's number
            board.set(row, col, num);
        }
    }

    // Solve and display the puzzle
    void solveAndDisplay() {

        cout << "\nYour Sudoku Puzzle:";
        board.display();

        if (solver->solve(board)) {

            cout << "\nSolved Sudoku Puzzle:";
            board.display();

            cout << "\nPuzzle solved successfully!\n";

        } else {

            cout << "\nNo solution exists for this puzzle.\n";
        }

        cout << "\n=================================\n";
    }
};


// MAIN FUNCTION

int main() {

    // Create solver object
    BacktrackingSolver backtrackingSolver;

    // Create game object
    SudokuGame game(&backtrackingSolver);

    // Take user input
    game.takeInput();

    // Solve the puzzle
    game.solveAndDisplay();

    return 0;
}
