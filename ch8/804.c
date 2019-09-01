/**
 * 计算第 n 个三角形数的函数
 */
#include <stdio.h>

void calculateTriangularNumber(int n)
{
        int i, triangularNumber = 0;

        for (i = 1; i <= n; ++i) {
                triangularNumber += i;
        }

        printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void)
{
        int n;
        scanf("%i", &n);
        calculateTriangularNumber(n);

        return 0;
}