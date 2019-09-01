#include "8e.h"

int main(void)
{
        void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
        void transposeMatrix(int m[4][5], int n[5][4]);
        void transposeMatrixV(int nRows, int nCols, int m[nRows][nCols], int n[nCols][nRows]);

        int m[4][5] = {
                { 11, 12, 13, 14, 15 },
                { 21, 22, 23, 24, 24 },
                { 31, 32, 33, 34, 35 },
                { 41, 42, 43, 44, 45 }
        };

        int n[5][4] = {
                { [0 ... 3] = 1 },
                { [0 ... 3] = 2 },
                { [0 ... 3] = 3 },
                { [0 ... 3] = 4 },
                { [0 ... 3] = 5 }
        };

        printf("Original matrix:\n");
        displayMatrix(4, 5, m);
        displayMatrix(5, 4, n);

        //transposeMatrix(m, n);
        //displayMatrix(5, 4, n);

        printf("Transposed matrix:\n");
        transposeMatrixV(4, 5, m, n);
        displayMatrix(5, 4, n);

        return 0;
}