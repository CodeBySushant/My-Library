//Strassen Matrix Multiplication Algorithm
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
using namespace std;
using namespace chrono;

typedef vector<vector<int>> Matrix;

Matrix generateMatrix(int n) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 9);
    Matrix mat(n, vector<int>(n));
    for (auto &row : mat)
        for (auto &val : row)
            val = dis(gen);
    return mat;
}

Matrix add(Matrix A, Matrix B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

Matrix subtract(Matrix A, Matrix B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

Matrix strassen(Matrix A, Matrix B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));

    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
    } else {
        int k = n/2;
        Matrix A11(k, vector<int>(k)), A12(k, vector<int>(k)), A21(k, vector<int>(k)), A22(k, vector<int>(k));
        Matrix B11(k, vector<int>(k)), B12(k, vector<int>(k)), B21(k, vector<int>(k)), B22(k, vector<int>(k));

        for (int i=0; i<k; ++i)
            for (int j=0; j<k; ++j) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j+k];
                A21[i][j] = A[i+k][j];
                A22[i][j] = A[i+k][j+k];

                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j+k];
                B21[i][j] = B[i+k][j];
                B22[i][j] = B[i+k][j+k];
            }

        Matrix M1 = strassen(add(A11, A22), add(B11, B22));
        Matrix M2 = strassen(add(A21, A22), B11);
        Matrix M3 = strassen(A11, subtract(B12, B22));
        Matrix M4 = strassen(A22, subtract(B21, B11));
        Matrix M5 = strassen(add(A11, A12), B22);
        Matrix M6 = strassen(subtract(A21, A11), add(B11, B12));
        Matrix M7 = strassen(subtract(A12, A22), add(B21, B22));

        Matrix C11 = add(subtract(add(M1, M4), M5), M7);
        Matrix C12 = add(M3, M5);
        Matrix C21 = add(M2, M4);
        Matrix C22 = add(subtract(add(M1, M3), M2), M6);

        for (int i=0; i<k; ++i)
            for (int j=0; j<k; ++j) {
                C[i][j] = C11[i][j];
                C[i][j+k] = C12[i][j];
                C[i+k][j] = C21[i][j];
                C[i+k][j+k] = C22[i][j];
            }
    }
    return C;
}

void printMatrix(const Matrix &M) {
    for (const auto &row : M) {
        for (int val : row)
            cout<<val<<" ";
        cout << "\n";
    }
}

int main(){
    int n;
    cout << "Enter size of matrix(power of 2): ";
    cin >> n;
    Matrix A = generateMatrix(n);
    Matrix B = generateMatrix(n);
    
    auto start = high_resolution_clock::now();
    Matrix C = strassen(A, B);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken for size " << n << ": " << duration.count() << endl;

    printMatrix(A);
    printMatrix(B);
    printMatrix(C);
    return 0; 
}



