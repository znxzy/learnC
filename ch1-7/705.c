/**
 * 数组快速初始化测试程序
 */

#include <stdio.h>

int main(void)
{
        int a[100] = { [0 ... 49] = 1 };
        char b[100] = { [50 ... 99] = 'a' };
        int index;

        for (index = 0; index < 100; ++index) {
                printf("%i\t%c\n", a[index], b[index]);
        }

        return 0;
}