#include <stdio.h>

int minimun(int values[], int numberOfElements)
{
        int minValue, i;

        minValue = values[0];

        for (i = 1; i < numberOfElements; ++i) {
                if (values[i] < minValue) {
                        minValue = values[i];
                }
        }
        return minValue;
}

int main(void)
{
        int array1[5] = { 157, -28, -37, 26, 10 };
        int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
        int minimun(int values[], int numberOfElements);

        printf("array1 minimun: %i\n", minimun(array1, 5));
        printf("array2 minimun: %i\n", minimun(array2, 7));

        return 0;
}
