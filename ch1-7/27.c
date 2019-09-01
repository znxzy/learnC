#include <stdio.h>

int main(void)
{
        int number, sum = 0, right_digit;

        printf("Please enter your number: ");
        scanf("%i", &number);

        printf("The sum of %i is: ", number);
        do {
                right_digit = number % 10;
                sum += right_digit;
                number = number / 10;
        } while (number != 0);

        printf("%i", sum);

        return 0;
}