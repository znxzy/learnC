/** 
 * 将数组按照升序排列
 */

#include <stdio.h>

void sort(int a[], int n)
{
        int i, j, temp;

        for (i = 0; i < n - 1; ++i){
                for (j = i + 1; j < n; ++j){
                        if (a[i] > a[j]){
                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                        }
                }
        }
}

int main(void)
{
        int i;
        int array[16] = { 34, -5, 4, -342, 54, 85, 64, 98,
                44, -3, -9, 123, 394, 48, 56, 3 };
        void sort(int a[], int n);

        printf("The array before the sort: \n");

        for (i = 0; i < 16; ++i)
                printf("%i ", array[i]);

        sort(array, 16);

        printf("\n\nThe array after the sort: \n");

        for (i = 0; i < 16; ++i)
            printf("%i ", array[i]);

        printf("\n");

        return 0;
}