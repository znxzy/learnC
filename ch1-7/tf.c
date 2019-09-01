#include <stdio.h>

int main(void)
{
    int number, right_digit;

    printf("Enter your number: ");
    scanf("%i", &number);

    if ( number >= 0) {
        do{
            right_digit = number % 10;
            printf("%i", right_digit);
            number /= 10;
        } while(number != 0);
    }
    else {
        number = -number;
        do{
            right_digit = number % 10;
            printf("%i", right_digit);
            number /= 10;
        } while(number != 0);
        printf("-");
    }

    printf("\n");

    return 0;
}