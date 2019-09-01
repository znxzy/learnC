/**
 * Program to evaluate simple expressions of the form
 *      value operator value
 */

#include <stdio.h>

int main(void)
{
        float left_value, right_value;
        char operator;

        printf("输入表达式\n");
        scanf("%f %c %f", &left_value, &operator, & right_value);

        switch (operator) {
        case '+':
                printf("%g + %g = %g\n", left_value, right_value, left_value + right_value);
                break;
        case '-':
                printf("%g - %g = %g\n", left_value, right_value, left_value - right_value);
                break;
        case '/':
                if (right_value == 0) {
                        printf("Division by zero.\n");
                } else {
                        printf("%g / %g = %g\n", left_value, right_value, left_value / right_value);
                }
                break;
        case '*':
                printf("%g * %g = %g\n", left_value, right_value, left_value * right_value);
                break;

        default:
                printf("Unknow operator.\n");
                break;
        }

        return 0;
}
