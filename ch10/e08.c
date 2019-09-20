/**
 * 第 10 章 练习题 8：
 * 编写 ReplaceString 函数：使用练习 5 - 7 中编写用函数
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int findString(char source[], char pattern[])
{
        int i, j, index;
        bool found = false;
        int stringLength(char s[]);

        for (i = 0; source[i] != '\0'; ++i) {
		if (!found) {
                        if (source[i] == pattern[0]) {
                                j = 0;
                                if (pattern[j] != '\0') {
                                        while (pattern[j] == source[i + j]) {
                                                ++j;
                                        }
                                }
                                if ( j == stringLength(pattern)) {
                                        found = true;
                                        index = i;
                                } 
                        }
                }
	}

        if (!found) {
                index = -1;
        }

        return index;
}

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

void insertString(char source[], char text[], int position)
{
        int index, offset, size, sourceLength, textLength;
        int stringLength(char s[]);

        sourceLength = stringLength(source);
        textLength = stringLength(text);

        if (position > sourceLength) {
                fprintf(stderr, "访问越界\n");
                exit(1);
        } else {
                offset = textLength;
                index = sourceLength;
                size = sourceLength - position;
                while (size >= 0) {
                        source[index + offset] = source[index];
                        --size;
                        --index;
                }

                offset = 0;
                while (offset < textLength) {
                        source[position + offset] = text[offset];
                        ++offset;
                }
        }

        source[sourceLength + textLength + 1] = '\0';
}

int stringLength(char s[])
{
        int length;
        length = 0;

        while (s[length] != '\0') {
                ++length;
        }

        return length;
}

void replaceString(char source[], char pattern[], char substitution[])
{
        int stringLength(char s[]);
        int findString(char source[], char pattern[]);
        void insertString(char source[], char text[], int position);
        void removeString(char text[], int index, int size);

        int position, lengthOfPattern;
        position = findString(source, pattern);
        lengthOfPattern = stringLength(pattern);

        removeString(source, position, lengthOfPattern);
        insertString(source, substitution, position);
}


int main(void)
{
        void replaceString(char source[], char pattern[], char substitution[]);
        char s[80] = "this is a test string";

        replaceString(s, " ", "*");
        printf("%s\n", s);

        return 0;
}