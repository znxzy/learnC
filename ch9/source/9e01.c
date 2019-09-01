// 第 9 章 课后练习题 2 

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
};

int main(void)
{
        int nDays(struct date d[]);
        struct date d[2] = { 
                { 2004, 8, 8 },
                { 2005, 2, 22 } };

        int days;

        days = nDays(d);

        printf("从 %i 年 %i 月 %i 日 到 %i 年 %i 月 %i 日之间有 %i 天\n",
                d[0].year, d[0].month, d[0].day,
                d[1].year, d[1].month, d[1].day,
                days);

        return 0;
}

/**
 * N = 1461 * f(年， 月) / 4 + 153 * g(月) / 5 + 日
 * f(年， 月)  = 年 - 1  如果 月 <= 2
 *            = 年      其他情况
 * 
 * g(月)      = 月 + 13 如果 月 <= 2
 *            = 月 + 1  其他情况
 * 
 * 此公式适用于任何 1900 年 3 月 1 日以后的日子。 
 *      1800 年 3 月 1 --- 1900 年 2 月 28   N 值加 1，
 *      1700 年 3 月 1 --- 1800 年 2 月 28   N 值加 2。
 */

int nDays(struct date d[])
{
        int days, n1, n2;
        int f(int year, int month);
        int g(int month);

        n1 = 1461 * f(d[0].year, d[0].month) / 4 + 153 * g(d[0].month) / 5 + d[0].day;
        n2 = 1461 * f(d[1].year, d[1].month) / 4 + 153 * g(d[1].month) / 5 + d[1].day;

        days = n2 - n1;

        return days;
}

int f(int year, int month)
{
        int y;

        if ( month <= 2){
                y = year - 1;
        } else {
                y = year;
        }

        return y;
}

int g(int month)
{
        int m;

        if (month <= 2){
                m = month + 13;
        } else {
                m = month + 1;
        }

        return m;
}