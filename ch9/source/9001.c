#include "../include/ch9.h"

int main(void)
{
        typedef struct {
                int month;
                int day;
                int year;
        } date;

        date today;

        today.month = 8;
        today.day = 30;
        today.year = 2019;

        printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

        return 0;
}