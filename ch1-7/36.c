/**
 * 习题6.3 
 * 从终端读入用户的两个整数，判断第一个数能否被第二个整数整除，并在屏幕上输出适当的信息
 */

#include <stdio.h>

int main(void)
{
        int first_number = 0;
        int second_number = 0;

        printf("请输入两个整数：");
        scanf("%i %i", &first_number, &second_number);

        (int)(first_number % second_number) ? printf("不能整除\n") : printf("能整除\n");

        return 0;
}