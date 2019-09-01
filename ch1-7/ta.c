// Next_multiple = i + j - i % j

#include <stdio.h>

int main(void)
{
    int i1 = 365, i2 = 12258, i3 = 996;
    int j1 = 7, j2 = 23, j3 = 4;

    printf("next_multiple = %i + %i - %i %% %i = %i\n", i1, j1, i1, j1, i1 + j1 - i1 % j1);
    printf("next_multiple = %i + %i - %i %% %i = %i\n", i2, j2, i2, j2, i2 + j2 - i2 % j2);
    printf("next_multiple = %i + %i - %i %% %i = %i\n", i3, j3, i3, j3, i3 + j3 - i3 % j3);

    return 0;
}