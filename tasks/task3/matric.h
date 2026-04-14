#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    int **data;
} Matrix;

Matrix createMatrix(int r, int c);
void inputMatrix(Matrix m);
void printMatrix(Matrix m);

Matrix addMatrix(Matrix a, Matrix b);
Matrix subMatrix(Matrix a, Matrix b);

#endif
