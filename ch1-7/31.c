/**
 * Program to determines is a year is a leap year
 */

#include <stdio.h>

int main(void)
{
        int year, rem_4, rem_100, rem_400, i;

        printf("Enter the year to be tested to: ");
        scanf("%i", &year);

        for (i = 0; i <= year; ++i) {
                rem_4 = i % 4;
                rem_100 = i % 100;
                rem_400 = i % 400;

                if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0) {
                        printf("Year %i is a leap year.\n", i);
                }
        }

        return 0;
}