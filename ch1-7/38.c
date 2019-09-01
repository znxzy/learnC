/**
 * 练习 6 - 4， 允许用户输入如下格式的版式：
 *      数字    操作符
 * 操作符可以是下面中的任意一个：
 *      +   -   *   /   S   E
 * 其中： S 表示记忆数字； E 表示结束程序。
 */

#include <stdio.h>

int main(void)
{
        float number, memory = 0;
        char operator;

        printf("请输入算式：");

        do {
                scanf("%f %c", &number, &operator);
                switch (operator) {
                case '+':
                        memory += number;
                        printf("= %f\n", memory);
                        break;
                case '-':
                        memory -= number;
                        printf("= %f\n", memory);
                        break;
                case '/':
                        (number) ? printf("= %f\n", memory /= number) : printf("错误：除数为 0\n= %f\n", memory);
                        break;
                case '*':
                        memory *= number;
                        printf("= %f\n", memory);
                        break;
                case 'E':
                        printf("= %f\n", memory);
                        break;
                case 'S':
                        memory = number;
                        printf("= %f\n", memory);
                        break;
                default:
                        printf("错误：未知操作数\n= %f\n", memory);
                        break;
                }
        } while (operator!= 'E');

        return 0;
}