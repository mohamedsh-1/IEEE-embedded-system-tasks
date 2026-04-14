#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

// create matrix
Matrix createMatrix(int r, int c) {
    Matrix m;
    m.rows = r;
    m.cols = c;

    m.data = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        m.data[i] = (int*)malloc(c * sizeof(int));
    }

    return m;
}

// input
void inputMatrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            scanf("%d", &m.data[i][j]);
        }
    }
}

// print
void printMatrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }
}

// addition
Matrix addMatrix(Matrix a, Matrix b) {
    Matrix res = createMatrix(a.rows, a.cols);

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            res.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }

    return res;
}

// subtraction
Matrix subMatrix(Matrix a, Matrix b) {
    Matrix res = createMatrix(a.rows, a.cols);

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < a.cols; j++) {
            res.data[i][j] = a.data[i][j] - b.data[i][j];
        }
    }

    return res;
}
