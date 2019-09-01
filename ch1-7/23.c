#include <stdio.h>

int main(void)
{
        int n, number, triangularNumber;

        for (n = 5; n <= 50; n += 5) {
                triangularNumber = n * (n + 1) / 2;
                printf("%i\t%i\n", n, triangularNumber);
        }

        return 0;
}