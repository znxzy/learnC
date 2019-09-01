#include <stdio.h>

int main(void)
{
        unsigned long long i, n, factorial;
        for (i = 1; i <= 100; ++i) {
                for (n = i, factorial = 1; n >= 1; --n) {
                        factorial *= n;
                }

                printf("%i\t%i\n", i, factorial);
        }

        return 0;
}