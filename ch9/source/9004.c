/**
 * 第 9 章 例 9.3 计算下一天日期，增加闰年
 */

#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct date {
        int month;
        int day;
        int year;
};

int numberOfDays(struct date d)
{
        int days;
        bool isLeapYear(struct date d);

        const int daysPerMonth[13] = { 0,
                31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31 };

        if (isLeapYear(d) == true && d.month == 2) {
                days = 29;
        } else {
                days = daysPerMonth[d.month];
        }

        return days;
}

bool isLeapYear(struct date d)
{
        bool isLeapYear;

        if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
                isLeapYear = true;
        } else {
                isLeapYear = false;
        }

        return isLeapYear;
}

bool isValidDate(int month, int day, int year)
{
        bool error = false;
        if ((month > 12 || month < 1) || (day > 31 || day < 1)) {
                error = true;
        }

        return error;
}

struct date dateUpdate(struct date thisDay)
{
        struct date tomorrow;
        int numberOfDays(struct date d);

        if (thisDay.day != numberOfDays(thisDay)) {
                tomorrow = (struct date){
                        .day = thisDay.day + 1,
                        .month = thisDay.month,
                        .year = thisDay.year
                };
                //tomorrow.day = thisDay.day + 1;
                //tomorrow.month = thisDay.month;
                //tomorrow.year = thisDay.year;
        } else if (thisDay.month == 12) { // 年尾
                tomorrow = (struct date){
                        .day = 1,
                        .month = 1,
                        .year = thisDay.year + 1
                };
                //tomorrow.day = 1;
                //tomorrow.month = 1;
                //tomorrow.year = thisDay.year + 1;
        } else { // 月末
                tomorrow = (struct date){ 1, thisDay.month + 1, thisDay.year };
                //tomorrow.day = 1;
                //tomorrow.month = thisDay.month + 1;
                //tomorrow.year = thisDay.year;
        }

        return tomorrow;
}

int main(void)
{
        bool error = false;

        bool isValid(int month, int day, int year);
        struct date dateUpdate(struct date today);
        struct date thisDay, nextDay;

        printf("Enter today's date (mm dd yyyy): ");

        do {
                if (error) {
                        printf("日期错误，请检查后重新输入\n");
                        fflush(stdin);
                }

                scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);
                error = isValidDate(thisDay.month, thisDay.day, thisDay.year);
        } while (error);

        nextDay = dateUpdate(thisDay);

        printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month,
            nextDay.day, nextDay.year % 100);

        return 0;
}