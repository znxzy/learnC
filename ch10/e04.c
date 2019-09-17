/**
 * 第 10 章 练习题 4
 */

#include <stdio.h>

unsigned int stringLength(const char s[])
{
        unsigned int i = 0;

        while (s[i] != '\0') {
                ++i;
        }

        return i;
}

void substring(const char source[], unsigned int start, unsigned int count, char result[])
{
        unsigned int index, j, length;
        unsigned int stringLength(const char s[]);

        length = stringLength(source);

	index = 0;
	j = 0;

        if (count < length) {
                for (; source[index] != '\0'; ++index) {
                        if (index >= start && index <= (start + count - 1)) {
                                result[j] = source[start + j];
                                ++j;
                        }
                }
        }
        result[j] = '\0';
}

int main(void)
{
        void substring(const char source[], unsigned int start, unsigned int count, char result[]);
        const char s1[] = "character";
        char dest[30];

        substring(s1, 4, 3, dest);

        printf("\n%s\n", dest);

        return 0;
}
