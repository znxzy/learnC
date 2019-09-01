/**
 * 用 埃拉托色尼筛网法（Sieve of Erastosthenes) 寻找 150 以内的质数
 */

#include <stdio.h>

int main()
{
        int i, j, primes[150] = {[2 ... 149] = 1};

        for (i = 2; j < 150; ++i) {
                if (primes[i]) {
                        for (j = i; i * j < 150; ++j) {
                                primes[i * j] = 0;
                        }
                }
        }

        for (i = 2; i < 150; ++i) {
                if (primes[i]) {
                        printf("%i ", i);
                }
        }

        printf("\n");
        return 0;
}