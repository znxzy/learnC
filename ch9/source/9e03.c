/**
 * 第 9 章 练习题 3：
 *      编写一个名为 elapsed_time 的函数，计算两个参数之间流逝的时间
 */

#include <stdio.h>

struct time {
        int hour;
        int minute;
        int second;
};

int main(void)
{
        struct time elapsed_time(struct time t1, struct time t2);
        int eclapsed_seconds(struct time tp, struct time tn);

        struct time time1, time2;
        struct time et;

        printf("请输入第一个时间 (hh:mm:ss)： ");
        scanf("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);

        printf("请输入第二个时间 (hh:mm:ss)： ");
        scanf("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);

        et = elapsed_time(time1, time2);
        printf("过了 %i:%i:%i \n", et.hour, et.minute, et.second);
        
        return 0;
}

struct time elapsed_time(struct time t1, struct time t2)
{
        int eclapsed_seconds(struct time tp, struct time tn);
        struct time time;
        int ts;

        ts = eclapsed_seconds(t1 ,t2);

        time.hour = ts / 3600;
        time.minute = (ts % 3600) / 60;
        time.second = (ts % 3600) % 60;

        return time;
}

int eclapsed_seconds(struct time tp, struct time tn)
{
        int seconds, s1, s2;

        if (tn.hour == 0 && tn.minute == 0 && tn.second == 0) {
                s1 = tp.hour * 3600 + tp.minute * 60 + tp.second;
                seconds = 86400 - s1;
        } else {
                s1 = tp.hour * 3600 + tp.minute * 60 + tp.second;
                s2 = tn.hour * 3600 + tn.minute * 60 + tn.second;
                seconds = s2 - s1;
        }

        return seconds;
}