/**
 * Newton-Raphson 迭代法求平方根
 */

#include <stdio.h>

float absoluteValue(float x)
{
        if (x < 0) {
                return -x;
        }
        return x;
}

float squareRoot(float x)
{
        const float epsilon = 0.00001;
        float guess = 1.0;
        float absoluteValue(float x);

        if (x < 0) {
                return -1.0;
        }

        while (absoluteValue(guess * guess / x - 1.0) >= epsilon) {
                guess = (x / guess + guess) / 2.0;
        }

        return guess;
}

int main(void)
{
        float number;

        printf("请输入要计算的数字：");
        scanf("%f", &number);

        printf("%g\n", squareRoot(number));

        return 0;
}