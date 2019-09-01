#include <stdio.h>

int main(void)
{
        float number;

        printf(" Type in your number: ");
        scanf("%g", &number);
        if (number < 0)
                printf("The absolute value is %g\n", -number);
        else
                printf("%g\n", number);

        return 0;
}