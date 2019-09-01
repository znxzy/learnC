/**
 * 第八章练习题 10： 编写一个名为 isPrime 的函数， 
 * bool isPrime(int n)
 */
#include "8e.h"

bool isPrime(int n)
{
        int p;
        bool isPrime;

        for (p = 2; p < n && isPrime != false; ++p) {
                isPrime = true;
                if (n % p == 0 && isPrime)
                        isPrime = false;
        }

        if (isPrime != false)
                isPrime = true;

        return isPrime;
}

/** 练习师 11： 编写一个名为 arraySum 的函数， 接收一个数组
 * 及其长度作为参数， 返回参数数组中所有元素的和
 */

int arraySum(int nRows, int array[nRows])
{
        int i;
        int result;

        result = 0;
        for (i = 0; i < nRows; ++i){
                result += array[i];
        }

        return result;
}