/**
 * 第 10 章 练习题6
 */

#include <stdio.h>

void removeString(char text[], int index, int size)
{
        int i;

        for (i = 0; text[i] != '\0'; ++i) {
		if (i <= index) {
                        text[i] = text[i];
                } else if (i < (index + size)){
                        continue;
                } else {
                	text[i - size] = text[i];
		}
        }

        text[i - size] = '\0';
}


int main(void)
{
	char s[] = "the wrong son";

	removeString(s, 4, 6);
	printf("\n%s\n", s);

	return 0;
}
