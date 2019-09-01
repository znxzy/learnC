/**
 * 将一个正整数转换为其他基数
 */
#include "8e.h"

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

bool getNumberAndBase(void)
{
        printf("Number to be converted? ");
        scanf("%li", &numberToConvert);

        /**
         * 根据习题 15、16 要求修改程序
         * 1. 当输入无效时提示基数错误并要求重新输入直到正确为止
         * 2. 用户可以轮换任意多个整数。当输入 0 时，程序中止。
         * 2019-08-29 17:19:39
         */

        if (numberToConvert == 0) {
                return false;
        }

        printf("Base? ");
        do {
                scanf("%i", &base);

                if (base < 2 || base > 16) {
                        printf("Bad base - must be between 2 and 16\n");
                }
        } while (base < 2 || base > 16);

        return true;
}

void convertNumber(void)
{
        int temp = numberToConvert;
        do {
                convertedNumber[digit] = temp % base;
                ++digit;
                temp /= base;
        } while (temp != 0);
}

void displayConvertedNumber(void)
{
        const char baseDigits[16] = {
                '0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
        };
        int nextDigit;

        printf("Converted number = ");

        for (--digit; digit >= 0; --digit) {
                nextDigit = convertedNumber[digit];
                printf("%c", baseDigits[nextDigit]);
        }

        printf("\n");
}

int main(void)
{
        //2. 用户可以轮换任意多个整数。当输入 0 时，程序中止。
        do {
                if (getNumberAndBase()) {
                        convertNumber();
                        displayConvertedNumber();
                }
                // 变量重置
                memset(convertedNumber, 0, sizeof(convertedNumber));
                digit = 0;
        } while (numberToConvert != 0);

        return 0;
}