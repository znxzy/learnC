/**
 * Modified program to generate prime numbers
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
        int range = 1000;
        int p, i, primes[range], primeIndex = 2;
        bool isPrime;

        primes[0] = 2;
        primes[1] = 3;

        for (p = 5; p <= range; p += 2) {
                isPrime = true;

                for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
                        if (p % primes[i] == 0)
                                isPrime = false;
                }

                if (isPrime == true) {
                        primes[primeIndex] = p;
                        ++primeIndex;
                }
        }

        for (i = 0; i < primeIndex; ++i) {
                printf("%i ", primes[i]);
        }

        printf("\n");

        return 0;
}