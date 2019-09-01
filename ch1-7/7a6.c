/**
 * Program to generate the first 15 Fibonacci numbers
 * 
 */

#include <stdio.h>

int main(void)
{
        // 不再使用数组存储数列
        int a, b = 1, c = 0;
        int index = 0;

        do{
                printf("%i ", c);
                a = b + c;
                c = b;
                b = a;
                ++index;
        } while (index < 15);

        return 0;
}
