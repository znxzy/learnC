#include <stdio.h>

#define OS_BIT ((sizeof(void*)) * 8)

int main(void)
{
        printf("%i\n", OS_BIT);

        double a;

        printf("is %i, %i", __SIZEOF_DOUBLE__, __SIZEOF_LONG_DOUBLE__ /*  * 8 */);
        return 0;
}