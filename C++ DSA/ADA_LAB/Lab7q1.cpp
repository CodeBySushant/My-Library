#include <iostream>
#include <vector>
using namespace std;

// Function to add two matrices
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> result(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            result[i][j] = A[i][j] + B[i][j];

    return result;
}

// Function to subtract two matrices
vector<vector<int>> subtractMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> result(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            result[i][j] = A[i][j] - B[i][j];

    return result;
}

// Strassen’s algorithm for matrix multiplication
vector<vector<int>> strassenMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> result(n, vector<int>(n, 0));

    // Base case
    if (n == 1) {
        result[0][0] = A[0][0] * B[0][0];
        return result;
    }

    int newSize = n / 2;
    vector<vector<int>> A11(newSize, vector<int>(newSize));
    vector<vector<int>> A12(newSize, vector<int>(newSize));
    vector<vector<int>> A21(newSize, vector<int>(newSize));
    vector<vector<int>> A22(newSize, vector<int>(newSize));

    vector<vector<int>> B11(newSize, vector<int>(newSize));
    vector<vector<int>> B12(newSize, vector<int>(newSize));
    vector<vector<int>> B21(newSize, vector<int>(newSize));
    vector<vector<int>> B22(newSize, vector<int>(newSize));

    // Divide matrices
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }
    }

    // Recursively calculate 7 products
    auto P1 = strassenMultiply(addMatrix(A11, A22), addMatrix(B11, B22));
    auto P2 = strassenMultiply(addMatrix(A21, A22), B11);
    auto P3 = strassenMultiply(A11, subtractMatrix(B12, B22));
    auto P4 = strassenMultiply(A22, subtractMatrix(B21, B11));
    auto P5 = strassenMultiply(addMatrix(A11, A12), B22);
    auto P6 = strassenMultiply(subtractMatrix(A21, A11), addMatrix(B11, B12));
    auto P7 = strassenMultiply(subtractMatrix(A12, A22), addMatrix(B21, B22));

    // Calculate result quadrants
    auto C11 = addMatrix(subtractMatrix(addMatrix(P1, P4), P5), P7);
    auto C12 = addMatrix(P3, P5);
    auto C21 = addMatrix(P2, P4);
    auto C22 = addMatrix(subtractMatrix(addMatrix(P1, P3), P2), P6);

    // Combine into result matrix
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            result[i][j] = C11[i][j];
            result[i][j + newSize] = C12[i][j];
            result[i + newSize][j] = C21[i][j];
            result[i + newSize][j + newSize] = C22[i][j];
        }
    }

    return result;
}

// Function to print matrix
void printMatrix(const vector<vector<int>>& matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

// Function to compute next power of 2 without cmath
int nextPowerOfTwo(int n) {
    int power = 1;
    while (power < n)
        power *= 2;
    return power;
}

int main() {
    int n;
    cout << "Enter the size of matrices (n x n): ";
    cin >> n;

    int newSize = nextPowerOfTwo(n);

    vector<vector<int>> A(newSize, vector<int>(newSize, 0));
    vector<vector<int>> B(newSize, vector<int>(newSize, 0));

    cout << "Enter elements of matrix A (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    vector<vector<int>> C = strassenMultiply(A, B);

    cout << "Product of matrices A and B is:" << endl;
    printMatrix(C, n);

    return 0;
}
