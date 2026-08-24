#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix multiply(const Matrix& A, const Matrix& B) {
    int rowA = A.size();
    int colA = A[0].size();
    int colB = B[0].size();

    Matrix C(rowA, std::vector<int>(colB, 0));
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colB; ++j) {
            for (int k = 0; k < colA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void printMatrix(const Matrix& M) {
    for (const auto& row : M) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    Matrix A = {
        {4, 5, 6},
        {7, 8, 9}
    };

    Matrix B = {
        {1, 2},
        {2, 4},
        {4, 5}
    };

    if (A[0].size() != B.size()) {
        std::cerr << "Error: columns of A must match rows of B\n";
        return 1;
    }

    std::cout << "Resultant matrix C:\n";
    printMatrix(multiply(A, B));

    return 0;
}
