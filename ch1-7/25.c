#include <stdio.h>

int main(void)
{
        int n, two_to_the_n;
        printf("TABLE OF POWERS OF TWO\n\n");
        printf("n\t2 to the n \n");
        printf("---\t----------------\n");

        two_to_the_n = 1;

        for (n = 0; n <= 10; ++n) {
                printf("%2i\t%4i\n", n, two_to_the_n);
                two_to_the_n *= 2;
        }
}