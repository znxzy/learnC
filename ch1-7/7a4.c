/**
 * 第 7 章 练习 4： 
 * 编写一个程序，计算一个拥有 10 个 浮点数的数组中所有元素的平均值
 */

#include <stdio.h>

int main(void)
{
        float total, numbers[10] = { [0 ... 9] = 0.0 };
        int index = 0;

        printf("输入 10 个浮点数： ");
        do {
                scanf("%f", &numbers[index]);
                total += numbers[index];
                ++index;
        } while (index < 10);

        printf("平均数是：%g", total / 10);

        return 0;
}