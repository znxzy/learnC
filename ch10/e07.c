/**
 * 练习题7
 */

#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
        void insertString(char source[], char text[], int position);
        char s[1000] = "the wrong son";

        insertString(s, "per", 10);
        printf("\n%s\n", s);

        return 0;
}
