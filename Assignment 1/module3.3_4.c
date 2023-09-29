#include <stdio.h>

// Function to add two matrices
void addMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[][100], int B[][100], int result[][100], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix dimensions do not match for multiplication.\n");
        return 1;
    }

    int A[100][100], B[100][100], result[100][100];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition
    if (rowsA == rowsB && colsA == colsB) {
        addMatrices(A, B, result, rowsA, colsA);
        printf("Matrix Addition:\n");
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsA; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix dimensions do not match for addition.\n");
    }

    // Subtraction
    if (rowsA == rowsB && colsA == colsB) {
        subtractMatrices(A, B, result, rowsA, colsA);
        printf("Matrix Subtraction:\n");
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsA; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix dimensions do not match for subtraction.\n");
    }

    // Multiplication
    multiplyMatrices(A, B, result, rowsA, colsA, colsB);
    printf("Matrix Multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
