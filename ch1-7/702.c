#include <stdio.h>

int main(void)
{
        int ratingCounters[11], i, response;

        for (i = 1; i <= 10; ++i)
                ratingCounters[i] = 0;

        printf("Enter your responses\n");

        // 修改程序逻辑以处理更多输入
        do {
                scanf("%i", &response);
                if (response > 1 && response < 10)
                        ++ratingCounters[response];
                else
                        printf("Bad response: %i\n", response);
        } while (response != 999);

        printf("\n\nRating Number of Responses\n");
        printf("------ --------------------\n");

        for (i = 1; i <= 10; ++i)
                printf("%4i%14i\n", i, ratingCounters[i]);

        return 0;
}