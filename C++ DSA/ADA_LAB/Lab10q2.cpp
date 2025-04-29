#include <iostream>
#include <vector>
using namespace std;

const int MAX = 20; // Adjust according to maximum N value
int board[MAX];
int N;

// Function to check if placing a queen at (row, col) is safe
bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        // Check column and diagonals
        if (board[i] == col || 
            board[i] - i == col - row || 
            board[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

// Backtracking function to solve N-Queens
bool solveNQueens(int row) {
    if (row == N) {
        // All queens placed successfully — print solution
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i] == j)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
        cout << endl;
        return true; // Change to false if you want *all* solutions
    }

    bool foundSolution = false;
    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;           // Place queen
            foundSolution |= solveNQueens(row + 1); // Recur to next row
            // Backtrack happens automatically on next loop iteration
        }
    }
    return foundSolution;
}

int main() {
    cout << "Enter value of N (number of queens): ";
    cin >> N;

    if (N < 1 || N > MAX) {
        cout << "Invalid value of N.\n";
        return 1;
    }

    cout << "Solutions to " << N << "-Queens problem:\n\n";
    if (!solveNQueens(0)) {
        cout << "No solution exists for N = " << N << endl;
    }

    return 0;
}
