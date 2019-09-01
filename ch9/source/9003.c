/**
 * 第 9 章 例 9.3 计算下一天日期，增加闰年
 */

#include "../include/ch9.h"

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

int main(void)
{
        bool error = false;
        bool isValid(int month, int day, int year);

        struct date today, tomorrow;

        printf("Enter today's date (mm dd yyyy): ");
        do {
                if (error) {
                        printf("日期错误，请检查后重新输入\n");
                        fflush(stdin);
                }

                scanf("%i%i%i", &today.month, &today.day, &today.year);
                error = isValidDate(today.month, today.day, today.year);
        } while (error);

        if (today.day != numberOfDays(today)) {
                tomorrow.day = today.day + 1;
                tomorrow.month = today.month;
                tomorrow.year = today.year;
        } else if (today.month == 12) { // 年尾
                tomorrow.day = 1;
                tomorrow.month = 1;
                tomorrow.year = today.year + 1;
        } else { // 月末
                tomorrow.day = 1;
                tomorrow.month = today.month + 1;
                tomorrow.year = today.year;
        }

        printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month,
            tomorrow.day, tomorrow.year % 100);

        return 0;
}