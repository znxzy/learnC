// 计算两个整数的最大公约数的函数

#include <stdio.h>

void gcd(int u, int v)
{
        int temp;

        printf("The gcd of %i and %i is ", u, v);

        while (v != 0){
                temp = u % v;
                u = v;
                v = temp;
        }

        printf("%i\n", u);
}

int main(void)
{
        int u, v;

        scanf("%i%i", &u, &v);
        gcd(u, v);

        return 0;
}