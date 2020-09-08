#include<stdio.h>
#include<stdlib.h>

const int OPERATION_OK = 1;
const int OPERATION_ERROR = 0;

struct matrix {
    unsigned long int height;
    unsigned long int width;
    float *rows;
};

int scalar_matrix_mult(
    float scalar_value,
    struct matrix *matrix);

int matrix_matrix_mult(
    struct matrix *matrixA,
    struct matrix *matrixB,
    struct matrix *matrixC);