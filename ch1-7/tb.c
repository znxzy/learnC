#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 1; n <= 2; n += 1){
        printf("%i", n);
        triangularNumber += n;
    }

    printf("the 200th triangular number is %i\n", triangularNumber);

    return 0;
}