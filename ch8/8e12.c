/**
 * 第 8 章 练习题 12
 */

#include "8e.h"


void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
        int i, j;

        for (i = 0; i < nRows; ++i){
                for (j = 0; j < nCols; ++j){
                        printf("%8i", matrix[i][j]);
                }
                printf("\n");
        }
        
        printf("\n");
}

// a
void transposeMatrix(int m[4][5], int n[5][4])
{
        int i, j;

        for (i = 0; i < 4; ++i){
                for (j = 0; j < 5; ++j){
                        n[j][i] = m[i][j];
                }
        }
}

// b
void transposeMatrixV(int nRows, int nCols, int m[nRows][nCols], int n[nCols][nRows])
{
        int row, cols;

        for (row = 0; row < nRows; ++row){
                for (cols = 0; cols < nCols; ++cols){
                        n[cols][row] = m[row][cols];
                }
        }
}