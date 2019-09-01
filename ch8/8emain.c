/**
 * 第 8 章练习题 main 函数文件
 */
#include "8e.h"

int main(void)
{
        int number;
        bool isPrime(int n);

        printf("Please type in a integer: ");
        scanf("%i", &number);

        if (isPrime(number))
                printf("\n%i is a prime.\n", number);
        else {
                printf("\n%i is not a prime.\n", number);
        }
        
        int arraySum(int nRows, int array[nRows]);

        int array[6] = { 1, 2, 3, 4, 5, 6 };

        printf("arraySum = %i", arraySum(6, array));

        return 0;
}