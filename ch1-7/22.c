/**
 * 打印 1 - 10 的平方数 表格
 */

#include <stdio.h>

int main(void)
{
        printf("%7s\t\t%14s\n", "Number", "Square Number");
        printf("--------\t---------------\n");

        for (int i = 1; i <= 10; ++i) {
                printf("%4i\t\t%13i\n", i, i * i);
        }

        return 0;
}