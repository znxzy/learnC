/**
 * 第 10 章 练习题6
 */

#include <stdio.h>

void removeString(char text[], int index, int size)
{
	while (index <= size) {
                text[index] = text[index + size];
                ++index;
        }
	
	text[index] = '\0';
}


int main(void)
{
	char s[] = "the wrong son";

	removeString(s, 4, 6);
	printf("\n%s\n", s);

	return 0;
}
