// 计算第二天日期的程序
#include "../include/ch9.h"

bool isValid(int month, int day, int year)
{
        bool error = false;
        if ((month > 12 || month < 1) || (day > 31 || day < 1)) {
                error = true;
        }

        return error;
}

int main(void)
{
        struct date {
                int month;
                int day;
                int year;
        };

        bool error = false;
        bool isValid(int month, int day, int year);

        struct date today, tomorrow;

        const int daysPerMonth[13] = { 0,
                31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31 };

        printf("Enter today's date (mm dd yyyy): ");
        do {
                if (error) {
                        printf("日期错误，请检查后重新输入\n");
                        fflush(stdin);
                }

                scanf("%i%i%i", &today.month, &today.day, &today.year);
                error = isValid(today.month, today.day, today.year);
        } while (error);

        if (today.day != daysPerMonth[today.month]) {
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
