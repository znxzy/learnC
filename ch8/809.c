// 找出数组中最小元素的函数

#include <stdio.h>

int minimum(int values[10])
{
        int minValue, i;

        minValue = values[0];

        for (i = 1; i < 10; ++i){
                if(values[i] < minValue){
                        minValue = values[i];
                }
        }

        return minValue;
}

int main(void)
{
        int scores[10], i, minScore;
        int minimum(int values[10]);

        printf("输入 10 个数字\n");

        for (i = 0; i < 10; ++i){
                scanf("%i", &scores[i]);
        }

        minScore = minimum(scores);
        printf("最小的数字是：%i\n", minScore);

        return 0;
}