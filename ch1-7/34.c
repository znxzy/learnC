// Program to generate a table of prime numbers

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
        int n, d;
        _Bool isPrime;

        for (n = 2; n <= 50; ++n) {
                isPrime = true;

                for (d = 2; d < n; ++d) {
                        if (n % d == 0) {
                                isPrime = false;
                        }
                }
                if (isPrime != false) {
                        printf("%i\n", n);
                }
        }
        printf("\n");

        return 0;
}