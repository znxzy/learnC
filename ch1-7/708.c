/**
 * 生成 1 - 75 个 斐波那契数 (Fibonacci)
 * ----变长数组测试
 */

#include <stdio.h>

int main(void)
{
        int i, numbFibs;

        printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
        scanf("%i", &numbFibs);

        if(numbFibs < 1 || numbFibs > 75){
                printf("Bad number, sorry!\n");
                return 1;
        }

        unsigned long long int Fibonacci[numbFibs];

        Fibonacci[0] = 0;       // by definition
        Fibonacci[1] = 1;       // ditto

        for(i = 2; i < numbFibs; ++i)
                Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
        for (i = 0; i < numbFibs; ++i)
                printf("%llu ", Fibonacci[i]);

        printf("\n");

        return 0;
}