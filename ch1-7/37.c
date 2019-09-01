/**
 * 练习 6 - 3， 从终端输入两个数字，显示第一个数除以第二个数的结果，要求结果显示 3 位小数
 */

#include <stdio.h>

int main(void)
{
        float first_number;
        float second_number;

        printf("请输入两个数字：");
        scanf("%f%f", &first_number, &second_number);

        (second_number) ? printf("%g / %g = %.3f\n", first_number,
                              second_number, first_number / second_number)
                        : printf("错误： 除数为 0\n");

        return 0;
}