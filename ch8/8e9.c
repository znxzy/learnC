/**
 * e8.9  编写函数 lcm， 用于计算两个整数的最小公倍数
 */
#include <stdio.h>

int gcd(int u, int v)
{
        int temp;

        while (v != 0){
                temp = u % v;
                u = v;
                v = temp;
        }

        return u;
}

int lcm(int u, int v)
{
        int result;

        if (u >= 0 && v >= 0){
                result = u * v / gcd(u, v);
        }

        return result;
}

int main(void)
{
        int u, v;
        int gcd(int u, int v);
        int lcm(int u, int v);

        printf("请输入两个整数：");
        scanf("%i%i", &u, &v);

        printf("\n整数 %i 与 %i 的最小公倍数是：%i\n", u, v, lcm(u, v));
        
        return 0;
}